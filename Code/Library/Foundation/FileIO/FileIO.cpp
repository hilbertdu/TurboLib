// FileIO.cpp
//------------------------------------------------------------------------------

// Includes
//------------------------------------------------------------------------------
#include "Foundation/FileIO/FileIO.h"
#include "Foundation/FileIO/FileStream.h"
#include "Foundation/FileIO/PathUtils.h"
#include "Foundation/Process/Thread.h"
#include "Foundation/String/String.h"
#include "Foundation/Time/Timer.h"

// system
#if defined(__WINDOWS__)
	#include <windows.h>
#endif
#if defined(__LINUX__) || defined(__APPLE__)
	#include <dirent.h>
	#include <errno.h>
	#include <limits.h>
	#include <stdio.h>
	#include <sys/stat.h>
	#include <unistd.h>
#endif
#if defined(__LINUX__)
	#include <fcntl.h>
	#include <sys/sendfile.h>
#endif
#if defined(__APPLE__)
	#include <copyfile.h>
	#include <sys/time.h>
#endif

// Exists
//------------------------------------------------------------------------------
/*static*/ bool FileIO::FileExists(const char * fileName)
{
#if defined(__WINDOWS__)
	// see if we can get attributes
	DWORD attributes = GetFileAttributesA(fileName);
	if (attributes == INVALID_FILE_ATTRIBUTES)
	{
		return false;
	}
	return true; // note this might not be file!
#elif defined(__LINUX__) || defined(__APPLE__)
	struct stat st;
	if (stat(fileName, &st) == 0)
	{
		if ((st.st_mode & S_IFDIR) != S_IFDIR)
		{
			return true; // exists and is NOT a folder
		}
	}
	return false;
#else
	#error Unknown platform
#endif
}

// Delete
//------------------------------------------------------------------------------
/*static*/ bool FileIO::FileDelete(const char * fileName)
{
#if defined(__WINDOWS__)
	BOOL result = DeleteFileA(fileName);
	if (result == FALSE)
	{
		return false; // failed to delete
	}
	return true; // delete ok
#elif defined(__LINUX__) || defined(__APPLE__)
	if (GetReadOnly(fileName))
	{
		return false;
	}
	return (remove(fileName) == 0);
#else
	#error Unknown platform
#endif
}

// Copy
//------------------------------------------------------------------------------
/*static*/ bool FileIO::FileCopy(const char * srcFileName, const char * dstFileName, bool allowOverwrite)
{
#if defined(__WINDOWS__)
	BOOL failIfDestExists = (allowOverwrite ? FALSE : TRUE);
	BOOL result = CopyFileA(srcFileName, dstFileName, failIfDestExists);
	if (result == FALSE)
	{
		// even if we allow overwrites, Windows will fail if the dest file
		// was read only, so we have to un-mark the read only status and try again
		if ((GetLastError() == ERROR_ACCESS_DENIED) && (allowOverwrite))
		{
			// see if dst file is read-only
			DWORD dwAttrs = GetFileAttributesA(dstFileName);
			if (dwAttrs == INVALID_FILE_ATTRIBUTES)
			{
				return false; // can't even get the attributes, nothing more we can do
			}
			if (0 == (dwAttrs & FILE_ATTRIBUTE_READONLY))
			{
				return false; // file is not read only, so we don't know what the problem is
			}

			// try to remove read-only flag on dst file
			dwAttrs = (dwAttrs & ~FILE_ATTRIBUTE_READONLY);
			if (FALSE == SetFileAttributesA(dstFileName, dwAttrs))
			{
				return false; // failed to remove read-only flag
			}

			// try to copy again
			result = CopyFileA(srcFileName, dstFileName, failIfDestExists);
			return (result == TRUE);
		}
	}

	return (result == TRUE);
#elif defined(__APPLE__)
	if (allowOverwrite == false)
	{
		if (FileExists(dstFileName))
		{
			return false;
		}
	}
	copyfile_state_t s;
	s = copyfile_state_alloc();
	bool result = (copyfile(srcFileName, dstFileName, s, COPYFILE_DATA | COPYFILE_XATTR) == 0);
	copyfile_state_free(s);
	return result;
#elif defined(__LINUX__)
	if (allowOverwrite == false)
	{
		if (FileExists(dstFileName))
		{
			return false;
		}
	}

	int source = open(srcFileName, O_RDONLY, 0);
	if (source < 0)
	{
		return false;
	}

	int dest = open(dstFileName, O_WRONLY | O_CREAT | O_TRUNC, 0644); // TODO:LINUX Check args for FileCopy dst
	if (dest < 0)
	{
		close(source);
		return false;
	}

	struct stat stat_source;
	VERIFY(fstat(source, &stat_source) == 0);

	ssize_t bytesCopied = sendfile(dest, source, 0, stat_source.st_size);

	close(source);
	close(dest);

	return (bytesCopied == stat_source.st_size);
#else
	#error Unknown platform
#endif
}

