// Thread functionality
//------------------------------------------------------------------------------
#pragma once
#ifndef FOUNDATION_PROCESS_THREAD_H
#define FOUNDATION_PROCESS_THREAD_H

// Includes
//------------------------------------------------------------------------------
#include "Foundation/Config/Config.h"
#include "Foundation/Platform/Types.h"
#include "Foundation/Platform/Misc.h"


#if defined(__APPLE__) || defined(__LINUX__)
#include <pthread.h> // TODO:C Look at moving this out of header
#endif

// Thread
//------------------------------------------------------------------------------
class Thread
{
public:
#if defined(__WINDOWS__)
	typedef uint32 ThreadId;
	typedef void * ThreadHandle;
	typedef uint32(*ThreadEntryFunction)(void * param);

#define INVALID_THREAD_HANDLE (nullptr)
#elif defined(__APPLE__) || defined(__LINUX__)
	// TODO:MAC Implement Thread
	// TODO:Linux Implement Thread
	typedef pthread_t ThreadId;
	typedef void * ThreadHandle;
	typedef uint32(*ThreadEntryFunction)(void * param);
	// TODO:MAC check INVALID_THREAD_HANDLE
	// TODO:LINUX check INVALID_THREAD_HANDLE
#define INVALID_THREAD_HANDLE (nullptr)
#else
	#error Unknown platform
#endif

	static ThreadId GetCurrentThreadId();
	static bool IsThread(ThreadId threadId) { return (GetCurrentThreadId() == threadId); }
	static bool IsMainThread() { return GetCurrentThreadId() == s_MainThreadId; }

	static void Sleep(int32_t ms);

	static ThreadHandle CreateThread(ThreadEntryFunction entryFunc,
		const char * threadName = nullptr,
		uint32 stackSize = (64 * KILOBYTE),
		void * userData = nullptr
	);
	static int WaitForThread(ThreadHandle handle, uint32 timeoutMS, bool & timedOut);
	static void CloseHandle(ThreadHandle h);

	static void SetThreadName(const char * name);

private:
	static ThreadId s_MainThreadId;
};

//------------------------------------------------------------------------------
#endif // FOUNDATION_PROCESS_THREAD_H