// FileMove
//------------------------------------------------------------------------------
/*static*/ bool FileIO::FileMove(const AString & srcFileName, const AString & dstFileName)
{
#if defined(__WINDOWS__)
	return (TRUE == ::MoveFileExA(srcFileName.Get(), dstFileName.Get(), MOVEFILE_REPLACE_EXISTING));
#elif defined(__LINUX__) || defined(__APPLE__)
	return (rename(srcFileName.Get(), dstFileName.Get()) == 0);
#else
	#error Unknown platform
#endif
}

// DirectoryDelete
//------------------------------------------------------------------------------
bool FileIO::DirectoryDelete(const AString & dirName, bool deleteSubdirs)
{
	// To be implement
#if defined(__WINDOWS__)
	bool            bSubdirectory = false;       // Flag, indicating whether
	// subdirectories have been found
	HANDLE          hFile;                       // Handle to directory
	AStackString<>	strFilePath;                 // Filepath
	AStackString<>	strPattern(dirName);         // Pattern
	WIN32_FIND_DATAA ffd;             // File information

	strPattern += "\\*.*";
	hFile = ::FindFirstFileA(strPattern.Get(), &ffd);
	if (INVALID_HANDLE_VALUE == hFile)
	{
		return false;
	}
	do
	{
		if (ffd.cFileName == "." || ffd.cFileName == "..")
		{
			continue;
		}
		strFilePath = dirName;
		strFilePath += "\\";
		strFilePath += ffd.cFileName;

		if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			if (deleteSubdirs)
			{
				// Delete subdirectory
				bool ret = DirectoryDelete(strFilePath, deleteSubdirs);
				if (!ret)
				{
					return ret;
				}
			}
			else
				bSubdirectory = true;
		}
		else
		{
			bool ret = FileDelete(strFilePath.Get());
			if (!ret)
			{
				return ret;
			}
		}
	} while (::FindNextFileA(hFile, &ffd) == TRUE);

	// Close handle
	::FindClose(hFile);

	DWORD dwError = ::GetLastError();
	if (dwError != ERROR_NO_MORE_FILES)
	{
		return false;
	}
	else
	{
		if (!bSubdirectory)
		{
			::SetFileAttributesA(dirName.Get(), FILE_ATTRIBUTE_NORMAL);
			if (::RemoveDirectoryA(dirName.Get()) == FALSE)
			{
				return false;
			}
		}
	}
#elif defined(__LINUX__) || defined(__APPLE__)
	// TODO: LINUX Implement
#endif
	return true;
}

// GetFiles
//------------------------------------------------------------------------------
/*static*/ bool FileIO::GetFiles(const AStringView & path, const AStringView & wildCard, bool recurse, Array<AString> * results, bool includeDir)
{
	ASSERT(results);

	size_t oldSize = results->GetSize();
	if (recurse)
	{
		// make a copy of the path as it will be modified during recursion
		AStackString<> pathCopy(path.Get());
		PathUtils::EnsureTrailingSlash((AStringRef)pathCopy);
		GetFilesRecurse((AStringRef)pathCopy, wildCard, results);
	}
	else
	{
		GetFilesNoRecurse(path.Get(), wildCard.Get(), results);
	}

	return (results->GetSize() != oldSize);
}

// GetFilesEx
//------------------------------------------------------------------------------
/*static*/ bool FileIO::GetFilesEx(const AStringView & path, const AStringView & wildCard, bool recurse, Array<FileInfo> * results, bool includeDir)
{
	ASSERT(results);

	size_t oldSize = results->GetSize();
	if (recurse)
	{
		// make a copy of the path as it will be modified during recursion
		AStackString<> pathCopy(path.Get());
		PathUtils::EnsureTrailingSlash((AStringRef)pathCopy);
		GetFilesRecurseEx((AStringRef)pathCopy, wildCard, results, includeDir);
	}
	else
	{
		GetFilesNoRecurseEx(path.Get(), wildCard.Get(), results, includeDir);
	}

	return (results->GetSize() != oldSize);
}

// GetFileInfo
//------------------------------------------------------------------------------
/*static*/ bool FileIO::GetFileInfo(const AStringView & fileName, FileIO::FileInfo & info)
{
#if defined(__WINDOWS__)
	WIN32_FILE_ATTRIBUTE_DATA fileAttribs;
	if (GetFileAttributesExA(fileName.Get(), GetFileExInfoStandard, &fileAttribs))
	{
		info.m_Name = fileName.Get();
		info.m_Attributes = fileAttribs.dwFileAttributes;
		info.m_LastWriteTime = (uint64_t)fileAttribs.ftLastWriteTime.dwLowDateTime | ((uint64_t)fileAttribs.ftLastWriteTime.dwHighDateTime << 32);
		info.m_Size = (uint64_t)fileAttribs.nFileSizeLow | ((uint64_t)fileAttribs.nFileSizeHigh << 32);
		return true;
	}
#elif defined(__APPLE__) || defined(__LINUX__)
	struct stat s;
	if (stat(fileName.Get(), &s) == 0)
	{
		info.m_Name = fileName;
		info.m_Attributes = s.st_mode;
#if defined(__APPLE__)
		info.m_LastWriteTime = (((uint64_t)s.st_mtimespec.tv_sec * 1000000000ULL) + (uint64_t)s.st_mtimespec.tv_nsec);
#else
		info.m_LastWriteTime = (((uint64_t)s.st_mtim.tv_sec * 1000000000ULL) + (uint64_t)s.st_mtim.tv_nsec);
#endif
		info.m_Size = s.st_size;
		return true;
	}
#endif
	return false;
}

// GetFileName
//------------------------------------------------------------------------------
/*static*/ void FileIO::GetFileName(const AStringView & filePath, AString & fileName)
{
	const char *posStart = filePath.FindLast(NATIVE_SLASH);
	posStart = posStart == nullptr ? filePath.Get() : posStart;
	fileName = AString(posStart, filePath.GetEnd());
}

// GetCurrentDir
//------------------------------------------------------------------------------
/*static*/ bool FileIO::GetCurrentDir(AStringRef & output)
{
#if defined(__WINDOWS__)
	char buffer[MAX_PATH];
	DWORD len = GetCurrentDirectoryA(MAX_PATH, buffer);
	if (len != 0)
	{
		output = buffer;
		return true;
	}
#elif defined(__LINUX__) || defined(__APPLE__)
	const size_t bufferSize(PATH_MAX);
	char buffer[bufferSize];
	if (getcwd(buffer, bufferSize))
	{
		output = buffer;
		return true;
	}
#else
	#error Unknown platform
#endif
	return false;
}

// SetCurrentDir
//------------------------------------------------------------------------------
/*static*/ bool FileIO::SetCurrentDir(const AString & dir)
{
#if defined(__WINDOWS__)
	// Windows can have upper or lower case letters in the path for the drive
	// letter.  The case may be important for the user, but setting the current 
	// dir with only a change in case is ignored.
	// To ensure we have the requested case, we have to change dir to another
	// location, and then the location we want.

	// get another valid location to set as the dir
	// (we'll use the windows directory)
	char otherFolder[512];
	otherFolder[0] = 0;
	UINT len = ::GetWindowsDirectoryA(otherFolder, 512);
	if ((len == 0) || (len > 511))
	{
		return false;
	}

	// handle the case where the user actually wants the windows dir
	if (_stricmp(otherFolder, dir.Get()) == 0)
	{
		// use the root of the drive containing the windows dir
		otherFolder[3] = 0;
	}

	// set "other" dir
	if (::SetCurrentDirectoryA(otherFolder) == FALSE)
	{
		return false;
	}

	// set the actual directory we want
	if (::SetCurrentDirectoryA(dir.Get()) == TRUE)
	{
		return true;
	}
#elif defined(__LINUX__) || defined(__APPLE__)
	if (chdir(dir.Get()) == 0)
	{
		return true;
	}
#else
#error Unknown platform
#endif
	return false;
}

// GetTempDir
//------------------------------------------------------------------------------
/*static*/ bool FileIO::GetTempDir(AString & output)
{
#if defined(__WINDOWS__)
	char buffer[MAX_PATH];
	DWORD len = GetTempPathA(MAX_PATH, buffer);
	if (len != 0)
	{
		output = buffer;
		return true;
	}
#elif defined(__LINUX__) || defined(__APPLE__)
	output = "/tmp/";
	return true;
#else
#error Unknown platform
#endif
	return false;
}

// DirectoryCreate
//------------------------------------------------------------------------------
/*static*/ bool FileIO::DirectoryCreate(const AString & path)
{
#if defined(__WINDOWS__)
	if (CreateDirectoryA(path.Get(), nullptr))
	{
		return true;
	}

	// it failed - is it because it exists already?
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		return true;
	}
#elif defined(__LINUX__) || defined(__APPLE__)
	umask(0); // disable default creation mask
	mode_t mode = S_IRWXU | S_IRWXG | S_IRWXO; // TODO:LINUX TODO:MAC Check these permissions
	if (mkdir(path.Get(), mode) == 0)
	{
		return true; // created ok
	}

	// failed to create - already exists?
	if (errno == EEXIST)
	{
		return true;
	}
#else
#error Unknown platform
#endif

	// failed, probably missing intermediate folders or an invalid name
	return false;
}

// DirectoryExists
//------------------------------------------------------------------------------
/*static*/ bool FileIO::DirectoryExists(const AString & path)
{
#if defined(__WINDOWS__)
	DWORD res = GetFileAttributesA(path.Get());
	if ((res != INVALID_FILE_ATTRIBUTES) &&
		((res & FILE_ATTRIBUTE_DIRECTORY) != 0))
	{
		return true; // exists and is a folder
	}
#elif defined(__LINUX__) || defined(__APPLE__)
	struct stat st;
	if (stat(path.Get(), &st) == 0)
	{
		if ((st.st_mode & S_IFDIR) != 0)
		{
			return true; // exists and is folder
		}
	}
#else
#error Unknown platform
#endif
	return false; // doesn't exist, isn't a folder or some other problem
}

//------------------------------------------------------------------------------
/*static*/ bool FileIO::EnsurePathExists(const AString & path)
{
	// if the entire path already exists, nothing is to be done
	if (DirectoryExists(path))
	{
		return true;
	}

	// take a copy to locally manipulate
	AStackString<> pathCopy(path);
	PathUtils::FixupFolderPath((AStringRef)pathCopy); // ensure correct slash type and termination

	// handle UNC paths by skipping leading slashes and machine name
	char * slash = pathCopy.Get();
#if defined(__WINDOWS__)
	if (*slash == NATIVE_SLASH)
	{
		while (*slash == NATIVE_SLASH) { ++slash; } // skip leading double slash
		while (*slash != NATIVE_SLASH) { ++slash; } // skip machine name
		++slash; // move into first dir name, so next search will find dir name slash
	}
#endif

#if defined(__LINUX__) || defined(__APPLE__)
	// for full paths, ignore the first slash
	if (*slash == NATIVE_SLASH)
	{
		++slash;
	}
#endif

	slash = pathCopy.Find(NATIVE_SLASH, slash);
	if (!slash)
	{
		return false;
	}
	do
	{
		// truncate the string to the sub path
		*slash = '\000';
		if (DirectoryExists(pathCopy) == false)
		{
			// create this level
			if (DirectoryCreate(pathCopy) == false)
			{
				return false; // something went wrong
			}
		}
		*slash = NATIVE_SLASH; // put back the slash
		slash = pathCopy.Find(NATIVE_SLASH, slash + 1);
	} while (slash);
	return true;
}

// CreateTempPath
//------------------------------------------------------------------------------
/*static*/ bool FileIO::CreateTempPath(const char * tempPrefix, AString & path)
{
#if defined(__WINDOWS__)
	// get the system temp path
	char tempPath[MAX_PATH];
	DWORD len = GetTempPathA(MAX_PATH, tempPath);
	if (len == 0)
	{
		return false;
	}

	// create a temp file in the temp folder
	char tempFile[MAX_PATH];
	UINT uniqueVal = GetTempFileNameA(tempPath,		// LPCTSTR lpPathName
		tempPrefix,	// LPCTSTR lpPrefixString
		0,			// UINT uUnique,
		tempFile);	// LPTSTR lpTempFileName
	if (uniqueVal == 0)
	{
		return false;
	}

	path = tempFile;
	return true;
#elif defined(__APPLE__)
	return false; // TODO:MAC Implement CreateTempDir
#elif defined(__LINUX__)
	return false; // TODO:LINUX Implement CreateTempDir
#else
#error Unknown platform
#endif
}

// GetFileLastWriteTime
//------------------------------------------------------------------------------
/*static*/ uint64_t FileIO::GetFileLastWriteTime(const AString & fileName)
{
#if defined(__WINDOWS__)
	WIN32_FILE_ATTRIBUTE_DATA fileAttribs;
	if (GetFileAttributesExA(fileName.Get(), GetFileExInfoStandard, &fileAttribs))
	{
		FILETIME ftWrite = fileAttribs.ftLastWriteTime;
		uint64_t lastWriteTime = (uint64_t)ftWrite.dwLowDateTime | ((uint64_t)ftWrite.dwHighDateTime << 32);
		return lastWriteTime;
	}
#elif defined(__APPLE__)
	struct stat st;
	if (stat(fileName.Get(), &st) == 0)
	{
		// OSX only supports setting filetimes at usec granularity
		// so if we ever receive times with sub-usec granularity
		// we will lose accuracy.
		ASSERT((st.st_mtimespec.tv_nsec % 1000) == 0);

		return (((uint64_t)st.st_mtimespec.tv_sec * 1000000000ULL) + (uint64_t)st.st_mtimespec.tv_nsec);
	}
#elif defined(__LINUX__)
	struct stat st;
	if (stat(fileName.Get(), &st) == 0)
	{
		return (((uint64_t)st.st_mtim.tv_sec * 1000000000ULL) + (uint64_t)st.st_mtim.tv_nsec);
	}
#else
#error Unknown platform
#endif
	return 0;
}

// SetFileLastWriteTime
//------------------------------------------------------------------------------
/*static*/ bool FileIO::SetFileLastWriteTime(const AString & fileName, uint64_t fileTime)
{
#if defined(__WINDOWS__)
	// open the file
	// TOOD:B Check these args
	HANDLE hFile = CreateFileA(fileName.Get(), GENERIC_WRITE, FILE_SHARE_WRITE, nullptr,
		OPEN_EXISTING, 0, nullptr);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		return false;
	}

	// get the file time
	FILETIME ftWrite;
	ftWrite.dwLowDateTime = (uint32_t)(fileTime & 0x00000000FFFFFFFF);
	ftWrite.dwHighDateTime = (uint32_t)((fileTime & 0xFFFFFFFF00000000) >> 32);
	if (!SetFileTime(hFile, nullptr, nullptr, &ftWrite)) // create, access, write
	{
		CloseHandle(hFile);
		return false;
	}

	// close the file
	CloseHandle(hFile);

	return true;
#elif defined(__APPLE__)
	struct timeval t[2];
	t[0].tv_sec = fileTime / 1000000000ULL;
	ASSERT(((fileTime % 1000000000ULL) % 1000) == 0); // ensure no loss of accuracy
	t[0].tv_usec = (fileTime % 1000000000ULL) / 1000;
	t[1] = t[0];
	return (utimes(fileName.Get(), t) == 0);
#elif defined(__LINUX__) || defined(__APPLE__)
	struct timespec t[2];
	t[0].tv_sec = fileTime / 1000000000ULL;
	t[0].tv_nsec = (fileTime % 1000000000ULL);
	t[1] = t[0];
	return (utimensat(0, fileName.Get(), t, 0) == 0);
#else
#error Unknown platform
#endif
}

// SetReadOnly
//------------------------------------------------------------------------------
/*static*/ bool FileIO::SetReadOnly(const char * fileName, bool readOnly)
{
#if defined(__WINDOWS__)
	// see if dst file is read-only
	DWORD dwAttrs = GetFileAttributesA(fileName);
	if (dwAttrs == INVALID_FILE_ATTRIBUTES)
	{
		return false; // can't even get the attributes, nothing more we can do
	}

	// determine the new attributes
	DWORD dwNewAttrs = (readOnly) ? (dwAttrs | FILE_ATTRIBUTE_READONLY)
		: (dwAttrs & ~FILE_ATTRIBUTE_READONLY);

	// nothing to do if they are the same
	if (dwNewAttrs == dwAttrs)
	{
		return true;
	}

	// try to set change
	if (FALSE == SetFileAttributesA(fileName, dwNewAttrs))
	{
		return false; // failed
	}

	return true;
#elif defined(__LINUX__) || defined(__APPLE__)
	struct stat s;
	if (stat(fileName, &s) != 0)
	{
		return true; // can't even get the attributes, treat as not read only
	}
	const bool currentlyReadOnly = !((s.st_mode & S_IWUSR) == S_IWUSR); // TODO:LINUX Is this the correct behaviour?
	if (readOnly == currentlyReadOnly)
	{
		return true; // already in desired state
	}

	// update writable flag
	if (readOnly)
	{
		// remove writable flag
		s.st_mode &= (~S_IWUSR); // TODO:LINUX Is this the correct behaviour?
	}
	else
	{
		// add writable flag
		s.st_mode |= S_IWUSR; // TODO:LINUX Is this the correct behaviour?
	}

	if (chmod(fileName, s.st_mode) == 0)
	{
		return true;
	}
	return false; // failed to chmod
#else
#error Unknown platform
#endif
}

// GetReadOnly
//------------------------------------------------------------------------------
/*static*/ bool FileIO::GetReadOnly(const char * fileName)
{
#if defined(__WINDOWS__)
	// see if dst file is read-only
	DWORD dwAttrs = GetFileAttributesA(fileName);
	if (dwAttrs == INVALID_FILE_ATTRIBUTES)
	{
		return false; // can't even get the attributes, treat as not read only
	}

	// determine the new attributes
	bool readOnly = (dwAttrs & FILE_ATTRIBUTE_READONLY);
	return readOnly;
#elif defined(__LINUX__) || defined(__APPLE__)
	struct stat s;
	if (stat(fileName, &s) != 0)
	{
		return false; // can't even get the attributes, treat as not read only
	}
	return ((s.st_mode & S_IWUSR) == 0);// TODO:LINUX Is this the correct behaviour?
#else
#error Unknown platform
#endif
}

// GetFilesRecurse
//------------------------------------------------------------------------------
/*static*/ void FileIO::GetFilesRecurse(AStringRef & pathCopy, const AStringView & wildCard, Array<AString> * results, bool includeDir)
{
	const SIZET baseLength = pathCopy.GetLength();

#if defined(__WINDOWS__)
	pathCopy += '*'; // don't want to use wildcard to filter folders

	// recurse into directories
	WIN32_FIND_DATAA findData;
	HANDLE hFind = FindFirstFileExA(pathCopy.Get(), FindExInfoBasic, &findData, FindExSearchLimitToDirectories, nullptr, 0);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	do
	{
		if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			// ignore magic '.' and '..' folders
			// (don't need to check length of name, as all names are at least 1 char
			// which means index 0 and 1 are valid to access)
			if (findData.cFileName[0] == '.' &&
				((findData.cFileName[1] == '.') || (findData.cFileName[1] == '\000')))
			{
				continue;
			}

			pathCopy.SetLength(baseLength);
			pathCopy += findData.cFileName;
			pathCopy += NATIVE_SLASH;
			GetFilesRecurse(pathCopy, wildCard, results, includeDir);
		}
	} while (FindNextFileA(hFind, &findData) != 0);
	FindClose(hFind);

	// do files in this directory
	pathCopy.SetLength(baseLength);
	pathCopy += '*';
	hFind = FindFirstFileExA(pathCopy.Get(), FindExInfoBasic, &findData, FindExSearchNameMatch, nullptr, 0);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	do
	{
		if (!includeDir && findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			continue;
		}

		if (PathUtils::IsWildcardMatch(wildCard.Get(), findData.cFileName))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += findData.cFileName;
			results->Append(AString(pathCopy.Get()));
		}
	} while (FindNextFileA(hFind, &findData) != 0);

	FindClose(hFind);

#elif defined(__LINUX__) || defined(__APPLE__)
	DIR * dir = opendir(pathCopy.Get());
	if (dir == nullptr)
	{
		return;
	}
	for (;; )
	{
		dirent * entry = readdir(dir);
		if (entry == nullptr)
		{
			break; // no more entries
		}

		// dir?
		if ((entry->d_type & DT_DIR) == DT_DIR)
		{
			// ignore . and ..
			if (entry->d_name[0] == '.')
			{
				if ((entry->d_name[1] == 0) ||
					((entry->d_name[1] == '.') && (entry->d_name[2] == 0)))
				{
					continue;
				}
			}

			// regular dir
			pathCopy.SetLength(baseLength);
			pathCopy += entry->d_name;
			pathCopy += NATIVE_SLASH;
			GetFilesRecurse(pathCopy, wildCard, results);
			continue;
		}

		// file - does it match wildcard?
		if (PathUtils::IsWildcardMatch(wildCard.Get(), entry->d_name))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += entry->d_name;
			results->Append(pathCopy);
		}
	}
	closedir(dir);
#else
#error Unknown platform
#endif
}

// GetFilesNoRecurse
//------------------------------------------------------------------------------
/*static*/ void FileIO::GetFilesNoRecurse(const char * path, const char * wildCard, Array<AString> * results, bool includeDir)
{
	AStackString<> pathCopy(path);
	PathUtils::EnsureTrailingSlash((AStringRef)pathCopy);
	const SIZET baseLength = pathCopy.GetLength();

#if defined(__WINDOWS__)
	pathCopy += '*';

	WIN32_FIND_DATAA findData;
	//HANDLE hFind = FindFirstFile( pathCopy.Get(), &findData );
	HANDLE hFind = FindFirstFileExA(pathCopy.Get(), FindExInfoBasic, &findData, FindExSearchNameMatch, nullptr, 0);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	do
	{
		if (!includeDir && findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			continue;
		}

		if (PathUtils::IsWildcardMatch(wildCard, findData.cFileName))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += findData.cFileName;
			results->Append(pathCopy);
		}
	} while (FindNextFileA(hFind, &findData) != 0);

	FindClose(hFind);

#elif defined(__LINUX__) || defined(__APPLE__)
	DIR * dir = opendir(pathCopy.Get());
	if (dir == nullptr)
	{
		return;
	}
	for (;; )
	{
		dirent * entry = readdir(dir);
		if (entry == nullptr)
		{
			break; // no more entries
		}

		// dir?
		if ((entry->d_type & DT_DIR) == DT_DIR)
		{
			// ignore dirs
			continue;
		}

		// file - does it match wildcard?
		if (PathUtils::IsWildcardMatch(wildCard, entry->d_name))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += entry->d_name;
			results->Append(pathCopy);
		}
	}
	closedir(dir);
#else
#error Unknown platform
#endif
}


// GetFilesRecurse
//------------------------------------------------------------------------------
/*static*/ void FileIO::GetFilesRecurseEx(AStringRef & pathCopy, const AStringView & wildCard, Array<FileInfo> * results, bool includeDir)
{
	const SIZET baseLength = pathCopy.GetLength();

#if defined(__WINDOWS__)
	pathCopy += '*'; // don't want to use wildcard to filter folders

	// recurse into directories
	WIN32_FIND_DATAA findData;
	HANDLE hFind = FindFirstFileExA(pathCopy.Get(), FindExInfoBasic, &findData, FindExSearchLimitToDirectories, nullptr, 0);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	do
	{
		if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			// ignore magic '.' and '..' folders
			// (don't need to check length of name, as all names are at least 1 char
			// which means index 0 and 1 are valid to access)
			if (findData.cFileName[0] == '.' &&
				((findData.cFileName[1] == '.') || (findData.cFileName[1] == '\000')))
			{
				continue;
			}

			pathCopy.SetLength(baseLength);
			pathCopy += findData.cFileName;
			pathCopy += NATIVE_SLASH;
			GetFilesRecurseEx(pathCopy, wildCard, results, includeDir);
		}
	} while (FindNextFileA(hFind, &findData) != 0);
	FindClose(hFind);

	// do files in this directory
	pathCopy.SetLength(baseLength);
	pathCopy += '*';
	hFind = FindFirstFileExA(pathCopy.Get(), FindExInfoBasic, &findData, FindExSearchNameMatch, nullptr, 0);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	do
	{
		if (!includeDir && findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			continue;
		}

		if (PathUtils::IsWildcardMatch(wildCard.Get(), findData.cFileName))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += findData.cFileName;
			if (results->GetSize() == results->GetCapacity())
			{
				results->SetCapacity(results->GetSize() * 2);
			}
			results->SetSize(results->GetSize() + 1);
			FileInfo & newInfo = results->TopItem();
			newInfo.m_Name = (AString)pathCopy.Get();
			newInfo.m_Attributes = findData.dwFileAttributes;
			newInfo.m_LastWriteTime = (uint64_t)findData.ftLastWriteTime.dwLowDateTime | ((uint64_t)findData.ftLastWriteTime.dwHighDateTime << 32);
			newInfo.m_Size = (uint64_t)findData.nFileSizeLow | ((uint64_t)findData.nFileSizeHigh << 32);
		}
	} while (FindNextFileA(hFind, &findData) != 0);

	FindClose(hFind);

#elif defined(__LINUX__) || defined(__APPLE__)
	DIR * dir = opendir(pathCopy.Get());
	if (dir == nullptr)
	{
		return;
	}
	for (;; )
	{
		dirent * entry = readdir(dir);
		if (entry == nullptr)
		{
			break; // no more entries
		}

		// dir?
		if ((entry->d_type & DT_DIR) == DT_DIR)
		{
			// ignore . and ..
			if (entry->d_name[0] == '.')
			{
				if ((entry->d_name[1] == 0) ||
					((entry->d_name[1] == '.') && (entry->d_name[2] == 0)))
				{
					continue;
				}
			}

			// regular dir
			pathCopy.SetLength(baseLength);
			pathCopy += entry->d_name;
			pathCopy += NATIVE_SLASH;
			GetFilesRecurseEx(pathCopy, wildCard, results);
			continue;
		}

		// file - does it match wildcard?
		if (PathUtils::IsWildcardMatch(wildCard.Get(), entry->d_name))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += entry->d_name;

			if (results->GetSize() == results->GetCapacity())
			{
				results->SetCapacity(results->GetSize() * 2);
			}
			results->SetSize(results->GetSize() + 1);
			FileInfo & newInfo = results->Top();
			newInfo.m_Name = pathCopy;

			// get additional info
			struct stat info;
			VERIFY(stat(pathCopy.Get(), &info) == 0);
			newInfo.m_Attributes = info.st_mode;
#if defined(__APPLE__)
			newInfo.m_LastWriteTime = (((uint64_t)info.st_mtimespec.tv_sec * 1000000000ULL) + (uint64_t)info.st_mtimespec.tv_nsec);
#else
			newInfo.m_LastWriteTime = (((uint64_t)info.st_mtim.tv_sec * 1000000000ULL) + (uint64_t)info.st_mtim.tv_nsec);
#endif
			newInfo.m_Size = info.st_size;
		}
	}
	closedir(dir);
#else
#error Unknown platform
#endif
}

// GetFilesNoRecurseEx
//------------------------------------------------------------------------------
/*static*/ void FileIO::GetFilesNoRecurseEx(const char * path, const char * wildCard, Array<FileInfo> * results, bool includeDir)
{
	AStackString<> pathCopy(path);
	PathUtils::EnsureTrailingSlash((AStringRef)pathCopy);
	const SIZET baseLength = pathCopy.GetLength();

#if defined(__WINDOWS__)
	pathCopy += '*';

	WIN32_FIND_DATAA findData;
	HANDLE hFind = FindFirstFileExA(pathCopy.Get(), FindExInfoBasic, &findData, FindExSearchNameMatch, nullptr, 0);
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	do
	{
		if (!includeDir && findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			continue;
		}

		if (PathUtils::IsWildcardMatch(wildCard, findData.cFileName))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += findData.cFileName;

			if (results->GetSize() == results->GetCapacity())
			{
				results->SetCapacity(results->GetSize() * 2);
			}
			results->SetSize(results->GetSize() + 1);
			FileInfo & newInfo = results->TopItem();
			newInfo.m_Name = pathCopy;
			newInfo.m_Attributes = findData.dwFileAttributes;
			newInfo.m_LastWriteTime = (uint64_t)findData.ftLastWriteTime.dwLowDateTime | ((uint64_t)findData.ftLastWriteTime.dwHighDateTime << 32);
			newInfo.m_Size = (uint64_t)findData.nFileSizeLow | ((uint64_t)findData.nFileSizeHigh << 32);
		}
	} while (FindNextFileA(hFind, &findData) != 0);

	FindClose(hFind);

#elif defined(__LINUX__) || defined(__APPLE__)
	DIR * dir = opendir(pathCopy.Get());
	if (dir == nullptr)
	{
		return;
	}
	for (;; )
	{
		dirent * entry = readdir(dir);
		if (entry == nullptr)
		{
			break; // no more entries
		}

		// dir?
		if ((entry->d_type & DT_DIR) == DT_DIR)
		{
			// ingnore dirs
			continue;
		}

		// file - does it match wildcard?
		if (PathUtils::IsWildcardMatch(wildCard, entry->d_name))
		{
			pathCopy.SetLength(baseLength);
			pathCopy += entry->d_name;

			if (results->GetSize() == results->GetCapacity())
			{
				results->SetCapacity(results->GetSize() * 2);
			}
			results->SetSize(results->GetSize() + 1);
			FileInfo & newInfo = results->Top();
			newInfo.m_Name = pathCopy;

			// get additional info
			struct stat info;
			VERIFY(stat(pathCopy.Get(), &info) == 0);
			newInfo.m_Attributes = info.st_mode;
#if defined(__APPLE__)
			newInfo.m_LastWriteTime = (((uint64_t)info.st_mtimespec.tv_sec * 1000000000ULL) + (uint64_t)info.st_mtimespec.tv_nsec);
#else
			newInfo.m_LastWriteTime = (((uint64_t)info.st_mtim.tv_sec * 1000000000ULL) + (uint64_t)info.st_mtim.tv_nsec);
#endif
			newInfo.m_Size = info.st_size;
		}
	}
	closedir(dir);
#else
#error Unknown platform
#endif
}

// WorkAroundForWindowsFilePermissionProblem
//------------------------------------------------------------------------------
#if defined(__WINDOWS__)
/*static*/ void FileIO::WorkAroundForWindowsFilePermissionProblem(const AString & fileName)
{
	// Sometimes after closing a file, subsequent operations on that file will
	// fail.  For example, trying to set the file time, or even another process
	// opening the file.
	//
	// This seems to be a known issue in windows, with multiple potential causes
	// like Virus scanners and possibly the behaviour of the kernel itself.
	//
	// A work-around for this problem is to attempt to open a file we just closed.
	// This will sometimes fail, but if we retry until it succeeds, we avoid the
	// problem on the subsequent operation.
	FileStream f;
	Timer timer;
	while (f.Open(fileName.Get()) == false)
	{
		Thread::Sleep(1);

		// timeout so we don't get stuck in here forever
		if (timer.GetElapsed() > 1.0f)
		{
			ASSERT(false && "WorkAroundForWindowsFilePermissionProblem Failed!");
			return;
		}
	}
	f.Close();
}
#endif

// FileInfo::IsReadOnly
//------------------------------------------------------------------------------
bool FileIO::FileInfo::IsReadOnly() const
{
#if defined(__WINDOWS__)
	return ((m_Attributes & FILE_ATTRIBUTE_READONLY) == FILE_ATTRIBUTE_READONLY);
#elif defined(__LINUX__) || defined(__APPLE__)
	return ((m_Attributes & S_IWUSR) == 0);// TODO:LINUX TODO:MAC Is this the correct behaviour?
#else
	#error Unknown platform
#endif
}

// FileInfo::IsDirectory
//------------------------------------------------------------------------------
bool FileIO::FileInfo::IsDirectory() const
{
#if defined(__WINDOWS__)
	return ((m_Attributes & FILE_ATTRIBUTE_DIRECTORY) == FILE_ATTRIBUTE_DIRECTORY);
#elif defined(__LINUX__) || defined(__APPLE__)
	return ((m_Attributes & S_IFDIR) == 0);// TODO:LINUX TODO:MAC Is this the correct behaviour?
#else
#error Unknown platform
#endif
}

//------------------------------------------------------------------------------
