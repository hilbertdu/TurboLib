








#pragma once








#pragma once








#pragma once










#pragma once









#pragma once










#pragma once

































#pragma once































































#pragma once





















































































































































































































































































































































































































































































































































































































































































































#pragma region Input Buffer SAL 1 compatibility macros



























































































































































































































































































































































































































































































































































































































































































































































































#pragma endregion Input Buffer SAL 1 compatibility macros
























































































































































































































































































































































































































































































































































































































































































































































































































































































































extern "C" {





























































































































































































































































































































































































































































































































































































































}





















#pragma once


extern "C" {











































































































































































































































































































































}


















#pragma once



#pragma pack(push, 8)


extern "C" {









	typedef unsigned __int64  uintptr_t;










	typedef char* va_list;


































































	void __cdecl __va_start(va_list*, ...);











}



extern "C++"
{
	template <typename _Ty>
	struct __vcrt_va_list_is_reference
	{
		enum : bool { __the_value = false };
	};

	template <typename _Ty>
	struct __vcrt_va_list_is_reference<_Ty&>
	{
		enum : bool { __the_value = true };
	};

	template <typename _Ty>
	struct __vcrt_va_list_is_reference<_Ty&&>
	{
		enum : bool { __the_value = true };
	};

	template <typename _Ty>
	void __vcrt_va_start_verify_argument_type() throw()
	{
		static_assert(!__vcrt_va_list_is_reference<_Ty>::__the_value, "va_start argument must not have reference type and must not be parenthesized");
	}
}









#pragma pack(pop)



































__pragma(pack(push, 8)) extern "C" {
















































































































	typedef unsigned __int64 size_t;
	typedef __int64          ptrdiff_t;
	typedef __int64          intptr_t;







	typedef bool  __vcrt_bool;










































	extern "C++"
	{
		template <typename _CountofType, size_t _SizeOfArray>
		char(*__countof_helper(__unaligned _CountofType(&_Array)[_SizeOfArray]))[_SizeOfArray];


	}












































	void __cdecl __security_init_cookie(void);





	void __cdecl __security_check_cookie(uintptr_t _StackCookie);
	__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie);



	extern uintptr_t __security_cookie;







} __pragma(pack(pop))






typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;

typedef long long          intmax_t;
typedef unsigned long long uintmax_t;
































































































typedef unsigned char 		uint8;
typedef unsigned short int	uint16;
typedef unsigned int		uint32;
typedef unsigned long long	uint64;

typedef	signed char			int8;
typedef signed short int	int16;
typedef signed int	 		int32;
typedef signed long long	int64;

typedef char				CHAR;
typedef wchar_t				WCHAR;
typedef uint8				CHAR8;
typedef uint16				CHAR16;
typedef uint32				CHAR32;

typedef size_t				SIZET;



typedef int64			INTPTR;
typedef uint64			UINTPTR;












#pragma once








#pragma once










#pragma once










#pragma once



class Platform
{
public:
	static void* LoadDynamicLibrary(const char * name, const char * directory = nullptr);
	static int	 GetLastErrorNo();
};


























































#pragma once









#pragma once










bool IsDebuggerAttached();
































































class AssertHandler										\
{														\
public:													\
	static void SetThrowOnAssert(bool throwOnAssert)	\
{													\
s_ThrowOnAssert = throwOnAssert;				\
}													\
static bool Failure(const char * message, \
	const char * file, \
	const int line);								\
	static bool FailureM(const char * message, \
		const char * file, \
		const int line, \
		const char * msgFormat = "", \
		...);											\

	static bool s_ThrowOnAssert;						\
};








#pragma once







































#pragma once










#pragma once









#pragma once





#pragma once






#pragma once











































































































































































































































































































































































































































































































































#pragma once



































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {










































































































	extern "C++"
	{
		template<bool _Enable, typename _Ty>
		struct _CrtEnableIf;

		template<typename _Ty>
		struct _CrtEnableIf<true, _Ty>
		{
			typedef _Ty _Type;
		};
	}



	typedef bool  __crt_bool;



















































































	__declspec(dllimport) void __cdecl _invalid_parameter(
		wchar_t const*,
		wchar_t const*,
		wchar_t const*,
		unsigned int,
		uintptr_t
	);


	__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void);
	__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);

	__declspec(noreturn)
		__declspec(dllimport) void __cdecl _invoke_watson(
			wchar_t const*,
			wchar_t const*,
			wchar_t const*,
			unsigned int,
			uintptr_t);




















































































































































































































	typedef int                           errno_t;
	typedef unsigned short                wint_t;
	typedef unsigned short                wctype_t;
	typedef long                          __time32_t;
	typedef __int64                       __time64_t;

	typedef struct __crt_locale_data_public
	{
		unsigned short const* _locale_pctype;
		int _locale_mb_cur_max;
		unsigned int _locale_lc_codepage;
	} __crt_locale_data_public;

	typedef struct __crt_locale_pointers
	{
		struct __crt_locale_data*    locinfo;
		struct __crt_multibyte_data* mbcinfo;
	} __crt_locale_pointers;

	typedef __crt_locale_pointers* _locale_t;

	typedef struct _Mbstatet
	{
		unsigned long _Wchar;
		unsigned short _Byte, _State;
	} _Mbstatet;

	typedef _Mbstatet mbstate_t;













	typedef __time64_t time_t;









	typedef size_t rsize_t;

























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































} __pragma(pack(pop))



























































#pragma pack(push,8)


















































































































































































































































#pragma detect_mismatch("_MSC_VER", "1900")



#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "2")










#pragma detect_mismatch("RuntimeLibrary", "MDd_DynamicDebug")





























































































































































#pragma once










































#pragma comment(lib, "msvcprt" "d" "")































































































































































































typedef long long _Longlong;
typedef unsigned long long _ULonglong;

















namespace std {
	enum _Uninitialized
	{
		_Noinit
	};



#pragma warning(push)
#pragma warning(disable:4412)
	class __declspec(dllimport) _Lockit
	{
	public:




















		__thiscall _Lockit();
		explicit __thiscall _Lockit(int);
		__thiscall ~_Lockit() noexcept;


		static  void __cdecl _Lockit_ctor(int);
		static  void __cdecl _Lockit_dtor(int);

	private:
		static  void __cdecl _Lockit_ctor(_Lockit *);
		static  void __cdecl _Lockit_ctor(_Lockit *, int);
		static  void __cdecl _Lockit_dtor(_Lockit *);

	public:
		_Lockit(const _Lockit&) = delete;
		_Lockit&  operator=(const _Lockit&) = delete;

	private:
		int _Locktype;














	};






















































































	class __declspec(dllimport) _Init_locks
	{
	public:













		__thiscall _Init_locks();
		__thiscall ~_Init_locks() noexcept;


	private:
		static  void __cdecl _Init_locks_ctor(_Init_locks *);
		static  void __cdecl _Init_locks_dtor(_Init_locks *);










	};

#pragma warning(pop)
}








__declspec(dllimport) void __cdecl _Atexit(void(__cdecl *)(void));

typedef unsigned long _Uint32t;





#pragma pack(pop)















#pragma once





#pragma once





#pragma once


















#pragma once




__pragma(pack(push, 8)) extern "C" {




	namespace std
	{
		typedef decltype(__nullptr) nullptr_t;
	}

	using ::std::nullptr_t;





	__declspec(dllimport) int* __cdecl _errno(void);


	__declspec(dllimport) errno_t __cdecl _set_errno(int _Value);
	__declspec(dllimport) errno_t __cdecl _get_errno(int* _Value);












	__declspec(dllimport) extern unsigned long  __cdecl __threadid(void);

	__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void);



} __pragma(pack(pop))




namespace std {
	using ::ptrdiff_t; using ::size_t;
}



namespace std {
	typedef double max_align_t;
}

using ::std::max_align_t;










#pragma once


















#pragma once












#pragma once



__pragma(pack(push, 8)) extern "C" {








































	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _calloc_base(
			size_t _Count,
			size_t _Size
		);


	__declspec(dllimport)  __declspec(allocator) __declspec(restrict)
		void* __cdecl calloc(
			__declspec(guard(overflow)) size_t _Count,
			__declspec(guard(overflow)) size_t _Size
		);


	__declspec(dllimport) int __cdecl _callnewh(
		size_t _Size
	);


	__declspec(dllimport) __declspec(allocator)
		void* __cdecl _expand(
			void*  _Block,
			__declspec(guard(overflow)) size_t _Size
		);

	__declspec(dllimport)
		void __cdecl _free_base(
			void* _Block
		);

	__declspec(dllimport)
		void __cdecl free(
			void* _Block
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _malloc_base(
			size_t _Size
		);


	__declspec(dllimport) __declspec(allocator)  __declspec(restrict)
		void* __cdecl malloc(
			__declspec(guard(overflow)) size_t _Size
		);


	__declspec(dllimport)
		size_t __cdecl _msize(
			void* _Block
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _realloc_base(
			void*  _Block,
			size_t _Size
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl realloc(
			void*  _Block,
			__declspec(guard(overflow))        size_t _Size
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _recalloc(
			void*  _Block,
			__declspec(guard(overflow))        size_t _Count,
			__declspec(guard(overflow))        size_t _Size
		);

	__declspec(dllimport)
		void __cdecl _aligned_free(
			void* _Block
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _aligned_malloc(
			__declspec(guard(overflow)) size_t _Size,
			size_t _Alignment
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _aligned_offset_malloc(
			__declspec(guard(overflow)) size_t _Size,
			size_t _Alignment,
			size_t _Offset
		);


	__declspec(dllimport)
		size_t __cdecl _aligned_msize(
			void*  _Block,
			size_t _Alignment,
			size_t _Offset
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _aligned_offset_realloc(
			void*  _Block,
			__declspec(guard(overflow))        size_t _Size,
			size_t _Alignment,
			size_t _Offset
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _aligned_offset_recalloc(
			void*  _Block,
			__declspec(guard(overflow))        size_t _Count,
			__declspec(guard(overflow))        size_t _Size,
			size_t _Alignment,
			size_t _Offset
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _aligned_realloc(
			void*  _Block,
			__declspec(guard(overflow))        size_t _Size,
			size_t _Alignment
		);


	__declspec(dllimport) __declspec(allocator) __declspec(restrict)
		void* __cdecl _aligned_recalloc(
			void*  _Block,
			__declspec(guard(overflow))        size_t _Count,
			__declspec(guard(overflow))        size_t _Size,
			size_t _Alignment
		);






















} __pragma(pack(pop))












#pragma once




__pragma(pack(push, 8)) extern "C" {






	__declspec(dllimport) void* __cdecl bsearch_s(
		void const* _Key,
		void const* _Base,
		rsize_t     _NumOfElements,
		rsize_t     _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void*, void const*, void const*),
		void*       _Context
	);

	__declspec(dllimport) void __cdecl qsort_s(
		void*   _Base,
		rsize_t _NumOfElements,
		rsize_t _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void*, void const*, void const*),
		void*   _Context
	);






	__declspec(dllimport) void* __cdecl bsearch(
		void const* _Key,
		void const* _Base,
		size_t      _NumOfElements,
		size_t      _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void const*, void const*)
	);

	__declspec(dllimport) void __cdecl qsort(
		void*  _Base,
		size_t _NumOfElements,
		size_t _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void const*, void const*)
	);


	__declspec(dllimport) void* __cdecl _lfind_s(
		void const*   _Key,
		void const*   _Base,
		unsigned int* _NumOfElements,
		size_t        _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void*, void const*, void const*),
		void*         _Context
	);


	__declspec(dllimport) void* __cdecl _lfind(
		void const*   _Key,
		void const*   _Base,
		unsigned int* _NumOfElements,
		unsigned int  _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void const*, void const*)
	);


	__declspec(dllimport) void* __cdecl _lsearch_s(
		void const*   _Key,
		void*         _Base,
		unsigned int* _NumOfElements,
		size_t        _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void*, void const*, void const*),
		void*         _Context
	);


	__declspec(dllimport) void* __cdecl _lsearch(
		void const*   _Key,
		void*         _Base,
		unsigned int* _NumOfElements,
		unsigned int  _SizeOfElements,
		int(__cdecl* _PtFuncCompare)(void const*, void const*)
	);























































































	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lfind" ". See online help for details."))
		__declspec(dllimport) void* __cdecl lfind(
			void const*   _Key,
			void const*   _Base,
			unsigned int* _NumOfElements,
			unsigned int  _SizeOfElements,
			int(__cdecl* _PtFuncCompare)(void const*, void const*)
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_lsearch" ". See online help for details."))
		__declspec(dllimport) void* __cdecl lsearch(
			void const*   _Key,
			void*         _Base,
			unsigned int* _NumOfElements,
			unsigned int  _SizeOfElements,
			int(__cdecl* _PtFuncCompare)(void const*, void const*)
		);





} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {


































	__declspec(dllimport) errno_t __cdecl _itow_s(
		int      _Value,
		wchar_t* _Buffer,
		size_t   _BufferCount,
		int      _Radix
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _itow_s(int _Value, wchar_t(&_Buffer)[_Size], int _Radix) throw() { return _itow_s(_Value, _Buffer, _Size, _Radix); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _itow(int _Value, wchar_t *_Buffer, int _Radix);



	__declspec(dllimport) errno_t __cdecl _ltow_s(
		long     _Value,
		wchar_t* _Buffer,
		size_t   _BufferCount,
		int      _Radix
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _ltow_s(long _Value, wchar_t(&_Buffer)[_Size], int _Radix) throw() { return _ltow_s(_Value, _Buffer, _Size, _Radix); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _ltow(long _Value, wchar_t *_Buffer, int _Radix);


	__declspec(dllimport) errno_t __cdecl _ultow_s(
		unsigned long _Value,
		wchar_t*      _Buffer,
		size_t        _BufferCount,
		int           _Radix
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _ultow_s(unsigned long _Value, wchar_t(&_Buffer)[_Size], int _Radix) throw() { return _ultow_s(_Value, _Buffer, _Size, _Radix); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _ultow(unsigned long _Value, wchar_t *_Buffer, int _Radix);


	__declspec(dllimport) double __cdecl wcstod(
		wchar_t const* _String,
		wchar_t**      _EndPtr
	);


	__declspec(dllimport) double __cdecl _wcstod_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		_locale_t      _Locale
	);


	__declspec(dllimport) long __cdecl wcstol(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix
	);


	__declspec(dllimport) long __cdecl _wcstol_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix,
		_locale_t      _Locale
	);


	__declspec(dllimport) long long __cdecl wcstoll(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix
	);


	__declspec(dllimport) long long __cdecl _wcstoll_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix,
		_locale_t      _Locale
	);


	__declspec(dllimport) unsigned long __cdecl wcstoul(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix
	);


	__declspec(dllimport) unsigned long __cdecl _wcstoul_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix,
		_locale_t      _Locale
	);


	__declspec(dllimport) unsigned long long __cdecl wcstoull(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix
	);


	__declspec(dllimport) unsigned long long __cdecl _wcstoull_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix,
		_locale_t      _Locale
	);


	__declspec(dllimport) long double __cdecl wcstold(
		wchar_t const* _String,
		wchar_t**      _EndPtr
	);


	__declspec(dllimport) long double __cdecl _wcstold_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		_locale_t      _Locale
	);


	__declspec(dllimport) float __cdecl wcstof(
		wchar_t const* _String,
		wchar_t**      _EndPtr
	);


	__declspec(dllimport) float __cdecl _wcstof_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		_locale_t      _Locale
	);


	__declspec(dllimport) double __cdecl _wtof(
		wchar_t const* _String
	);


	__declspec(dllimport) double __cdecl _wtof_l(
		wchar_t const* _String,
		_locale_t      _Locale
	);


	__declspec(dllimport) int __cdecl _wtoi(
		wchar_t const* _String
	);


	__declspec(dllimport) int __cdecl _wtoi_l(
		wchar_t const* _String,
		_locale_t      _Locale
	);


	__declspec(dllimport) long __cdecl _wtol(
		wchar_t const* _String
	);


	__declspec(dllimport) long __cdecl _wtol_l(
		wchar_t const* _String,
		_locale_t      _Locale
	);


	__declspec(dllimport) long long __cdecl _wtoll(
		wchar_t const* _String
	);


	__declspec(dllimport) long long __cdecl _wtoll_l(
		wchar_t const* _String,
		_locale_t      _Locale
	);


	__declspec(dllimport) errno_t __cdecl _i64tow_s(
		__int64  _Value,
		wchar_t* _Buffer,
		size_t   _BufferCount,
		int      _Radix
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl _i64tow(
			__int64  _Value,
			wchar_t* _Buffer,
			int      _Radix
		);


	__declspec(dllimport) errno_t __cdecl _ui64tow_s(
		unsigned __int64 _Value,
		wchar_t*         _Buffer,
		size_t           _BufferCount,
		int              _Radix
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl _ui64tow(
			unsigned __int64 _Value,
			wchar_t*         _Buffer,
			int              _Radix
		);


	__declspec(dllimport) __int64 __cdecl _wtoi64(
		wchar_t const* _String
	);


	__declspec(dllimport) __int64 __cdecl _wtoi64_l(
		wchar_t const* _String,
		_locale_t      _Locale
	);


	__declspec(dllimport) __int64 __cdecl _wcstoi64(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix
	);


	__declspec(dllimport) __int64 __cdecl _wcstoi64_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix,
		_locale_t      _Locale
	);


	__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix
	);


	__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(
		wchar_t const* _String,
		wchar_t**      _EndPtr,
		int            _Radix,
		_locale_t      _Locale
	);






	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wfullpath(
		wchar_t*       _Buffer,
		wchar_t const* _Path,
		size_t         _BufferCount
	);




	__declspec(dllimport) errno_t __cdecl _wmakepath_s(
		wchar_t*       _Buffer,
		size_t         _BufferCount,
		wchar_t const* _Drive,
		wchar_t const* _Dir,
		wchar_t const* _Filename,
		wchar_t const* _Ext
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wmakepath_s(wchar_t(&_Buffer)[_Size], wchar_t const* _Drive, wchar_t const* _Dir, wchar_t const* _Filename, wchar_t const* _Ext) throw() { return _wmakepath_s(_Buffer, _Size, _Drive, _Dir, _Filename, _Ext); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmakepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _wmakepath(wchar_t *_Buffer, wchar_t const* _Drive, wchar_t const* _Dir, wchar_t const* _Filename, wchar_t const* _Ext);

	__declspec(dllimport) void __cdecl _wperror(
		wchar_t const* _ErrMsg
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsplitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) void __cdecl _wsplitpath(
			wchar_t const* _FullPath,
			wchar_t*       _Drive,
			wchar_t*       _Dir,
			wchar_t*       _Filename,
			wchar_t*       _Ext
		);

	__declspec(dllimport) errno_t __cdecl _wsplitpath_s(
		wchar_t const* _FullPath,
		wchar_t*       _Drive,
		size_t         _DriveCount,
		wchar_t*       _Dir,
		size_t         _DirCount,
		wchar_t*       _Filename,
		size_t         _FilenameCount,
		wchar_t*       _Ext,
		size_t         _ExtCount
	);

	extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline errno_t __cdecl _wsplitpath_s(wchar_t const* _Path, wchar_t(&_Drive)[_DriveSize], wchar_t(&_Dir)[_DirSize], wchar_t(&_Name)[_NameSize], wchar_t(&_Ext)[_ExtSize]) throw() { return _wsplitpath_s(_Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }









	__declspec(dllimport) errno_t __cdecl _wdupenv_s(
		wchar_t**      _Buffer,
		size_t*        _BufferCount,
		wchar_t const* _VarName
	);



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wdupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl _wgetenv(
			wchar_t const* _VarName
		);



	__declspec(dllimport) errno_t __cdecl _wgetenv_s(
		size_t*        _RequiredCount,
		wchar_t*       _Buffer,
		size_t         _BufferCount,
		wchar_t const* _VarName
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl _wgetenv_s(size_t* _RequiredCount, wchar_t(&_Buffer)[_Size], wchar_t const* _VarName) throw() { return _wgetenv_s(_RequiredCount, _Buffer, _Size, _VarName); } }


	__declspec(dllimport) int __cdecl _wputenv(
		wchar_t const* _EnvString
	);


	__declspec(dllimport) errno_t __cdecl _wputenv_s(
		wchar_t const* _Name,
		wchar_t const* _Value
	);

	__declspec(dllimport) errno_t __cdecl _wsearchenv_s(
		wchar_t const* _Filename,
		wchar_t const* _VarName,
		wchar_t*       _Buffer,
		size_t         _BufferCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wsearchenv_s(wchar_t const* _Filename, wchar_t const* _VarName, wchar_t(&_ResultPath)[_Size]) throw() { return _wsearchenv_s(_Filename, _VarName, _ResultPath, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsearchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _wsearchenv(wchar_t const* _Filename, wchar_t const* _VarName, wchar_t *_ResultPath);

	__declspec(dllimport) int __cdecl _wsystem(
		wchar_t const* _Command
	);





} __pragma(pack(pop))









#pragma once




































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {










































































} __pragma(pack(pop))


__pragma(pack(push, 8)) extern "C" {















	__declspec(dllimport) void __cdecl _swab(
		char* _Buf1,
		char* _Buf2,
		int   _SizeInBytes
	);












	__declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code);
	__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code);
	__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code);
	__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code);
	__declspec(dllimport) __declspec(noreturn) void __cdecl abort(void);





	__declspec(dllimport) unsigned int __cdecl _set_abort_behavior(
		unsigned int _Flags,
		unsigned int _Mask
	);




	typedef int(__cdecl* _onexit_t)(void);






































































	int       __cdecl atexit(void(__cdecl*)(void));
	_onexit_t __cdecl _onexit(_onexit_t _Func);


	int __cdecl at_quick_exit(void(__cdecl*)(void));










	typedef void(__cdecl* _purecall_handler)(void);


	typedef void(__cdecl* _invalid_parameter_handler)(
		wchar_t const*,
		wchar_t const*,
		wchar_t const*,
		unsigned int,
		uintptr_t
		);


	__declspec(dllimport) _purecall_handler __cdecl _set_purecall_handler(
		_purecall_handler _Handler
	);

	__declspec(dllimport) _purecall_handler __cdecl _get_purecall_handler(void);


	__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(
		_invalid_parameter_handler _Handler
	);

	__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

	__declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(
		_invalid_parameter_handler _Handler
	);

	__declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void);























	__declspec(dllimport) int __cdecl _set_error_mode(int _Mode);



	__declspec(dllimport) int* __cdecl _errno(void);


	__declspec(dllimport) errno_t __cdecl _set_errno(int _Value);
	__declspec(dllimport) errno_t __cdecl _get_errno(int* _Value);

	__declspec(dllimport) unsigned long* __cdecl __doserrno(void);


	__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value);
	__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value);


	__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char** __cdecl __sys_errlist(void);


	__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) int * __cdecl __sys_nerr(void);


	__declspec(dllimport) void __cdecl perror(char const* _ErrMsg);




	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_pgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char**    __cdecl __p__pgmptr(void);
	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_wpgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t** __cdecl __p__wpgmptr(void);
	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_fmode" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int*      __cdecl __p__fmode(void);












	__declspec(dllimport) errno_t __cdecl _get_pgmptr(char**    _Value);


	__declspec(dllimport) errno_t __cdecl _get_wpgmptr(wchar_t** _Value);

	__declspec(dllimport) errno_t __cdecl _set_fmode(int       _Mode);

	__declspec(dllimport) errno_t __cdecl _get_fmode(int*      _PMode);








	typedef struct _div_t
	{
		int quot;
		int rem;
	} div_t;

	typedef struct _ldiv_t
	{
		long quot;
		long rem;
	} ldiv_t;

	typedef struct _lldiv_t
	{
		long long quot;
		long long rem;
	} lldiv_t;

	int       __cdecl abs(int       _Number);
	long      __cdecl labs(long      _Number);
	long long __cdecl llabs(long long _Number);
	__int64   __cdecl _abs64(__int64   _Number);

	unsigned short   __cdecl _byteswap_ushort(unsigned short   _Number);
	unsigned long    __cdecl _byteswap_ulong(unsigned long    _Number);
	unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number);

	__declspec(dllimport) div_t   __cdecl div(int       _Numerator, int       _Denominator);
	__declspec(dllimport) ldiv_t  __cdecl ldiv(long      _Numerator, long      _Denominator);
	__declspec(dllimport) lldiv_t __cdecl lldiv(long long _Numerator, long long _Denominator);



#pragma warning (push)
#pragma warning (disable:6540) 

	unsigned int __cdecl _rotl(
		unsigned int _Value,
		int          _Shift
	);


	unsigned long __cdecl _lrotl(
		unsigned long _Value,
		int           _Shift
	);

	unsigned __int64 __cdecl _rotl64(
		unsigned __int64 _Value,
		int              _Shift
	);

	unsigned int __cdecl _rotr(
		unsigned int _Value,
		int          _Shift
	);


	unsigned long __cdecl _lrotr(
		unsigned long _Value,
		int           _Shift
	);

	unsigned __int64 __cdecl _rotr64(
		unsigned __int64 _Value,
		int              _Shift
	);

#pragma warning (pop)






	__declspec(dllimport) void __cdecl srand(unsigned int _Seed);

	__declspec(dllimport) int __cdecl rand(void);








	extern "C++"
	{
		inline long abs(long const _X) throw()
		{
			return labs(_X);
		}

		inline long long abs(long long const _X) throw()
		{
			return llabs(_X);
		}

		inline ldiv_t div(long const _A1, long const _A2) throw()
		{
			return ldiv(_A1, _A2);
		}

		inline lldiv_t div(long long const _A1, long long const _A2) throw()
		{
			return lldiv(_A1, _A2);
		}
	}











#pragma pack(push, 4)
	typedef struct
	{
		unsigned char ld[10];
	} _LDOUBLE;
#pragma pack(pop)















	typedef struct
	{
		double x;
	} _CRT_DOUBLE;

	typedef struct
	{
		float f;
	} _CRT_FLOAT;





	typedef struct
	{
		long double x;
	} _LONGDOUBLE;



#pragma pack(push, 4)
	typedef struct
	{
		unsigned char ld12[12];
	} _LDBL12;
#pragma pack(pop)








	__declspec(dllimport) double    __cdecl atof(char const* _String);
	__declspec(dllimport) int       __cdecl atoi(char const* _String);
	__declspec(dllimport) long      __cdecl atol(char const* _String);
	__declspec(dllimport) long long __cdecl atoll(char const* _String);
	__declspec(dllimport) __int64   __cdecl _atoi64(char const* _String);

	__declspec(dllimport) double    __cdecl _atof_l(char const* _String, _locale_t _Locale);
	__declspec(dllimport) int       __cdecl _atoi_l(char const* _String, _locale_t _Locale);
	__declspec(dllimport) long      __cdecl _atol_l(char const* _String, _locale_t _Locale);
	__declspec(dllimport) long long __cdecl _atoll_l(char const* _String, _locale_t _Locale);
	__declspec(dllimport) __int64   __cdecl _atoi64_l(char const* _String, _locale_t _Locale);

	__declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT*  _Result, char const* _String);
	__declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE* _Result, char*       _String);
	__declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE*    _Result, char*       _String);


	__declspec(dllimport) int __cdecl _atoflt_l(
		_CRT_FLOAT* _Result,
		char const* _String,
		_locale_t   _Locale
	);


	__declspec(dllimport) int __cdecl _atodbl_l(
		_CRT_DOUBLE* _Result,
		char*        _String,
		_locale_t    _Locale
	);



	__declspec(dllimport) int __cdecl _atoldbl_l(
		_LDOUBLE* _Result,
		char*     _String,
		_locale_t _Locale
	);


	__declspec(dllimport) float __cdecl strtof(
		char const* _String,
		char**      _EndPtr
	);


	__declspec(dllimport) float __cdecl _strtof_l(
		char const* _String,
		char**      _EndPtr,
		_locale_t   _Locale
	);


	__declspec(dllimport) double __cdecl strtod(
		char const* _String,
		char**      _EndPtr
	);


	__declspec(dllimport) double __cdecl _strtod_l(
		char const* _String,
		char**      _EndPtr,
		_locale_t   _Locale
	);


	__declspec(dllimport) long double __cdecl strtold(
		char const* _String,
		char**      _EndPtr
	);


	__declspec(dllimport) long double __cdecl _strtold_l(
		char const* _String,
		char**      _EndPtr,
		_locale_t   _Locale
	);


	__declspec(dllimport) long __cdecl strtol(
		char const* _String,
		char**      _EndPtr,
		int         _Radix
	);


	__declspec(dllimport) long __cdecl _strtol_l(
		char const* _String,
		char**      _EndPtr,
		int         _Radix,
		_locale_t   _Locale
	);


	__declspec(dllimport) long long __cdecl strtoll(
		char const* _String,
		char**      _EndPtr,
		int         _Radix
	);


	__declspec(dllimport) long long __cdecl _strtoll_l(
		char const* _String,
		char**      _EndPtr,
		int         _Radix,
		_locale_t   _Locale
	);


	__declspec(dllimport) unsigned long __cdecl strtoul(
		char const* _String,
		char**      _EndPtr,
		int         _Radix
	);


	__declspec(dllimport) unsigned long __cdecl _strtoul_l(
		char const* _String,
		char**      _EndPtr,
		int         _Radix,
		_locale_t   _Locale
	);


	__declspec(dllimport) unsigned long long __cdecl strtoull(
		char const* _String,
		char**      _EndPtr,
		int         _Radix
	);


	__declspec(dllimport) unsigned long long __cdecl _strtoull_l(
		char const* _String,
		char**      _EndPtr,
		int         _Radix,
		_locale_t   _Locale
	);


	__declspec(dllimport) __int64 __cdecl _strtoi64(
		char const* _String,
		char**      _EndPtr,
		int         _Radix
	);


	__declspec(dllimport) __int64 __cdecl _strtoi64_l(
		char const* _String,
		char**      _EndPtr,
		int         _Radix,
		_locale_t   _Locale
	);


	__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(
		char const* _String,
		char**      _EndPtr,
		int         _Radix
	);


	__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(
		char const* _String,
		char**      _EndPtr,
		int         _Radix,
		_locale_t   _Locale
	);










	__declspec(dllimport) errno_t __cdecl _itoa_s(
		int    _Value,
		char*  _Buffer,
		size_t _BufferCount,
		int    _Radix
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl _itoa_s(int _Value, char(&_Buffer)[_Size], int _Radix) throw() { return _itoa_s(_Value, _Buffer, _Size, _Radix); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _itoa(int _Value, char *_Buffer, int _Radix);



	__declspec(dllimport) errno_t __cdecl _ltoa_s(
		long   _Value,
		char*  _Buffer,
		size_t _BufferCount,
		int    _Radix
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _ltoa_s(long _Value, char(&_Buffer)[_Size], int _Radix) throw() { return _ltoa_s(_Value, _Buffer, _Size, _Radix); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _ltoa(long _Value, char *_Buffer, int _Radix);



	__declspec(dllimport) errno_t __cdecl _ultoa_s(
		unsigned long _Value,
		char*         _Buffer,
		size_t        _BufferCount,
		int           _Radix
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _ultoa_s(unsigned long _Value, char(&_Buffer)[_Size], int _Radix) throw() { return _ultoa_s(_Value, _Buffer, _Size, _Radix); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _ultoa(unsigned long _Value, char *_Buffer, int _Radix);



	__declspec(dllimport) errno_t __cdecl _i64toa_s(
		__int64 _Value,
		char*   _Buffer,
		size_t  _BufferCount,
		int     _Radix
	);


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl _i64toa(
			__int64 _Value,
			char*   _Buffer,
			int     _Radix
		);



	__declspec(dllimport) errno_t __cdecl _ui64toa_s(
		unsigned __int64 _Value,
		char*            _Buffer,
		size_t           _BufferCount,
		int              _Radix
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl _ui64toa(
			unsigned __int64 _Value,
			char*            _Buffer,
			int              _Radix
		);















	__declspec(dllimport) errno_t __cdecl _ecvt_s(
		char* _Buffer,
		size_t                       _BufferCount,
		double                       _Value,
		int                          _DigitCount,
		int*                         _PtDec,
		int*                         _PtSign
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _ecvt_s(char(&_Buffer)[_Size], double _Value, int _DigitCount, int* _PtDec, int* _PtSign) throw() { return _ecvt_s(_Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl _ecvt(
			double _Value,
			int    _DigitCount,
			int*   _PtDec,
			int*   _PtSign
		);



	__declspec(dllimport) errno_t __cdecl _fcvt_s(
		char*  _Buffer,
		size_t _BufferCount,
		double _Value,
		int    _FractionalDigitCount,
		int*   _PtDec,
		int*   _PtSign
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl _fcvt_s(char(&_Buffer)[_Size], double _Value, int _FractionalDigitCount, int* _PtDec, int* _PtSign) throw() { return _fcvt_s(_Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign); } }


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl _fcvt(
			double _Value,
			int    _FractionalDigitCount,
			int*   _PtDec,
			int*   _PtSign
		);


	__declspec(dllimport) errno_t __cdecl _gcvt_s(
		char*  _Buffer,
		size_t _BufferCount,
		double _Value,
		int    _DigitCount
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl _gcvt_s(char(&_Buffer)[_Size], double _Value, int _DigitCount) throw() { return _gcvt_s(_Buffer, _Size, _Value, _DigitCount); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_gcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl _gcvt(
			double _Value,
			int    _DigitCount,
			char*  _Buffer
		);
























	__declspec(dllimport) int __cdecl ___mb_cur_max_func(void);


	__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t);





	__declspec(dllimport) int __cdecl mblen(
		char const* _Ch,
		size_t      _MaxCount
	);


	__declspec(dllimport) int __cdecl _mblen_l(
		char const* _Ch,
		size_t      _MaxCount,
		_locale_t   _Locale
	);



	__declspec(dllimport) size_t __cdecl _mbstrlen(
		char const* _String
	);



	__declspec(dllimport) size_t __cdecl _mbstrlen_l(
		char const* _String,
		_locale_t   _Locale
	);



	__declspec(dllimport) size_t __cdecl _mbstrnlen(
		char const* _String,
		size_t      _MaxCount
	);



	__declspec(dllimport) size_t __cdecl _mbstrnlen_l(
		char const* _String,
		size_t      _MaxCount,
		_locale_t   _Locale
	);


	__declspec(dllimport) int __cdecl mbtowc(
		wchar_t*    _DstCh,
		char const* _SrcCh,
		size_t      _SrcSizeInBytes
	);


	__declspec(dllimport) int __cdecl _mbtowc_l(
		wchar_t*    _DstCh,
		char const* _SrcCh,
		size_t      _SrcSizeInBytes,
		_locale_t   _Locale
	);


	__declspec(dllimport) errno_t __cdecl mbstowcs_s(
		size_t*     _PtNumOfCharConverted,
		wchar_t*    _DstBuf,
		size_t      _SizeInWords,
		char const* _SrcBuf,
		size_t      _MaxCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl mbstowcs_s(size_t* _PtNumOfCharConverted, wchar_t(&_Dest)[_Size], char const* _Source, size_t _MaxCount) throw() { return mbstowcs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbstowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl mbstowcs(wchar_t *_Dest, char const* _Source, size_t _MaxCount);


	__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(
		size_t*     _PtNumOfCharConverted,
		wchar_t*    _DstBuf,
		size_t      _SizeInWords,
		char const* _SrcBuf,
		size_t      _MaxCount,
		_locale_t   _Locale
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _mbstowcs_s_l(size_t* _PtNumOfCharConverted, wchar_t(&_Dest)[_Size], char const* _Source, size_t _MaxCount, _locale_t _Locale) throw() { return _mbstowcs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_mbstowcs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl _mbstowcs_l(wchar_t *_Dest, char const* _Source, size_t _MaxCount, _locale_t _Locale);




	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wctomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) int __cdecl wctomb(
			char*   _MbCh,
			wchar_t _WCh
		);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctomb_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) int __cdecl _wctomb_l(
			char*     _MbCh,
			wchar_t   _WCh,
			_locale_t _Locale
		);




	__declspec(dllimport) errno_t __cdecl wctomb_s(
		int*    _SizeConverted,
		char*   _MbCh,
		rsize_t _SizeInBytes,
		wchar_t _WCh
	);




	__declspec(dllimport) errno_t __cdecl _wctomb_s_l(
		int*     _SizeConverted,
		char*     _MbCh,
		size_t    _SizeInBytes,
		wchar_t   _WCh,
		_locale_t _Locale);


	__declspec(dllimport) errno_t __cdecl wcstombs_s(
		size_t*        _PtNumOfCharConverted,
		char*          _Dst,
		size_t         _DstSizeInBytes,
		wchar_t const* _Src,
		size_t         _MaxCountInBytes
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl wcstombs_s(size_t* _PtNumOfCharConverted, char(&_Dest)[_Size], wchar_t const* _Source, size_t _MaxCount) throw() { return wcstombs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcstombs(char *_Dest, wchar_t const* _Source, size_t _MaxCount);


	__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(
		size_t*        _PtNumOfCharConverted,
		char*          _Dst,
		size_t         _DstSizeInBytes,
		wchar_t const* _Src,
		size_t         _MaxCountInBytes,
		_locale_t      _Locale
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcstombs_s_l(size_t* _PtNumOfCharConverted, char(&_Dest)[_Size], wchar_t const* _Source, size_t _MaxCount, _locale_t _Locale) throw() { return _wcstombs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcstombs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl _wcstombs_l(char *_Dest, wchar_t const* _Source, size_t _MaxCount, _locale_t _Locale);






















	__declspec(dllimport) __declspec(allocator) char* __cdecl _fullpath(
		char*       _Buffer,
		char const* _Path,
		size_t      _BufferCount
	);




	__declspec(dllimport) errno_t __cdecl _makepath_s(
		char*       _Buffer,
		size_t      _BufferCount,
		char const* _Drive,
		char const* _Dir,
		char const* _Filename,
		char const* _Ext
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _makepath_s(char(&_Buffer)[_Size], char const* _Drive, char const* _Dir, char const* _Filename, char const* _Ext) throw() { return _makepath_s(_Buffer, _Size, _Drive, _Dir, _Filename, _Ext); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_makepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _makepath(char *_Buffer, char const* _Drive, char const* _Dir, char const* _Filename, char const* _Ext);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_splitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) void __cdecl _splitpath(
			char const* _FullPath,
			char*       _Drive,
			char*       _Dir,
			char*       _Filename,
			char*       _Ext
		);


	__declspec(dllimport) errno_t __cdecl _splitpath_s(
		char const* _FullPath,
		char*       _Drive,
		size_t      _DriveCount,
		char*       _Dir,
		size_t      _DirCount,
		char*       _Filename,
		size_t      _FilenameCount,
		char*       _Ext,
		size_t      _ExtCount
	);

	extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline errno_t __cdecl _splitpath_s(char const* _Dest, char(&_Drive)[_DriveSize], char(&_Dir)[_DirSize], char(&_Name)[_NameSize], char(&_Ext)[_ExtSize]) throw() { return _splitpath_s(_Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }














	__declspec(dllimport) errno_t __cdecl getenv_s(
		size_t*     _RequiredCount,
		char*       _Buffer,
		rsize_t     _BufferCount,
		char const* _VarName
	);






	__declspec(dllimport) int*       __cdecl __p___argc(void);
	__declspec(dllimport) char***    __cdecl __p___argv(void);
	__declspec(dllimport) wchar_t*** __cdecl __p___wargv(void);











	__declspec(dllimport) char***    __cdecl __p__environ(void);
	__declspec(dllimport) wchar_t*** __cdecl __p__wenviron(void);






















	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_dupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl getenv(
			char const* _VarName
		);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl getenv_s(size_t* _RequiredCount, char(&_Buffer)[_Size], char const* _VarName) throw() { return getenv_s(_RequiredCount, _Buffer, _Size, _VarName); } }







	__declspec(dllimport) errno_t __cdecl _dupenv_s(
		char**      _Buffer,
		size_t*     _BufferCount,
		char const* _VarName
	);





	__declspec(dllimport) int __cdecl system(
		char const* _Command
	);



#pragma warning (push)
#pragma warning (disable:6540)


	__declspec(dllimport) int __cdecl _putenv(
		char const* _EnvString
	);


	__declspec(dllimport) errno_t __cdecl _putenv_s(
		char const* _Name,
		char const* _Value
	);

#pragma warning (pop)

	__declspec(dllimport) errno_t __cdecl _searchenv_s(
		char const* _Filename,
		char const* _VarName,
		char*       _Buffer,
		size_t      _BufferCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _searchenv_s(char const* _Filename, char const* _VarName, char(&_Buffer)[_Size]) throw() { return _searchenv_s(_Filename, _VarName, _Buffer, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_searchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) void __cdecl _searchenv(char const* _Filename, char const* _VarName, char *_Buffer);


	__declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "SetErrorMode" " " "instead. See online help for details."))
		__declspec(dllimport) void __cdecl _seterrormode(
			int _Mode
		);

	__declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "Beep" " " "instead. See online help for details."))
		__declspec(dllimport) void __cdecl _beep(
			unsigned _Frequency,
			unsigned _Duration
		);

	__declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "Sleep" " " "instead. See online help for details."))
		__declspec(dllimport) void __cdecl _sleep(
			unsigned long _Duration
		);




















#pragma warning(push)
#pragma warning(disable: 4141) 

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ecvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl ecvt(
			double _Value,
			int    _DigitCount,
			int*   _PtDec,
			int*   _PtSign
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl fcvt(
			double _Value,
			int    _FractionalDigitCount,
			int*   _PtDec,
			int*   _PtSign
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_gcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl gcvt(
			double _Value,
			int    _DigitCount,
			char*  _DstBuf
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_itoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl itoa(
			int   _Value,
			char* _Buffer,
			int   _Radix
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ltoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl ltoa(
			long  _Value,
			char* _Buffer,
			int   _Radix
		);


	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_swab" ". See online help for details."))
		__declspec(dllimport) void __cdecl swab(
			char* _Buf1,
			char* _Buf2,
			int   _SizeInBytes
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_ultoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl ultoa(
			unsigned long _Value,
			char*         _Buffer,
			int           _Radix
		);





	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_putenv" ". See online help for details."))
		__declspec(dllimport) int __cdecl putenv(
			char const* _EnvString
		);



#pragma warning(pop)

	_onexit_t __cdecl onexit(_onexit_t _Func);





} __pragma(pack(pop))





namespace std {
	using ::size_t; using ::div_t; using ::ldiv_t;
	using ::abort; using ::abs; using ::atexit;
	using ::atof; using ::atoi; using ::atol;
	using ::bsearch; using ::calloc; using ::div;
	using ::exit; using ::free;
	using ::labs; using ::ldiv; using ::malloc;
	using ::mblen; using ::mbstowcs; using ::mbtowc;
	using ::qsort; using ::rand; using ::realloc;
	using ::srand; using ::strtod; using ::strtol;
	using ::strtoul;
	using ::wcstombs; using ::wctomb;

	using ::lldiv_t;


	using ::getenv;
	using ::system;


	using ::atoll; using ::llabs; using ::lldiv;
	using ::strtof; using ::strtold;
	using ::strtoll; using ::strtoull;

	using ::_Exit; using ::at_quick_exit; using ::quick_exit;
}












#pragma once





#pragma pack(push,8)
#pragma warning(push,3)



namespace std {

	template<class _Elem>
	class initializer_list
	{
	public:
		typedef _Elem value_type;
		typedef const _Elem& reference;
		typedef const _Elem& const_reference;
		typedef size_t size_type;

		typedef const _Elem* iterator;
		typedef const _Elem* const_iterator;

		constexpr initializer_list() noexcept
			: _First(0), _Last(0)
		{
		}

		constexpr initializer_list(const _Elem *_First_arg,
			const _Elem *_Last_arg) noexcept
			: _First(_First_arg), _Last(_Last_arg)
		{
		}

		constexpr const _Elem *begin() const noexcept
		{
			return (_First);
		}

		constexpr const _Elem *end() const noexcept
		{
			return (_Last);
		}

		constexpr size_t size() const noexcept
		{
			return ((size_t)(_Last - _First));
		}

	private:
		const _Elem *_First;
		const _Elem *_Last;
	};


	template<class _Elem> inline
		constexpr const _Elem *begin(initializer_list<_Elem> _Ilist) noexcept
	{
		return (_Ilist.begin());
	}


	template<class _Elem> inline
		constexpr const _Elem *end(initializer_list<_Elem> _Ilist) noexcept
	{
		return (_Ilist.end());
	}
}

#pragma warning(pop)
#pragma pack(pop)











#pragma once





#pragma pack(push,8)
#pragma warning(push,3)



namespace std {

	struct _Nil
	{
	};


	template<class _Ty,
		_Ty _Val>
		struct integral_constant
	{
		static constexpr _Ty value = _Val;

		typedef _Ty value_type;
		typedef integral_constant<_Ty, _Val> type;

		constexpr operator value_type() const noexcept
		{
			return (value);
		}

		constexpr value_type operator()() const noexcept
		{
			return (value);
		}
	};

	typedef integral_constant<bool, true> true_type;
	typedef integral_constant<bool, false> false_type;


	template<bool _Val>
	using bool_constant = integral_constant<bool, _Val>;


	template<bool _Val>
	struct _Cat_base
		: integral_constant<bool, _Val>
	{
	};


	template<bool _Test,
		class _Ty = void>
		struct enable_if
	{
	};

	template<class _Ty>
	struct enable_if<true, _Ty>
	{
		typedef _Ty type;
	};


	template<bool _Test,
		class _Ty1,
		class _Ty2>
		struct conditional
	{
		typedef _Ty2 type;
	};

	template<class _Ty1,
		class _Ty2>
		struct conditional<true, _Ty1, _Ty2>
	{
		typedef _Ty1 type;
	};


	template<class _Ty1,
		class _Ty2>
		struct is_same
		: false_type
	{
	};

	template<class _Ty1>
	struct is_same<_Ty1, _Ty1>
		: true_type
	{
	};


	template<class _Ty,
		class _Uty>
		constexpr bool is_same_v = is_same<_Ty, _Uty>::value;



	template<class _Ty>
	struct remove_const
	{
		typedef _Ty type;
	};

	template<class _Ty>
	struct remove_const<const _Ty>
	{
		typedef _Ty type;
	};


	template<class _Ty>
	struct remove_volatile
	{
		typedef _Ty type;
	};

	template<class _Ty>
	struct remove_volatile<volatile _Ty>
	{
		typedef _Ty type;
	};


	template<class _Ty>
	struct remove_cv
	{
		typedef typename remove_const<typename remove_volatile<_Ty>::type>::type
			type;
	};


	template<class _Ty>
	struct _Is_integral
		: false_type
	{
	};

	template<>
	struct _Is_integral<bool>
		: true_type
	{
	};

	template<>
	struct _Is_integral<char>
		: true_type
	{
	};

	template<>
	struct _Is_integral<unsigned char>
		: true_type
	{
	};

	template<>
	struct _Is_integral<signed char>
		: true_type
	{
	};


	template<>
	struct _Is_integral<wchar_t>
		: true_type
	{
	};


	template<>
	struct _Is_integral<unsigned short>
		: true_type
	{
	};

	template<>
	struct _Is_integral<signed short>
		: true_type
	{
	};

	template<>
	struct _Is_integral<unsigned int>
		: true_type
	{
	};

	template<>
	struct _Is_integral<signed int>
		: true_type
	{
	};

	template<>
	struct _Is_integral<unsigned long>
		: true_type
	{
	};

	template<>
	struct _Is_integral<signed long>
		: true_type
	{
	};

	template<>
	struct _Is_integral<char16_t>
		: true_type
	{
	};

	template<>
	struct _Is_integral<char32_t>
		: true_type
	{
	};

	template<>
	struct _Is_integral<long long>
		: true_type
	{
	};

	template<>
	struct _Is_integral<unsigned long long>
		: true_type
	{
	};


	template<class _Ty>
	struct is_integral
		: _Is_integral<typename remove_cv<_Ty>::type>
	{
	};


	template<class _Ty>
	constexpr bool is_integral_v = is_integral<_Ty>::value;



	template<class _Ty>
	struct _Is_floating_point
		: false_type
	{
	};

	template<>
	struct _Is_floating_point<float>
		: true_type
	{
	};

	template<>
	struct _Is_floating_point<double>
		: true_type
	{
	};

	template<>
	struct _Is_floating_point<long double>
		: true_type
	{
	};


	template<class _Ty>
	struct is_floating_point
		: _Is_floating_point<typename remove_cv<_Ty>::type>
	{
	};


	template<class _Ty>
	constexpr bool is_floating_point_v = is_floating_point<_Ty>::value;



	template<class _Ty>
	struct is_arithmetic
		: _Cat_base<is_integral<_Ty>::value
		|| is_floating_point<_Ty>::value>
	{
	};


	template<class _Ty>
	constexpr bool is_arithmetic_v = is_arithmetic<_Ty>::value;



	template<class _Ty>
	struct remove_reference
	{
		typedef _Ty type;
	};

	template<class _Ty>
	struct remove_reference<_Ty&>
	{
		typedef _Ty type;
	};

	template<class _Ty>
	struct remove_reference<_Ty&&>
	{
		typedef _Ty type;
	};


	struct _Wrap_int
	{
		_Wrap_int(int)
		{
		}
	};

	template<class _Ty>
	struct _Identity
	{
		typedef _Ty type;
	};














}

#pragma warning(pop)
#pragma pack(pop)









#pragma pack(push,8)
#pragma warning(push,3)









namespace std {






































































































	template<bool,
		class _Ty1,
		class _Ty2>
		struct _If
	{
		typedef _Ty2 type;
	};

	template<class _Ty1,
		class _Ty2>
		struct _If<true, _Ty1, _Ty2>
	{
		typedef _Ty1 type;
	};

	template<class _Ty>
	struct _Always_false
	{
		static constexpr bool value = false;
	};





	template<class _Arg,
		class _Result>
		struct unary_function
	{
		typedef _Arg argument_type;
		typedef _Result result_type;
	};


	template<class _Arg1,
		class _Arg2,
		class _Result>
		struct binary_function
	{
		typedef _Arg1 first_argument_type;
		typedef _Arg2 second_argument_type;
		typedef _Result result_type;
	};



	template<class _Ty = void>
	struct plus
	{
		typedef _Ty first_argument_type;
		typedef _Ty second_argument_type;
		typedef _Ty result_type;

		constexpr _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{
			return (_Left + _Right);
		}
	};


	template<class _Ty = void>
	struct minus
	{
		typedef _Ty first_argument_type;
		typedef _Ty second_argument_type;
		typedef _Ty result_type;

		constexpr _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{
			return (_Left - _Right);
		}
	};


	template<class _Ty = void>
	struct multiplies
	{
		typedef _Ty first_argument_type;
		typedef _Ty second_argument_type;
		typedef _Ty result_type;

		constexpr _Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{
			return (_Left * _Right);
		}
	};


	template<class _Ty = void>
	struct equal_to
	{
		typedef _Ty first_argument_type;
		typedef _Ty second_argument_type;
		typedef bool result_type;

		constexpr bool operator()(const _Ty& _Left, const _Ty& _Right) const
		{
			return (_Left == _Right);
		}
	};


	template<class _Ty = void>
	struct less
	{
		typedef _Ty first_argument_type;
		typedef _Ty second_argument_type;
		typedef bool result_type;

		constexpr bool operator()(const _Ty& _Left, const _Ty& _Right) const
		{
			return (_Left < _Right);
		}
	};


	template<>
	struct plus<void>
	{
		typedef int is_transparent;

		template<class _Ty1,
			class _Ty2>
			constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
			-> decltype(static_cast<_Ty1&&>(_Left)
				+ static_cast<_Ty2&&>(_Right))
		{
			return (static_cast<_Ty1&&>(_Left)
				+ static_cast<_Ty2&&>(_Right));
		}
	};


	template<>
	struct minus<void>
	{
		typedef int is_transparent;

		template<class _Ty1,
			class _Ty2>
			constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
			-> decltype(static_cast<_Ty1&&>(_Left)
				- static_cast<_Ty2&&>(_Right))
		{
			return (static_cast<_Ty1&&>(_Left)
				- static_cast<_Ty2&&>(_Right));
		}
	};


	template<>
	struct multiplies<void>
	{
		typedef int is_transparent;

		template<class _Ty1,
			class _Ty2>
			constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
			-> decltype(static_cast<_Ty1&&>(_Left)
				* static_cast<_Ty2&&>(_Right))
		{
			return (static_cast<_Ty1&&>(_Left)
				* static_cast<_Ty2&&>(_Right));
		}
	};


	template<>
	struct equal_to<void>
	{
		typedef int is_transparent;

		template<class _Ty1,
			class _Ty2>
			constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
			-> decltype(static_cast<_Ty1&&>(_Left)
				== static_cast<_Ty2&&>(_Right))
		{
			return (static_cast<_Ty1&&>(_Left)
				== static_cast<_Ty2&&>(_Right));
		}
	};


	template<>
	struct less<void>
	{
		typedef int is_transparent;

		template<class _Ty1,
			class _Ty2>
			constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
			-> decltype(static_cast<_Ty1&&>(_Left)
				< static_cast<_Ty2&&>(_Right))
		{
			return (static_cast<_Ty1&&>(_Left)
				< static_cast<_Ty2&&>(_Right));
		}
	};


}



namespace std {

	inline size_t _Hash_seq(const unsigned char *_First, size_t _Count)
	{

		static_assert(sizeof(size_t) == 8, "This code is for 64-bit size_t.");
		const size_t _FNV_offset_basis = 14695981039346656037ULL;
		const size_t _FNV_prime = 1099511628211ULL;







		size_t _Val = _FNV_offset_basis;
		for (size_t _Next = 0; _Next < _Count; ++_Next)
		{
			_Val ^= (size_t)_First[_Next];
			_Val *= _FNV_prime;
		}
		return (_Val);
	}


	template<class _Kty>
	struct _Bitwise_hash
	{
		typedef _Kty argument_type;
		typedef size_t result_type;

		size_t operator()(const _Kty& _Keyval) const
		{
			return (_Hash_seq((const unsigned char *)&_Keyval, sizeof(_Kty)));
		}
	};


	template<class _Kty>
	struct hash
		: public _Bitwise_hash<_Kty>
	{
		static constexpr bool _Value = __is_enum(_Kty);
		static_assert(_Value,
			"The C++ Standard doesn't provide a hash for this type.");
	};
	template<>
	struct hash<bool>
		: public _Bitwise_hash<bool>
	{
	};

	template<>
	struct hash<char>
		: public _Bitwise_hash<char>
	{
	};

	template<>
	struct hash<signed char>
		: public _Bitwise_hash<signed char>
	{
	};

	template<>
	struct hash<unsigned char>
		: public _Bitwise_hash<unsigned char>
	{
	};

	template<>
	struct hash<char16_t>
		: public _Bitwise_hash<char16_t>
	{
	};

	template<>
	struct hash<char32_t>
		: public _Bitwise_hash<char32_t>
	{
	};


	template<>
	struct hash<wchar_t>
		: public _Bitwise_hash<wchar_t>
	{
	};


	template<>
	struct hash<short>
		: public _Bitwise_hash<short>
	{
	};

	template<>
	struct hash<unsigned short>
		: public _Bitwise_hash<unsigned short>
	{
	};

	template<>
	struct hash<int>
		: public _Bitwise_hash<int>
	{
	};

	template<>
	struct hash<unsigned int>
		: public _Bitwise_hash<unsigned int>
	{
	};

	template<>
	struct hash<long>
		: public _Bitwise_hash<long>
	{
	};

	template<>
	struct hash<unsigned long>
		: public _Bitwise_hash<unsigned long>
	{
	};

	template<>
	struct hash<long long>
		: public _Bitwise_hash<long long>
	{
	};

	template<>
	struct hash<unsigned long long>
		: public _Bitwise_hash<unsigned long long>
	{
	};

	template<>
	struct hash<float>
		: public _Bitwise_hash<float>
	{
		typedef float _Kty;
		typedef _Bitwise_hash<_Kty> _Mybase;

		size_t operator()(const _Kty& _Keyval) const
		{
			return (_Mybase::operator()(
				_Keyval == 0 ? 0 : _Keyval));
		}
	};

	template<>
	struct hash<double>
		: public _Bitwise_hash<double>
	{
		typedef double _Kty;
		typedef _Bitwise_hash<_Kty> _Mybase;

		size_t operator()(const _Kty& _Keyval) const
		{
			return (_Mybase::operator()(
				_Keyval == 0 ? 0 : _Keyval));
		}
	};

	template<>
	struct hash<long double>
		: public _Bitwise_hash<long double>
	{
		typedef long double _Kty;
		typedef _Bitwise_hash<_Kty> _Mybase;

		size_t operator()(const _Kty& _Keyval) const
		{
			return (_Mybase::operator()(
				_Keyval == 0 ? 0 : _Keyval));
		}
	};

	template<class _Ty>
	struct hash<_Ty *>
		: public _Bitwise_hash<_Ty *>
	{
	};
}



namespace std {
	namespace tr1 {
		using ::std::hash;
	}
}









































































































namespace std {

	template<class... _Types>
	struct _Arg_types
	{
	};

	template<class _Ty1>
	struct _Arg_types<_Ty1>
	{
		typedef _Ty1 argument_type;
	};

	template<class _Ty1,
		class _Ty2>
		struct _Arg_types<_Ty1, _Ty2>
	{
		typedef _Ty1 first_argument_type;
		typedef _Ty2 second_argument_type;
	};


	template<class _Ty>
	struct _Is_function
	{
		typedef false_type _Bool_type;
		static constexpr bool _Weird = false;
	};












	template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = false; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = false; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const volatile> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const volatile &> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) && > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) && > : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret __cdecl (_Types...) const volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };    template<class _Ret, class... _Types> struct _Is_function<_Ret __vectorcall (_Types...) const volatile &&> : _Arg_types<_Types...> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };












	template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) > { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = false; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) const> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) volatile> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) const volatile> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) &> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) const &> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) const volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) && > { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) const &&> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; }; template<class _Ret, class... _Types> struct _Is_function<_Ret(_Types..., ...) const volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; static constexpr bool _Weird = true; };


	template<class _Ty>
	struct is_function
		: _Is_function<_Ty>::_Bool_type
	{
	};


	template<class _Ty>
	constexpr bool is_function_v = is_function<_Ty>::value;
























	template<class _Ty> inline
		constexpr _Ty *addressof(_Ty& _Val) noexcept
	{
		return (__builtin_addressof(_Val));
	}




	template<class _Ptrty> inline
		auto _Unfancy(_Ptrty _Ptr)
	{
		return (::std::addressof(*_Ptr));
	}

	template<class _Ty> inline
		_Ty * _Unfancy(_Ty * _Ptr)
	{
		return (_Ptr);
	}

}

#pragma warning(pop)
#pragma pack(pop)









#pragma pack(push,8)
#pragma warning(push,3)


#pragma warning(disable: 4180 4296)

namespace std {
	template<class _Ty>
	struct _Is_memfunptr
	{
		typedef false_type _Bool_type;
	};













	template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...)  > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) const > : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) volatile > : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) const volatile > : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...)  &> : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) const &> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) volatile &> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) const volatile &> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) && > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) && > : _Arg_types< _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) const &&> : _Arg_types<const _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) volatile &&> : _Arg_types<volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__cdecl _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };     template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(__vectorcall _Arg0::*)(_Types...) const volatile &&> : _Arg_types<const volatile _Arg0 *, _Types...> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };













	template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) > { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) const> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) volatile> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) const volatile> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) const &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) const volatile &> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) && > { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) const &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret(_Arg0::*)(_Types..., ...) const volatile &&> { typedef true_type _Bool_type; typedef _Ret result_type; typedef _Arg0 _Class_type; };



	template<class _Ty>
	struct is_void
		: false_type
	{
	};








	template<> struct is_void< void> : true_type { }; template<> struct is_void<const void> : true_type { }; template<> struct is_void<volatile void> : true_type { }; template<> struct is_void<const volatile void> : true_type { };




	template<class _Ty>
	struct add_const
	{
		typedef const _Ty type;
	};


	template<class _Ty>
	struct add_volatile
	{
		typedef volatile _Ty type;
	};


	template<class _Ty>
	struct add_cv
	{
		typedef const volatile _Ty type;
	};


	template<class _Ty,
		bool = _Is_function<_Ty>::_Weird || is_void<_Ty>::value>
		struct _Add_reference
	{
		typedef _Ty _Lvalue;
		typedef _Ty _Rvalue;
	};

	template<class _Ty>
	struct _Add_reference<_Ty, false>
	{
		typedef _Ty& _Lvalue;
		typedef _Ty&& _Rvalue;
	};


	template<class _Ty>
	struct add_lvalue_reference
	{
		typedef typename _Add_reference<_Ty>::_Lvalue type;
	};


	template<class _Ty>
	struct add_rvalue_reference
	{
		typedef typename _Add_reference<_Ty>::_Rvalue type;
	};


	template<class _Ty>
	typename add_rvalue_reference<_Ty>::type
		declval() noexcept;


	template<class _Ty>
	struct remove_extent
	{
		typedef _Ty type;
	};

	template<class _Ty, size_t _Ix>
	struct remove_extent<_Ty[_Ix]>
	{
		typedef _Ty type;
	};

	template<class _Ty>
	struct remove_extent<_Ty[]>
	{
		typedef _Ty type;
	};


	template<class _Ty>
	struct remove_all_extents
	{
		typedef _Ty type;
	};

	template<class _Ty, size_t _Ix>
	struct remove_all_extents<_Ty[_Ix]>
	{
		typedef typename remove_all_extents<_Ty>::type type;
	};

	template<class _Ty>
	struct remove_all_extents<_Ty[]>
	{
		typedef typename remove_all_extents<_Ty>::type type;
	};


	template<class _Ty>
	struct remove_pointer
	{
		typedef _Ty type;
	};








	template<class _Ty> struct remove_pointer<_Ty *> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *const> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *volatile> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *const volatile> { typedef _Ty type; };



	template<class _Ty,
		bool = _Is_function<_Ty>::_Weird>
		struct _Add_pointer
	{
		typedef _Ty type;
	};

	template<class _Ty>
	struct _Add_pointer<_Ty, false>
	{
		typedef typename remove_reference<_Ty>::type *type;
	};

	template<class _Ty>
	struct add_pointer
	{
		typedef typename _Add_pointer<_Ty>::type type;
	};



	template<class _Ty>
	struct is_array
		: false_type
	{
	};

	template<class _Ty, size_t _Nx>
	struct is_array<_Ty[_Nx]>
		: true_type
	{
	};

	template<class _Ty>
	struct is_array<_Ty[]>
		: true_type
	{
	};


	template<class _Ty>
	struct is_lvalue_reference
		: false_type
	{
	};

	template<class _Ty>
	struct is_lvalue_reference<_Ty&>
		: true_type
	{
	};


	template<class _Ty>
	struct is_rvalue_reference
		: false_type
	{
	};

	template<class _Ty>
	struct is_rvalue_reference<_Ty&&>
		: true_type
	{
	};


	template<class _Ty>
	struct is_reference
		: _Cat_base<is_lvalue_reference<_Ty>::value
		|| is_rvalue_reference<_Ty>::value>
	{
	};



	template<class _Ty,
		bool _Pmf = _Is_memfunptr<_Ty>::_Bool_type::value>
		struct _Is_member_object_pointer
		: false_type
	{
	};

	template<class _Ty1,
		class _Ty2>
		struct _Is_member_object_pointer<_Ty1 _Ty2::*, false>
		: true_type
	{
		typedef _Ty2 _Class_type;
	};

	template<class _Ty>
	struct is_member_object_pointer
		: _Is_member_object_pointer<typename remove_cv<_Ty>::type>::type
	{
	};


	template<class _Ty>
	struct is_member_function_pointer
		: _Is_memfunptr<typename remove_cv<_Ty>::type>::_Bool_type
	{
	};


	template<class _Ty>
	struct _Is_pointer
		: false_type
	{
	};

	template<class _Ty>
	struct _Is_pointer<_Ty *>
		: _Cat_base<!is_member_object_pointer<_Ty *>::value
		&& !is_member_function_pointer<_Ty *>::value>
	{
	};

	template<class _Ty>
	struct is_pointer
		: _Is_pointer<typename remove_cv<_Ty>::type>
	{
	};



	template<class _Ty>
	struct is_null_pointer
		: _Cat_base<is_same<typename remove_cv<_Ty>::type, nullptr_t>::value>
	{
	};


	template<class _Ty>
	struct is_union
		: _Cat_base<__is_union(_Ty)>
	{
	};


	template<class _Ty>
	struct is_class
		: _Cat_base<__is_class(_Ty)>
	{
	};


	template<class _Ty>
	struct is_fundamental
		: _Cat_base<is_arithmetic<_Ty>::value
		|| is_void<_Ty>::value
		|| is_null_pointer<_Ty>::value>
	{
	};


	template<class _Ty>
	struct is_object
		: _Cat_base<!is_function<_Ty>::value
		&& !is_reference<_Ty>::value
		&& !is_void<_Ty>::value>
	{
	};



	template<class _From,
		class _To>
		struct is_convertible
		: _Cat_base<__is_convertible_to(_From, _To)>
	{
	};


	template<class _Ty>
	struct is_enum
		: _Cat_base<__is_enum(_Ty)>
	{
	};


	template<class _Ty>
	struct is_compound
		: _Cat_base<!is_fundamental<_Ty>::value>
	{
	};


	template<class _Ty>
	struct is_member_pointer
		: _Cat_base<is_member_object_pointer<_Ty>::value
		|| is_member_function_pointer<_Ty>::value>
	{
	};


	template<class _Ty>
	struct is_scalar
		: _Cat_base<is_arithmetic<_Ty>::value
		|| is_enum<_Ty>::value
		|| is_pointer<_Ty>::value
		|| is_member_pointer<_Ty>::value
		|| is_null_pointer<_Ty>::value>
	{
	};


	template<class _Ty>
	struct is_const
		: false_type
	{
	};

	template<class _Ty>
	struct is_const<const _Ty>
		: true_type
	{
	};


	template<class _Ty>
	struct is_volatile
		: false_type
	{
	};

	template<class _Ty>
	struct is_volatile<volatile _Ty>
		: true_type
	{
	};


	template<class _Ty>
	struct is_pod
		: _Cat_base<__is_pod(_Ty)>
	{
	};


	template<class _Ty>
	struct is_empty
		: _Cat_base<__is_empty(_Ty)>
	{
	};


	template<class _Ty>
	struct is_polymorphic
		: _Cat_base<__is_polymorphic(_Ty)>
	{
	};


	template<class _Ty>
	struct is_abstract
		: _Cat_base<__is_abstract(_Ty)>
	{
	};


	template<class _Ty>
	struct is_final
		: _Cat_base<__is_final(_Ty)>
	{
	};


	template<class _Ty>
	struct is_standard_layout
		: _Cat_base<__is_standard_layout(_Ty)>
	{
	};


	template<class _Ty>
	struct is_literal_type
		: _Cat_base<__is_literal_type(_Ty)>
	{
	};


	template<class _Ty>
	struct is_trivial
		: _Cat_base<__is_trivial(_Ty)>
	{
	};


	template<class _Ty>
	struct is_trivially_copyable
		: _Cat_base<__is_trivially_copyable(_Ty)>
	{
	};


	template<class _Ty>
	struct has_virtual_destructor
		: _Cat_base<__has_virtual_destructor(_Ty)>
	{
	};




	template<class _Ty,
		class... _Args>
		struct is_constructible
		: _Cat_base<__is_constructible(_Ty, _Args...)>
	{
	};


	template<class _Ty>
	struct is_copy_constructible
		: is_constructible<
		_Ty,
		typename add_lvalue_reference<
		typename add_const<_Ty>::type
		>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_default_constructible
		: is_constructible<_Ty>::type
	{
	};


	template<class _Ty>
	struct is_move_constructible
		: is_constructible<
		_Ty,
		typename add_rvalue_reference<_Ty>::type
		>::type
	{
	};


	template<class _To,
		class _From>
		struct is_assignable
		: integral_constant<bool, __is_assignable(_To, _From)>
	{
	};


	template<class _Ty>
	struct is_copy_assignable
		: is_assignable<
		typename add_lvalue_reference<_Ty>::type,
		typename add_lvalue_reference<
		typename add_const<_Ty>::type
		>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_move_assignable
		: is_assignable<
		typename add_lvalue_reference<_Ty>::type,
		typename add_rvalue_reference<_Ty>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_destructible
		: _Cat_base<__is_destructible(_Ty)>
	{
	};




	template<class _Ty,
		class... _Args>
		struct is_trivially_constructible
		: _Cat_base<__is_trivially_constructible(_Ty, _Args...)>
	{
	};


	template<class _Ty>
	struct is_trivially_copy_constructible
		: is_trivially_constructible<
		_Ty,
		typename add_lvalue_reference<
		typename add_const<_Ty>::type
		>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_trivially_default_constructible
		: is_trivially_constructible<_Ty>::type
	{
	};


	template<class _Ty>
	struct is_trivially_move_constructible
		: is_trivially_constructible<
		_Ty,
		typename add_rvalue_reference<_Ty>::type
		>::type
	{
	};


	template<class _To,
		class _From>
		struct is_trivially_assignable
		: _Cat_base<__is_trivially_assignable(_To, _From)>
	{
	};


	template<class _Ty>
	struct is_trivially_copy_assignable
		: is_trivially_assignable<
		typename add_lvalue_reference<_Ty>::type,
		typename add_lvalue_reference<
		typename add_const<_Ty>::type
		>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_trivially_move_assignable
		: is_trivially_assignable<
		typename add_lvalue_reference<_Ty>::type,
		typename add_rvalue_reference<_Ty>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_trivially_destructible
		: _Cat_base<__has_trivial_destructor(_Ty)>
	{
	};




	template<class _Ty,
		class... _Args>
		struct is_nothrow_constructible
		: _Cat_base<__is_nothrow_constructible(_Ty, _Args...)>
	{
	};


	template<class _Ty>
	struct is_nothrow_copy_constructible
		: is_nothrow_constructible<
		_Ty,
		typename add_lvalue_reference<
		typename add_const<_Ty>::type
		>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_nothrow_default_constructible
		: is_nothrow_constructible<_Ty>::type
	{
	};


	template<class _Ty>
	struct is_nothrow_move_constructible
		: is_nothrow_constructible<
		_Ty,
		typename add_rvalue_reference<_Ty>::type
		>::type
	{
	};


	template<class _To,
		class _From>
		struct is_nothrow_assignable
		: _Cat_base<__is_nothrow_assignable(_To, _From)>
	{
	};


	template<class _Ty>
	struct is_nothrow_copy_assignable
		: is_nothrow_assignable<
		typename add_lvalue_reference<_Ty>::type,
		typename add_lvalue_reference<
		typename add_const<_Ty>::type
		>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_nothrow_move_assignable
		: is_nothrow_assignable<
		typename add_lvalue_reference<_Ty>::type,
		typename add_rvalue_reference<_Ty>::type
		>::type
	{
	};


	template<class _Ty>
	struct is_nothrow_destructible
		: _Cat_base<__is_nothrow_destructible(_Ty)>
	{
	};


	template<class _Ty,
		bool = is_integral<_Ty>::value>
		struct _Sign_base
	{
		typedef typename remove_cv<_Ty>::type _Uty;
		typedef _Cat_base < _Uty(-1) < _Uty(0) > _Signed;
		typedef _Cat_base < _Uty(0) < _Uty(-1) > _Unsigned;
	};

	template<class _Ty>
	struct _Sign_base<_Ty, false>
	{

		typedef is_floating_point<_Ty> _Signed;
		typedef false_type _Unsigned;
	};

	template<class _Ty>
	struct is_signed
		: _Sign_base<_Ty>::_Signed
	{
	};


	template<class _Ty>
	struct is_unsigned
		: _Sign_base<_Ty>::_Unsigned
	{
	};


	template<class _Ty>
	struct _Change_sign
	{
		static_assert(
			((is_integral<_Ty>::value || is_enum<_Ty>::value)
				&& !is_same<_Ty, bool>::value),
			"make_signed<T>/make_unsigned<T> require that T shall be a (possibly "
			"cv-qualified) integral type or enumeration but not a bool type.");

		typedef
			typename _If<is_same<_Ty, signed char>::value
			|| is_same<_Ty, unsigned char     >::value, signed char,
			typename _If<is_same<_Ty, short       >::value
			|| is_same<_Ty, unsigned short    >::value, short,
			typename _If<is_same<_Ty, int         >::value
			|| is_same<_Ty, unsigned int      >::value, int,
			typename _If<is_same<_Ty, long        >::value
			|| is_same<_Ty, unsigned long     >::value, long,
			typename _If<is_same<_Ty, long long   >::value
			|| is_same<_Ty, unsigned long long>::value, long long,
			typename _If<sizeof(_Ty) == sizeof(signed char), signed char,
			typename _If<sizeof(_Ty) == sizeof(short), short,
			typename _If<sizeof(_Ty) == sizeof(int), int,
			typename _If<sizeof(_Ty) == sizeof(long), long,
			long long
			>::type>::type>::type>::type>::type>::type>::type>::type>::type
			_Signed;

		typedef
			typename _If<is_same<_Signed, signed char>::value, unsigned char,
			typename _If<is_same<_Signed, short      >::value, unsigned short,
			typename _If<is_same<_Signed, int        >::value, unsigned int,
			typename _If<is_same<_Signed, long       >::value, unsigned long,
			unsigned long long
			>::type>::type>::type>::type
			_Unsigned;
	};

	template<class _Ty>
	struct _Change_sign<const _Ty>
	{
		typedef const typename _Change_sign<_Ty>::_Signed _Signed;
		typedef const typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};

	template<class _Ty>
	struct _Change_sign<volatile _Ty>
	{
		typedef volatile typename _Change_sign<_Ty>::_Signed _Signed;
		typedef volatile typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};

	template<class _Ty>
	struct _Change_sign<const volatile _Ty>
	{
		typedef const volatile typename _Change_sign<_Ty>::_Signed _Signed;
		typedef const volatile typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};


	template<class _Ty>
	struct make_signed
	{
		typedef typename _Change_sign<_Ty>::_Signed type;
	};


	template<class _Ty>
	struct make_unsigned
	{
		typedef typename _Change_sign<_Ty>::_Unsigned type;
	};



	template<class _Ty>
	struct alignment_of
		: integral_constant<size_t, alignof(_Ty)>
	{
	};






	template<class _Ty,
		size_t _Len>
		union _Align_type
	{
		_Ty _Val;
		char _Pad[_Len];
	};

	template<size_t _Len,
		size_t _Align,
		class _Ty,
		bool _Ok>
		struct _Aligned;

	template<size_t _Len,
		size_t _Align,
		class _Ty>
		struct _Aligned<_Len, _Align, _Ty, true>
	{
		typedef _Align_type<_Ty, _Len> type;
	};

	template<size_t _Len,
		size_t _Align>
		struct _Aligned<_Len, _Align, double, false>
	{
		typedef _Align_type<max_align_t, _Len> type;
	};

	template<size_t _Len,
		size_t _Align>
		struct _Aligned<_Len, _Align, int, false>
	{
		typedef typename _Aligned<_Len, _Align, double, _Align <= alignment_of<double>::value>::type type;
	};

	template<size_t _Len,
		size_t _Align>
		struct _Aligned<_Len, _Align, short, false>
	{
		typedef typename _Aligned<_Len, _Align, int, _Align <= alignment_of<int>::value>::type type;
	};

	template<size_t _Len,
		size_t _Align>
		struct _Aligned<_Len, _Align, char, false>
	{
		typedef typename _Aligned<_Len, _Align, short, _Align <= alignment_of<short>::value>::type type;
	};

	template<size_t _Len,
		size_t _Align = alignment_of<max_align_t>::value>
		struct aligned_storage
	{
		typedef typename _Aligned<_Len, _Align, char, _Align <= alignment_of<char>::value>::type type;
	};





	template<size_t... _Vals>
	struct _Maximum;

	template<>
	struct _Maximum<>
	{
		static constexpr size_t value = 0;
	};

	template<size_t _Val>
	struct _Maximum<_Val>
	{
		static constexpr size_t value = _Val;
	};

	template<size_t _First,
		size_t _Second,
		size_t... _Rest>
		struct _Maximum<_First, _Second, _Rest...>
		: _Maximum<(_First < _Second ? _Second : _First), _Rest...>
	{
	};

	template<size_t _Len,
		class... _Types>
		struct aligned_union
	{
		static constexpr size_t _Max_len = _Maximum<
			_Len, sizeof(_Types)...>::value;
		static constexpr size_t alignment_value = _Maximum<
			alignment_of<_Types>::value...>::value;
		typedef typename aligned_storage<_Max_len, alignment_value>::type type;
	};


	template<class _Ty>
	struct underlying_type
	{
		typedef __underlying_type(_Ty) type;
	};


	template<class _Ty>
	struct rank
		: integral_constant<size_t, 0>
	{
	};

	template<class _Ty, size_t _Ix>
	struct rank<_Ty[_Ix]>
		: integral_constant<size_t, rank<_Ty>::value + 1>
	{
	};

	template<class _Ty>
	struct rank<_Ty[]>
		: integral_constant<size_t, rank<_Ty>::value + 1>
	{
	};


	template<class _Ty, unsigned int _Nx>
	struct _Extent
		: integral_constant<size_t, 0>
	{
	};

	template<class _Ty, size_t _Ix>
	struct _Extent<_Ty[_Ix], 0>
		: integral_constant<size_t, _Ix>
	{
	};

	template<class _Ty, unsigned int _Nx, size_t _Ix>
	struct _Extent<_Ty[_Ix], _Nx>
		: _Extent<_Ty, _Nx - 1>
	{
	};

	template<class _Ty, unsigned int _Nx>
	struct _Extent<_Ty[], _Nx>
		: _Extent<_Ty, _Nx - 1>
	{
	};

	template<class _Ty, unsigned int _Nx = 0>
	struct extent
		: _Extent<_Ty, _Nx>
	{
	};


	template<class _Base,
		class _Der>
		struct is_base_of
		: _Cat_base<__is_base_of(_Base, _Der)>
	{
	};


	template<class _Ty>
	struct decay
	{
		typedef typename remove_reference<_Ty>::type _Ty1;

		typedef typename _If<is_array<_Ty1>::value,
			typename remove_extent<_Ty1>::type *,
			typename _If<is_function<_Ty1>::value,
			typename add_pointer<_Ty1>::type,
			typename remove_cv<_Ty1>::type>::type>::type type;
	};


	template<class...>
	struct _Conjunction;

	template<bool,
		class _Lhs,
		class... _Traits>
		struct _Choose_conjunction
	{
		typedef _Lhs type;
	};

	template<class _Lhs,
		class... _Traits>
		struct _Choose_conjunction<true, _Lhs, _Traits...>
	{
		typedef typename _Conjunction<_Traits...>::type type;
	};

	template<>
	struct _Conjunction<>
	{
		typedef true_type type;
	};

	template<class _Trait>
	struct _Conjunction<_Trait>
	{
		typedef _Trait type;
	};

	template<class _Lhs,
		class... _Traits>
		struct _Conjunction<_Lhs, _Traits...>
	{
		typedef typename _Choose_conjunction<_Lhs::value, _Lhs, _Traits...>::type type;
	};

	template<class... _Traits>
	struct conjunction
		: _Conjunction<_Traits...>::type
	{


	};


	template<class...>
	struct _Disjunction;

	template<bool,
		class _Lhs,
		class... _Traits>
		struct _Choose_disjunction
	{
		typedef _Lhs type;
	};

	template<class _Lhs,
		class... _Traits>
		struct _Choose_disjunction<false, _Lhs, _Traits...>
	{
		typedef typename _Disjunction<_Traits...>::type type;
	};

	template<>
	struct _Disjunction<>
	{
		typedef false_type type;
	};

	template<class _Trait>
	struct _Disjunction<_Trait>
	{
		typedef _Trait type;
	};

	template<class _Lhs,
		class... _Traits>
		struct _Disjunction<_Lhs, _Traits...>
	{
		typedef typename _Choose_disjunction<_Lhs::value, _Lhs, _Traits...>::type type;
	};

	template<class... _Traits>
	struct disjunction
		: _Disjunction<_Traits...>::type
	{


	};


	template<class _Trait>
	struct negation
		: bool_constant<!_Trait::value>
	{
	};


	namespace tr1 {
		using ::std::add_const;
		using ::std::add_cv;
		using ::std::add_pointer;
		using ::std::add_volatile;
		using ::std::aligned_storage;
		using ::std::alignment_of;
		using ::std::conditional;
		using ::std::decay;
		using ::std::enable_if;
		using ::std::extent;
		using ::std::false_type;
		using ::std::has_virtual_destructor;
		using ::std::integral_constant;
		using ::std::is_abstract;
		using ::std::is_arithmetic;
		using ::std::is_array;
		using ::std::is_base_of;
		using ::std::is_class;
		using ::std::is_compound;
		using ::std::is_const;
		using ::std::is_convertible;
		using ::std::is_empty;
		using ::std::is_enum;
		using ::std::is_floating_point;
		using ::std::is_function;
		using ::std::is_fundamental;
		using ::std::is_integral;
		using ::std::is_member_function_pointer;
		using ::std::is_member_object_pointer;
		using ::std::is_member_pointer;
		using ::std::is_object;
		using ::std::is_pod;
		using ::std::is_pointer;
		using ::std::is_polymorphic;
		using ::std::is_reference;
		using ::std::is_same;
		using ::std::is_scalar;
		using ::std::is_signed;
		using ::std::is_union;
		using ::std::is_unsigned;
		using ::std::is_void;
		using ::std::is_volatile;
		using ::std::make_signed;
		using ::std::make_unsigned;
		using ::std::rank;
		using ::std::remove_all_extents;
		using ::std::remove_const;
		using ::std::remove_cv;
		using ::std::remove_extent;
		using ::std::remove_pointer;
		using ::std::remove_reference;
		using ::std::remove_volatile;
		using ::std::true_type;
	}



	template<class... _Ty>
	struct common_type;

	template<class _Ty>
	struct common_type<_Ty>
	{
		typedef typename decay<_Ty>::type type;
	};

	template<class _Ty0,
		class _Ty1>
		struct common_type<_Ty0, _Ty1>
	{
		typedef typename decay<
			decltype(_Always_false<_Ty0>::value
				? ::std::declval<_Ty0>()
				: ::std::declval<_Ty1>())
		>::type type;
	};

	template<class _Ty0,
		class _Ty1,
		class... _Ty>
		struct common_type<_Ty0, _Ty1, _Ty...>
	{
		typedef typename common_type<
			typename common_type<_Ty0, _Ty1>::type, _Ty...
		>::type type;
	};


	template<class _Ty,
		_Ty... _Vals>
		struct integer_sequence
	{
		static_assert(is_integral<_Ty>::value,
			"integer_sequence<T, I...> requires T to be an integral type.");

		typedef integer_sequence<_Ty, _Vals...> type;
		typedef _Ty value_type;

		static constexpr size_t size() noexcept
		{
			return (sizeof...(_Vals));
		}
	};







































	template<class _Ty,
		_Ty _Size>
		using make_integer_sequence = __make_integer_seq<integer_sequence, _Ty, _Size>;


	template<size_t... _Vals>
	using index_sequence = integer_sequence<size_t, _Vals...>;

	template<size_t _Size>
	using make_index_sequence = make_integer_sequence<size_t, _Size>;

	template<class... _Types>
	using index_sequence_for = make_index_sequence<sizeof...(_Types)>;



	template<class _Ty>
	struct identity
	{
		typedef _Ty type;

		const _Ty& operator()(const _Ty& _Left) const
		{
			return (_Left);
		}
	};



	template<class _Ty> inline
		constexpr _Ty&& forward(
			typename remove_reference<_Ty>::type& _Arg) noexcept
	{
		return (static_cast<_Ty&&>(_Arg));
	}

	template<class _Ty> inline
		constexpr _Ty&& forward(
			typename remove_reference<_Ty>::type&& _Arg) noexcept
	{
		static_assert(!is_lvalue_reference<_Ty>::value, "bad forward call");
		return (static_cast<_Ty&&>(_Arg));
	}


	template<class _Ty> inline
		constexpr typename remove_reference<_Ty>::type&&
		move(_Ty&& _Arg) noexcept
	{
		return (static_cast<typename remove_reference<_Ty>::type&&>(_Arg));
	}


	template<class _Ty> inline
		constexpr typename _If<!is_nothrow_move_constructible<_Ty>::value
		&& is_copy_constructible<_Ty>::value,
		const _Ty&, _Ty&&>::type
		move_if_noexcept(_Ty& _Arg) noexcept
	{
		return (::std::move(_Arg));
	}


	template<class...>
	struct _Param_tester
	{
		typedef void type;
	};


	template<class... _Types>
	using void_t = typename _Param_tester<_Types...>::type;


	struct _Invoker_pmf_object
	{
		template<class _Decayed,
			class _Ty1,
			class... _Types2>
			static auto _Call(_Decayed _Pmf, _Ty1&& _Arg1, _Types2&&... _Args2)
			-> decltype((::std::forward<_Ty1>(_Arg1).*_Pmf)(
				::std::forward<_Types2>(_Args2)...))
		{
			return ((::std::forward<_Ty1>(_Arg1).*_Pmf)(
				::std::forward<_Types2>(_Args2)...));
		}
	};

	struct _Invoker_pmf_pointer
	{
		template<class _Decayed,
			class _Ty1,
			class... _Types2>
			static auto _Call(_Decayed _Pmf, _Ty1&& _Arg1, _Types2&&... _Args2)
			-> decltype(((*::std::forward<_Ty1>(_Arg1)).*_Pmf)(
				::std::forward<_Types2>(_Args2)...))
		{
			return (((*::std::forward<_Ty1>(_Arg1)).*_Pmf)(
				::std::forward<_Types2>(_Args2)...));
		}
	};

	struct _Invoker_pmd_object
	{
		template<class _Decayed,
			class _Ty1>
			static auto _Call(_Decayed _Pmd, _Ty1&& _Arg1)
			-> decltype(::std::forward<_Ty1>(_Arg1).*_Pmd)
		{
			return (::std::forward<_Ty1>(_Arg1).*_Pmd);
		}
	};

	struct _Invoker_pmd_pointer
	{
		template<class _Decayed,
			class _Ty1>
			static auto _Call(_Decayed _Pmd, _Ty1&& _Arg1)
			-> decltype((*::std::forward<_Ty1>(_Arg1)).*_Pmd)
		{
			return ((*::std::forward<_Ty1>(_Arg1)).*_Pmd);
		}
	};

	struct _Invoker_functor
	{
		template<class _Callable,
			class... _Types>
			static auto _Call(_Callable&& _Obj, _Types&&... _Args)
			-> decltype(::std::forward<_Callable>(_Obj)(
				::std::forward<_Types>(_Args)...))
		{
			return (::std::forward<_Callable>(_Obj)(
				::std::forward<_Types>(_Args)...));
		}
	};

	template<class _Callable,
		class _Ty1,
		class _Decayed = typename decay<_Callable>::type,
		bool _Is_pmf = is_member_function_pointer<_Decayed>::value,
		bool _Is_pmd = is_member_object_pointer<_Decayed>::value>
		struct _Invoker1;

	template<class _Callable,
		class _Ty1,
		class _Decayed>
		struct _Invoker1<_Callable, _Ty1, _Decayed, true, false>
		: _If<is_base_of<
		typename _Is_memfunptr<_Decayed>::_Class_type,
		typename decay<_Ty1>::type>::value,
		_Invoker_pmf_object,
		_Invoker_pmf_pointer>::type
	{
	};

	template<class _Callable,
		class _Ty1,
		class _Decayed>
		struct _Invoker1<_Callable, _Ty1, _Decayed, false, true>
		: _If<is_base_of<
		typename _Is_member_object_pointer<_Decayed>::_Class_type,
		typename decay<_Ty1>::type>::value,
		_Invoker_pmd_object,
		_Invoker_pmd_pointer>::type
	{
	};

	template<class _Callable,
		class _Ty1,
		class _Decayed>
		struct _Invoker1<_Callable, _Ty1, _Decayed, false, false>
		: _Invoker_functor
	{
	};

	template<class _Callable,
		class... _Types>
		struct _Invoker;

	template<class _Callable>
	struct _Invoker<_Callable>
		: _Invoker_functor
	{
	};

	template<class _Callable,
		class _Ty1,
		class... _Types2>
		struct _Invoker<_Callable, _Ty1, _Types2...>
		: _Invoker1<_Callable, _Ty1>
	{
	};

	template<class _Callable,
		class... _Types> inline
		auto invoke(_Callable&& _Obj, _Types&&... _Args)
		-> decltype(_Invoker<_Callable, _Types...>::_Call(
			::std::forward<_Callable>(_Obj), ::std::forward<_Types>(_Args)...))
	{
		return (_Invoker<_Callable, _Types...>::_Call(
			::std::forward<_Callable>(_Obj), ::std::forward<_Types>(_Args)...));
	}

	template<class _Rx,
		bool = is_void<_Rx>::value>
		struct _Forced
	{
	};

	struct _Unforced
	{
	};

	template<class _Cv_void,
		class... _Valtys> inline
		void _Invoke_ret(_Forced<_Cv_void, true>, _Valtys&&... _Vals)
	{
		::std::invoke(::std::forward<_Valtys>(_Vals)...);
	}

	template<class _Rx,
		class... _Valtys> inline
		_Rx _Invoke_ret(_Forced<_Rx, false>, _Valtys&&... _Vals)
	{
		return (::std::invoke(::std::forward<_Valtys>(_Vals)...));
	}

	template<class... _Valtys> inline
		auto _Invoke_ret(_Forced<_Unforced, false>, _Valtys&&... _Vals)
		-> decltype(::std::invoke(::std::forward<_Valtys>(_Vals)...))
	{
		return (::std::invoke(::std::forward<_Valtys>(_Vals)...));
	}


	struct _Unique_tag_result_of
	{
	};

	template<class _Void,
		class... _Types>
		struct _Result_of
	{
	};

	template<class... _Types>
	struct _Result_of<
		void_t<
		_Unique_tag_result_of,
		decltype(::std::invoke(::std::declval<_Types>()...))>,
		_Types...>
	{
		typedef decltype(::std::invoke(::std::declval<_Types>()...)) type;
	};

	template<class _Fty>
	struct result_of
	{
		static_assert(_Always_false<_Fty>::value,
			"result_of<CallableType> is invalid; use "
			"result_of<CallableType(zero or more argument types)> instead.");
	};









	template<class _Fty, class... _Args> struct result_of<_Fty __cdecl (_Args...)> : _Result_of<void, _Fty, _Args...> { };    template<class _Fty, class... _Args> struct result_of<_Fty __vectorcall (_Args...)> : _Result_of<void, _Fty, _Args...> { };



	template<class _Ty,
		class = void>
		struct _Weak_result_type
	{
	};

	template<class _Ty>
	struct _Weak_result_type<_Ty, void_t<
		typename _Ty::result_type> >
	{
		typedef typename _Ty::result_type result_type;
	};

	template<class _Ty,
		class = void>
		struct _Weak_argument_type
		: _Weak_result_type<_Ty>
	{
	};

	template<class _Ty>
	struct _Weak_argument_type<_Ty, void_t<
		typename _Ty::argument_type> >
		: _Weak_result_type<_Ty>
	{
		typedef typename _Ty::argument_type argument_type;
	};

	template<class _Ty,
		class = void>
		struct _Weak_binary_args
		: _Weak_argument_type<_Ty>
	{
	};

	template<class _Ty>
	struct _Weak_binary_args<_Ty, void_t<
		typename _Ty::first_argument_type,
		typename _Ty::second_argument_type> >
		: _Weak_argument_type<_Ty>
	{
		typedef typename _Ty::first_argument_type first_argument_type;
		typedef typename _Ty::second_argument_type second_argument_type;
	};

	template<class _Ty>
	struct _Weak_types
	{
		typedef _Is_function<typename remove_pointer<_Ty>::type> _Is_f_or_pf;
		typedef _Is_memfunptr<typename remove_cv<_Ty>::type> _Is_pmf;
		typedef typename _If<_Is_f_or_pf::_Bool_type::value, _Is_f_or_pf,
			typename _If<_Is_pmf::_Bool_type::value, _Is_pmf,
			_Weak_binary_args<_Ty> >::type>::type type;
	};


	template<class _Ty>
	class reference_wrapper
		: public _Weak_types<_Ty>::type
	{
	public:
		static_assert(is_object<_Ty>::value || is_function<_Ty>::value,
			"reference_wrapper<T> requires T to be an object type "
			"or a function type.");

		typedef _Ty type;

		reference_wrapper(_Ty& _Val) noexcept
			: _Ptr(::std::addressof(_Val))
		{
		}

		operator _Ty&() const noexcept
		{
			return (*_Ptr);
		}

		_Ty& get() const noexcept
		{
			return (*_Ptr);
		}

		template<class... _Types>
		auto operator()(_Types&&... _Args) const
			-> decltype(::std::invoke(get(), ::std::forward<_Types>(_Args)...))
		{
			return (::std::invoke(get(), ::std::forward<_Types>(_Args)...));
		}

		reference_wrapper(_Ty&&) = delete;

	private:
		_Ty *_Ptr;
	};


	template<class _Ty> inline
		reference_wrapper<_Ty>
		ref(_Ty& _Val) noexcept
	{
		return (reference_wrapper<_Ty>(_Val));
	}

	template<class _Ty>
	void ref(const _Ty&&) = delete;

	template<class _Ty> inline
		reference_wrapper<_Ty>
		ref(reference_wrapper<_Ty> _Val) noexcept
	{
		return (::std::ref(_Val.get()));
	}

	template<class _Ty> inline
		reference_wrapper<const _Ty>
		cref(const _Ty& _Val) noexcept
	{
		return (reference_wrapper<const _Ty>(_Val));
	}

	template<class _Ty>
	void cref(const _Ty&&) = delete;

	template<class _Ty> inline
		reference_wrapper<const _Ty>
		cref(reference_wrapper<_Ty> _Val) noexcept
	{
		return (::std::cref(_Val.get()));
	}


	template<class _Ty>
	struct _Unrefwrap_helper
	{
		typedef _Ty type;
		static constexpr bool _Is_refwrap = false;
	};

	template<class _Ty>
	struct _Unrefwrap_helper<reference_wrapper<_Ty> >
	{
		typedef _Ty& type;
		static constexpr bool _Is_refwrap = true;
	};

	template<class _Ty>
	struct _Unrefwrap
	{
		typedef typename decay<_Ty>::type _Ty1;
		typedef typename _Unrefwrap_helper<_Ty1>::type type;
		static constexpr bool _Is_refwrap = _Unrefwrap_helper<_Ty1>::_Is_refwrap;
	};


	namespace tr1 {
		using ::std::cref;
		using ::std::ref;
		using ::std::reference_wrapper;
		using ::std::result_of;
	}



	template<class _Ty>
	struct _Is_swappable;


	template<class _Ty>
	struct _Is_nothrow_swappable;







	template<class _Ty,
		class = void> inline

		void swap(_Ty&, _Ty&)
		noexcept(is_nothrow_move_constructible<_Ty>::value && is_nothrow_move_assignable<_Ty>::value);

	template<class _Ty,
		size_t _Size,
		class = typename enable_if<_Is_swappable<_Ty>::value>::type> inline
		void swap(_Ty(&)[_Size], _Ty(&)[_Size])
		noexcept(_Is_nothrow_swappable<_Ty>::value);


	template<class _Ty1,
		class _Ty2,
		class = void>
		struct _Swappable_with_helper
		: false_type
	{
	};

	struct _Swappable_with_helper_unique_type {};
	template<class _Ty1,
		class _Ty2>
		struct _Swappable_with_helper<_Ty1, _Ty2, void_t<
		_Swappable_with_helper_unique_type,
		decltype(swap(::std::declval<_Ty1>(), ::std::declval<_Ty2>()))>>
		: true_type
	{
	};


	template<class _Ty1,
		class _Ty2>
		struct _Is_swappable_with
		: conjunction<
		_Swappable_with_helper<_Ty1, _Ty2>,
		_Swappable_with_helper<_Ty2, _Ty1>>::type
	{

	};


	template<class _Ty>
	struct _Is_swappable
		: _Is_swappable_with<
		typename add_lvalue_reference<_Ty>::type,
		typename add_lvalue_reference<_Ty>::type>::type
	{
	};


	template<class _Ty1,
		class _Ty2>
		struct _Swap_cannot_throw
	{



		static constexpr bool value =
			noexcept(swap(::std::declval<_Ty1>(), ::std::declval<_Ty2>()))
			&& noexcept(swap(::std::declval<_Ty2>(), ::std::declval<_Ty1>()));



		using type = bool_constant<value>;
	};


	template<class _Ty1,
		class _Ty2>
		struct _Is_nothrow_swappable_with
		: conjunction<
		_Is_swappable_with<_Ty1, _Ty2>,
		_Swap_cannot_throw<_Ty1, _Ty2>>::type
	{

	};


	template<class _Ty>
	struct _Is_nothrow_swappable
		: _Is_nothrow_swappable_with<
		typename add_lvalue_reference<_Ty>::type,
		typename add_lvalue_reference<_Ty>::type>::type
	{
	};




































	template<class _Ty>
	using remove_const_t = typename remove_const<_Ty>::type;

	template<class _Ty>
	using remove_volatile_t = typename remove_volatile<_Ty>::type;

	template<class _Ty>
	using remove_cv_t = typename remove_cv<_Ty>::type;

	template<class _Ty>
	using add_const_t = typename add_const<_Ty>::type;

	template<class _Ty>
	using add_volatile_t = typename add_volatile<_Ty>::type;

	template<class _Ty>
	using add_cv_t = typename add_cv<_Ty>::type;

	template<class _Ty>
	using remove_reference_t = typename remove_reference<_Ty>::type;

	template<class _Ty>
	using add_lvalue_reference_t = typename add_lvalue_reference<_Ty>::type;

	template<class _Ty>
	using add_rvalue_reference_t = typename add_rvalue_reference<_Ty>::type;

	template<class _Ty>
	using make_signed_t = typename make_signed<_Ty>::type;

	template<class _Ty>
	using make_unsigned_t = typename make_unsigned<_Ty>::type;

	template<class _Ty>
	using remove_extent_t = typename remove_extent<_Ty>::type;

	template<class _Ty>
	using remove_all_extents_t = typename remove_all_extents<_Ty>::type;

	template<class _Ty>
	using remove_pointer_t = typename remove_pointer<_Ty>::type;

	template<class _Ty>
	using add_pointer_t = typename add_pointer<_Ty>::type;

	template<size_t _Len,
		size_t _Align = alignment_of<max_align_t>::value>
		using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

	template<size_t _Len,
		class... _Types>
		using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

	template<class _Ty>
	using decay_t = typename decay<_Ty>::type;

	template<bool _Test,
		class _Ty = void>
		using enable_if_t = typename enable_if<_Test, _Ty>::type;

	template<bool _Test,
		class _Ty1,
		class _Ty2>
		using conditional_t = typename conditional<_Test, _Ty1, _Ty2>::type;

	template<class... _Ty>
	using common_type_t = typename common_type<_Ty...>::type;

	template<class _Ty>
	using underlying_type_t = typename underlying_type<_Ty>::type;

	template<class _Ty>
	using result_of_t = typename result_of<_Ty>::type;



	template<class _Ty>
	constexpr bool is_void_v = is_void<_Ty>::value;
	template<class _Ty>
	constexpr bool is_null_pointer_v = is_null_pointer<_Ty>::value;
	template<class _Ty>
	constexpr bool is_array_v = is_array<_Ty>::value;
	template<class _Ty>
	constexpr bool is_pointer_v = is_pointer<_Ty>::value;
	template<class _Ty>
	constexpr bool is_lvalue_reference_v = is_lvalue_reference<_Ty>::value;
	template<class _Ty>
	constexpr bool is_rvalue_reference_v = is_rvalue_reference<_Ty>::value;
	template<class _Ty>
	constexpr bool is_member_object_pointer_v = is_member_object_pointer<_Ty>::value;
	template<class _Ty>
	constexpr bool is_member_function_pointer_v = is_member_function_pointer<_Ty>::value;
	template<class _Ty>
	constexpr bool is_enum_v = is_enum<_Ty>::value;
	template<class _Ty>
	constexpr bool is_union_v = is_union<_Ty>::value;
	template<class _Ty>
	constexpr bool is_class_v = is_class<_Ty>::value;
	template<class _Ty>
	constexpr bool is_reference_v = is_reference<_Ty>::value;
	template<class _Ty>
	constexpr bool is_fundamental_v = is_fundamental<_Ty>::value;
	template<class _Ty>
	constexpr bool is_object_v = is_object<_Ty>::value;
	template<class _Ty>
	constexpr bool is_scalar_v = is_scalar<_Ty>::value;
	template<class _Ty>
	constexpr bool is_compound_v = is_compound<_Ty>::value;
	template<class _Ty>
	constexpr bool is_member_pointer_v = is_member_pointer<_Ty>::value;
	template<class _Ty>
	constexpr bool is_const_v = is_const<_Ty>::value;
	template<class _Ty>
	constexpr bool is_volatile_v = is_volatile<_Ty>::value;
	template<class _Ty>
	constexpr bool is_trivial_v = is_trivial<_Ty>::value;
	template<class _Ty>
	constexpr bool is_trivially_copyable_v = is_trivially_copyable<_Ty>::value;
	template<class _Ty>
	constexpr bool is_standard_layout_v = is_standard_layout<_Ty>::value;
	template<class _Ty>
	constexpr bool is_pod_v = is_pod<_Ty>::value;
	template<class _Ty>
	constexpr bool is_literal_type_v = is_literal_type<_Ty>::value;
	template<class _Ty>
	constexpr bool is_empty_v = is_empty<_Ty>::value;
	template<class _Ty>
	constexpr bool is_polymorphic_v = is_polymorphic<_Ty>::value;
	template<class _Ty>
	constexpr bool is_abstract_v = is_abstract<_Ty>::value;
	template<class _Ty>
	constexpr bool is_final_v = is_final<_Ty>::value;
	template<class _Ty>
	constexpr bool is_signed_v = is_signed<_Ty>::value;
	template<class _Ty>
	constexpr bool is_unsigned_v = is_unsigned<_Ty>::value;
	template<class _Ty,
		class... _Args>
		constexpr bool is_constructible_v = is_constructible<_Ty, _Args...>::value;
	template<class _Ty>
	constexpr bool is_default_constructible_v = is_default_constructible<_Ty>::value;
	template<class _Ty>
	constexpr bool is_copy_constructible_v = is_copy_constructible<_Ty>::value;
	template<class _Ty>
	constexpr bool is_move_constructible_v = is_move_constructible<_Ty>::value;
	template<class _Ty,
		class _Uty>
		constexpr bool is_assignable_v = is_assignable<_Ty, _Uty>::value;
	template<class _Ty>
	constexpr bool is_copy_assignable_v = is_copy_assignable<_Ty>::value;
	template<class _Ty>
	constexpr bool is_move_assignable_v = is_move_assignable<_Ty>::value;







	template<class _Ty>
	constexpr bool is_destructible_v = is_destructible<_Ty>::value;
	template<class _Ty,
		class... _Args>
		constexpr bool is_trivially_constructible_v = is_trivially_constructible<_Ty, _Args...>::value;
	template<class _Ty>
	constexpr bool is_trivially_default_constructible_v = is_trivially_default_constructible<_Ty>::value;
	template<class _Ty>
	constexpr bool is_trivially_copy_constructible_v = is_trivially_copy_constructible<_Ty>::value;
	template<class _Ty>
	constexpr bool is_trivially_move_constructible_v = is_trivially_move_constructible<_Ty>::value;
	template<class _Ty,
		class _Uty>
		constexpr bool is_trivially_assignable_v = is_trivially_assignable<_Ty, _Uty>::value;
	template<class _Ty>
	constexpr bool is_trivially_copy_assignable_v = is_trivially_copy_assignable<_Ty>::value;
	template<class _Ty>
	constexpr bool is_trivially_move_assignable_v = is_trivially_move_assignable<_Ty>::value;
	template<class _Ty>
	constexpr bool is_trivially_destructible_v = is_trivially_destructible<_Ty>::value;
	template<class _Ty,
		class... _Args>
		constexpr bool is_nothrow_constructible_v = is_nothrow_constructible<_Ty, _Args...>::value;
	template<class _Ty>
	constexpr bool is_nothrow_default_constructible_v = is_nothrow_default_constructible<_Ty>::value;
	template<class _Ty>
	constexpr bool is_nothrow_copy_constructible_v = is_nothrow_copy_constructible<_Ty>::value;
	template<class _Ty>
	constexpr bool is_nothrow_move_constructible_v = is_nothrow_move_constructible<_Ty>::value;
	template<class _Ty,
		class _Uty>
		constexpr bool is_nothrow_assignable_v = is_nothrow_assignable<_Ty, _Uty>::value;
	template<class _Ty>
	constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<_Ty>::value;
	template<class _Ty>
	constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<_Ty>::value;







	template<class _Ty>
	constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<_Ty>::value;
	template<class _Ty>
	constexpr bool has_virtual_destructor_v = has_virtual_destructor<_Ty>::value;
	template<class _Ty>
	constexpr size_t alignment_of_v = alignment_of<_Ty>::value;
	template<class _Ty>
	constexpr size_t rank_v = rank<_Ty>::value;
	template<class _Ty,
		unsigned int _Ix = 0>
		constexpr size_t extent_v = extent<_Ty, _Ix>::value;
	template<class _Base,
		class _Derived>
		constexpr bool is_base_of_v = is_base_of<_Base, _Derived>::value;
	template<class _From,
		class _To>
		constexpr bool is_convertible_v = is_convertible<_From, _To>::value;
	template<class... _Traits>
	constexpr bool conjunction_v = conjunction<_Traits...>::value;
	template<class... _Traits>
	constexpr bool disjunction_v = disjunction<_Traits...>::value;
	template<class _Trait>
	constexpr bool negation_v = negation<_Trait>::value;


}


#pragma warning(pop)
#pragma pack(pop)

















#pragma once





#pragma once





#pragma pack(push,8)
#pragma warning(push,3)



namespace std {

	typedef enum memory_order {
		memory_order_relaxed,
		memory_order_consume,
		memory_order_acquire,
		memory_order_release,
		memory_order_acq_rel,
		memory_order_seq_cst
	} memory_order;

	typedef _Uint32t _Uint4_t;
	typedef _Uint4_t _Atomic_integral_t;





















	typedef long _Atomic_flag_t;




	typedef _Atomic_integral_t _Atomic_counter_t;

	inline _Atomic_integral_t
		_Get_atomic_count(const _Atomic_counter_t& _Counter)
	{
		return (_Counter);
	}

	inline void _Init_atomic_counter(_Atomic_counter_t& _Counter,
		_Atomic_integral_t _Value)
	{
		_Counter = _Value;
	}










	extern "C" {
		__declspec(dllimport) void __cdecl _Lock_shared_ptr_spin_lock();
		__declspec(dllimport) void __cdecl _Unlock_shared_ptr_spin_lock();
	}
}

#pragma warning(pop)
#pragma pack(pop)


















#pragma once














#pragma once










#pragma once










#pragma once




__pragma(pack(push, 8)) extern "C" {



	__declspec(dllimport) extern int* __cdecl _errno(void);


	__declspec(dllimport) errno_t __cdecl _set_errno(int _Value);
	__declspec(dllimport) errno_t __cdecl _get_errno(int* _Value);



	__declspec(dllimport) unsigned long* __cdecl __doserrno(void);


	__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value);
	__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value);



































































































} __pragma(pack(pop))









#pragma once





































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {




	__declspec(dllimport) void const* __cdecl memchr(
		void const* _Buf,
		int         _Val,
		size_t      _MaxCount
	);


	int __cdecl memcmp(
		void const* _Buf1,
		void const* _Buf2,
		size_t      _Size
	);




	void* __cdecl memcpy(
		void* _Dst,
		void const* _Src,
		size_t      _Size
	);


	__declspec(dllimport) void* __cdecl memmove(
		void*       _Dst,
		void const* _Src,
		size_t      _Size
	);



	void* __cdecl memset(
		void*  _Dst,
		int    _Val,
		size_t _Size
	);


	__declspec(dllimport) char const* __cdecl strchr(
		char const* _Str,
		int         _Val
	);


	__declspec(dllimport) char const* __cdecl strrchr(
		char const* _Str,
		int         _Ch
	);


	__declspec(dllimport) char const* __cdecl strstr(
		char const* _Str,
		char const* _SubStr
	);



	__declspec(dllimport) wchar_t const* __cdecl wcschr(
		wchar_t const* _Str,
		wchar_t        _Ch
	);


	__declspec(dllimport) wchar_t const* __cdecl wcsrchr(
		wchar_t const* _Str,
		wchar_t        _Ch
	);



	__declspec(dllimport) wchar_t const* __cdecl wcsstr(
		wchar_t const* _Str,
		wchar_t const* _SubStr
	);



} __pragma(pack(pop))




__pragma(pack(push, 8)) extern "C" {




















	static __inline errno_t __cdecl memcpy_s(
		void*       const _Destination,
		rsize_t     const _DestinationSize,
		void const* const _Source,
		rsize_t     const _SourceSize
	)
	{
		if (_SourceSize == 0)
		{
			return 0;
		}

		{ int _Expr_val = !!(_Destination != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
		if (_Source == 0 || _DestinationSize < _SourceSize)
		{
			memset(_Destination, 0, _DestinationSize);

			{ int _Expr_val = !!(_Source != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
			{ int _Expr_val = !!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };


			return 22;
		}

		memcpy(_Destination, _Source, _SourceSize);
		return 0;
	}


	static __inline errno_t __cdecl memmove_s(
		void*       const _Destination,
		rsize_t     const _DestinationSize,
		void const* const _Source,
		rsize_t     const _SourceSize
	)
	{
		if (_SourceSize == 0)
		{
			return 0;
		}

		{ int _Expr_val = !!(_Destination != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
		{ int _Expr_val = !!(_Source != 0); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
		{ int _Expr_val = !!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };

		memmove(_Destination, _Source, _SourceSize);
		return 0;
	}





} __pragma(pack(pop))





__pragma(pack(push, 8)) extern "C" {




	__declspec(dllimport) int __cdecl _memicmp(
		void const* _Buf1,
		void const* _Buf2,
		size_t      _Size
	);


	__declspec(dllimport) int __cdecl _memicmp_l(
		void const* _Buf1,
		void const* _Buf2,
		size_t      _Size,
		_locale_t   _Locale
	);








































	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_memccpy" ". See online help for details."))
		__declspec(dllimport) void* __cdecl memccpy(
			void*       _Dst,
			void const* _Src,
			int         _Val,
			size_t      _Size
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_memicmp" ". See online help for details."))
		__declspec(dllimport) int __cdecl memicmp(
			void const* _Buf1,
			void const* _Buf2,
			size_t      _Size
		);





	extern "C++"
		inline void* __cdecl memchr(
			void*  _Pv,
			int    _C,
			size_t _N
		)
	{
		void const* const _Pvc = _Pv;
		return const_cast<void*>(memchr(_Pvc, _C, _N));
	}




} __pragma(pack(pop))












#pragma once






__pragma(pack(push, 8)) extern "C" {











	__declspec(dllimport) errno_t __cdecl wcscat_s(
		wchar_t* _Destination,
		rsize_t _SizeInWords,
		wchar_t const* _Source
	);


	__declspec(dllimport) errno_t __cdecl wcscpy_s(
		wchar_t* _Destination,
		rsize_t _SizeInWords,
		wchar_t const* _Source
	);


	__declspec(dllimport) errno_t __cdecl wcsncat_s(
		wchar_t*       _Destination,
		rsize_t        _SizeInWords,
		wchar_t const* _Source,
		rsize_t        _MaxCount
	);


	__declspec(dllimport) errno_t __cdecl wcsncpy_s(
		wchar_t*       _Destination,
		rsize_t        _SizeInWords,
		wchar_t const* _Source,
		rsize_t        _MaxCount
	);


	__declspec(dllimport) wchar_t* __cdecl wcstok_s(
		wchar_t*       _String,
		wchar_t const* _Delimiter,
		wchar_t**      _Context
	);
















	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wcsdup(
		wchar_t const* _String
	);







	extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscat_s(wchar_t(&_Destination)[_Size], wchar_t const* _Source) throw() { return wcscat_s(_Destination, _Size, _Source); } }



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcscat(wchar_t *_Destination, wchar_t const* _Source);




	__declspec(dllimport) int __cdecl wcscmp(
		wchar_t const* _String1,
		wchar_t const* _String2
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscpy_s(wchar_t(&_Destination)[_Size], wchar_t const* _Source) throw() { return wcscpy_s(_Destination, _Size, _Source); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcscpy(wchar_t *_Destination, wchar_t const* _Source);


	__declspec(dllimport) size_t __cdecl wcscspn(
		wchar_t const* _String,
		wchar_t const* _Control
	);


	__declspec(dllimport) size_t __cdecl wcslen(
		wchar_t const* _String
	);




	__declspec(dllimport) size_t __cdecl wcsnlen(
		wchar_t const* _Source,
		size_t         _MaxCount
	);






	static __inline size_t __cdecl wcsnlen_s(
		wchar_t const* _Source,
		size_t         _MaxCount
	)
	{
		return (_Source == 0) ? 0 : wcsnlen(_Source, _MaxCount);
	}



	extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncat_s(wchar_t(&_Destination)[_Size], wchar_t const* _Source, size_t _Count) throw() { return wcsncat_s(_Destination, _Size, _Source, _Count); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcsncat(wchar_t *_Destination, wchar_t const* _Source, size_t _Count);


	__declspec(dllimport) int __cdecl wcsncmp(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncpy_s(wchar_t(&_Destination)[_Size], wchar_t const* _Source, size_t _Count) throw() { return wcsncpy_s(_Destination, _Size, _Source, _Count); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl wcsncpy(wchar_t *_Destination, wchar_t const* _Source, size_t _Count);


	__declspec(dllimport) wchar_t const* __cdecl wcspbrk(
		wchar_t const* _String,
		wchar_t const* _Control
	);


	__declspec(dllimport) size_t __cdecl wcsspn(
		wchar_t const* _String,
		wchar_t const* _Control
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl wcstok(
			wchar_t*       _String,
			wchar_t const* _Delimiter,
			wchar_t**      _Context
		);












#pragma warning(push)
#pragma warning(disable: 4141 4996) 

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		static __inline wchar_t* __cdecl _wcstok(
			wchar_t*       const _String,
			wchar_t const* const _Delimiter
		)
	{
		return wcstok(_String, _Delimiter, 0);
	}






	extern "C++"   __declspec(deprecated("wcstok has been changed to conform with the ISO C standard, " "adding an extra context parameter. To use the legacy Microsoft " "wcstok, define _CRT_NON_CONFORMING_WCSTOK."))
		inline wchar_t* __cdecl wcstok(
			wchar_t*       _String,
			wchar_t const* _Delimiter
		) throw()
	{
		return wcstok(_String, _Delimiter, 0);
	}


#pragma warning(pop)






	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl _wcserror(
			int _ErrorNumber
		);


	__declspec(dllimport) errno_t __cdecl _wcserror_s(
		wchar_t* _Buffer,
		size_t   _SizeInWords,
		int      _ErrorNumber
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcserror_s(wchar_t(&_Buffer)[_Size], int _Error) throw() { return _wcserror_s(_Buffer, _Size, _Error); } }



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "__wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl __wcserror(
			wchar_t const* _String
		);

	__declspec(dllimport) errno_t __cdecl __wcserror_s(
		wchar_t*       _Buffer,
		size_t         _SizeInWords,
		wchar_t const* _ErrorMessage
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl __wcserror_s(wchar_t(&_Buffer)[_Size], wchar_t const* _ErrorMessage) throw() { return __wcserror_s(_Buffer, _Size, _ErrorMessage); } }

	__declspec(dllimport) int __cdecl _wcsicmp(
		wchar_t const* _String1,
		wchar_t const* _String2
	);

	__declspec(dllimport) int __cdecl _wcsicmp_l(
		wchar_t const* _String1,
		wchar_t const* _String2,
		_locale_t      _Locale
	);

	__declspec(dllimport) int __cdecl _wcsnicmp(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount
	);

	__declspec(dllimport) int __cdecl _wcsnicmp_l(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount,
		_locale_t      _Locale
	);

	__declspec(dllimport) errno_t __cdecl _wcsnset_s(
		wchar_t* _Destination,
		size_t   _SizeInWords,
		wchar_t  _Value,
		size_t   _MaxCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsnset_s(wchar_t(&_Destination)[_Size], wchar_t _Value, size_t _MaxCount) throw() { return _wcsnset_s(_Destination, _Size, _Value, _MaxCount); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsnset(wchar_t *_String, wchar_t _Value, size_t _MaxCount);

	__declspec(dllimport) wchar_t* __cdecl _wcsrev(
		wchar_t* _String
	);

	__declspec(dllimport) errno_t __cdecl _wcsset_s(
		wchar_t* _Destination,
		size_t   _SizeInWords,
		wchar_t  _Value
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsset_s(wchar_t(&_String)[_Size], wchar_t _Value) throw() { return _wcsset_s(_String, _Size, _Value); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsset(wchar_t *_String, wchar_t _Value);

	__declspec(dllimport) errno_t __cdecl _wcslwr_s(
		wchar_t* _String,
		size_t   _SizeInWords
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s(wchar_t(&_String)[_Size]) throw() { return _wcslwr_s(_String, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcslwr(wchar_t *_String);


	__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(
		wchar_t*  _String,
		size_t    _SizeInWords,
		_locale_t _Locale
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s_l(wchar_t(&_String)[_Size], _locale_t _Locale) throw() { return _wcslwr_s_l(_String, _Size, _Locale); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcslwr_l(wchar_t *_String, _locale_t _Locale);


	__declspec(dllimport) errno_t __cdecl _wcsupr_s(
		wchar_t* _String,
		size_t   _Size
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s(wchar_t(&_String)[_Size]) throw() { return _wcsupr_s(_String, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsupr(wchar_t *_String);


	__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(
		wchar_t*  _String,
		size_t    _Size,
		_locale_t _Locale
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s_l(wchar_t(&_String)[_Size], _locale_t _Locale) throw() { return _wcsupr_s_l(_String, _Size, _Locale); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wcsupr_l(wchar_t *_String, _locale_t _Locale);



	__declspec(dllimport) size_t __cdecl wcsxfrm(
		wchar_t*       _Destination,
		wchar_t const* _Source,
		size_t         _MaxCount
	);



	__declspec(dllimport) size_t __cdecl _wcsxfrm_l(
		wchar_t*       _Destination,
		wchar_t const* _Source,
		size_t         _MaxCount,
		_locale_t      _Locale
	);


	__declspec(dllimport) int __cdecl wcscoll(
		wchar_t const* _String1,
		wchar_t const* _String2
	);


	__declspec(dllimport) int __cdecl _wcscoll_l(
		wchar_t const* _String1,
		wchar_t const* _String2,
		_locale_t      _Locale
	);


	__declspec(dllimport) int __cdecl _wcsicoll(
		wchar_t const* _String1,
		wchar_t const* _String2
	);


	__declspec(dllimport) int __cdecl _wcsicoll_l(
		wchar_t const* _String1,
		wchar_t const* _String2,
		_locale_t      _Locale
	);


	__declspec(dllimport) int __cdecl _wcsncoll(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount
	);


	__declspec(dllimport) int __cdecl _wcsncoll_l(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount,
		_locale_t      _Locale
	);


	__declspec(dllimport) int __cdecl _wcsnicoll(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount
	);


	__declspec(dllimport) int __cdecl _wcsnicoll_l(
		wchar_t const* _String1,
		wchar_t const* _String2,
		size_t         _MaxCount,
		_locale_t      _Locale
	);









	extern "C++" {



		inline wchar_t* __cdecl wcschr(wchar_t* _String, wchar_t _C)
		{
			return const_cast<wchar_t*>(wcschr(static_cast<wchar_t const*>(_String), _C));
		}


		inline wchar_t* __cdecl wcspbrk(wchar_t* _String, wchar_t const* _Control)
		{
			return const_cast<wchar_t*>(wcspbrk(static_cast<wchar_t const*>(_String), _Control));
		}


		inline wchar_t* __cdecl wcsrchr(wchar_t* _String, wchar_t _C)
		{
			return const_cast<wchar_t*>(wcsrchr(static_cast<wchar_t const*>(_String), _C));
		}



		inline wchar_t* __cdecl wcsstr(wchar_t* _String, wchar_t const*_SubStr)
		{
			return const_cast<wchar_t*>(wcsstr(static_cast<wchar_t const*>(_String), _SubStr));
		}

	}















	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsdup" ". See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl wcsdup(
			wchar_t const* _String
		);








	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsicmp" ". See online help for details."))
		__declspec(dllimport) int __cdecl wcsicmp(
			wchar_t const* _String1,
			wchar_t const* _String2
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsnicmp" ". See online help for details."))
		__declspec(dllimport) int __cdecl wcsnicmp(
			wchar_t const* _String1,
			wchar_t const* _String2,
			size_t         _MaxCount
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsnset" ". See online help for details."))

		__declspec(dllimport) wchar_t* __cdecl wcsnset(
			wchar_t* _String,
			wchar_t  _Value,
			size_t   _MaxCount
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsrev" ". See online help for details."))

		__declspec(dllimport) wchar_t* __cdecl wcsrev(
			wchar_t* _String
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsset" ". See online help for details."))

		__declspec(dllimport) wchar_t* __cdecl wcsset(
			wchar_t* _String,
			wchar_t  _Value
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcslwr" ". See online help for details."))

		__declspec(dllimport) wchar_t* __cdecl wcslwr(
			wchar_t* _String
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsupr" ". See online help for details."))

		__declspec(dllimport) wchar_t* __cdecl wcsupr(
			wchar_t* _String
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsicoll" ". See online help for details."))
		__declspec(dllimport) int __cdecl wcsicoll(
			wchar_t const* _String1,
			wchar_t const* _String2
		);





} __pragma(pack(pop))







__pragma(pack(push, 8)) extern "C" {








	__declspec(dllimport) errno_t __cdecl strcpy_s(
		char*       _Destination,
		rsize_t     _SizeInBytes,
		char const* _Source
	);


	__declspec(dllimport) errno_t __cdecl strcat_s(
		char*       _Destination,
		rsize_t     _SizeInBytes,
		char const* _Source
	);


	__declspec(dllimport) errno_t __cdecl strerror_s(
		char*  _Buffer,
		size_t _SizeInBytes,
		int    _ErrorNumber);


	__declspec(dllimport) errno_t __cdecl strncat_s(
		char*       _Destination,
		rsize_t     _SizeInBytes,
		char const* _Source,
		rsize_t     _MaxCount
	);


	__declspec(dllimport) errno_t __cdecl strncpy_s(
		char*       _Destination,
		rsize_t     _SizeInBytes,
		char const* _Source,
		rsize_t     _MaxCount
	);


	__declspec(dllimport) char*  __cdecl strtok_s(
		char*       _String,
		char const* _Delimiter,
		char**      _Context
	);



	__declspec(dllimport) void* __cdecl _memccpy(
		void*       _Dst,
		void const* _Src,
		int         _Val,
		size_t      _MaxCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl strcat_s(char(&_Destination)[_Size], char const* _Source) throw() { return strcat_s(_Destination, _Size, _Source); } }



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  char* __cdecl strcat(char *_Destination, char const* _Source);




	int __cdecl strcmp(
		char const* _Str1,
		char const* _Str2
	);


	__declspec(dllimport) int __cdecl _strcmpi(
		char const* _String1,
		char const* _String2
	);


	__declspec(dllimport) int __cdecl strcoll(
		char const* _String1,
		char const* _String2
	);


	__declspec(dllimport) int __cdecl _strcoll_l(
		char const* _String1,
		char const* _String2,
		_locale_t   _Locale
	);

	char* __cdecl strcpy(
		char*       _Dest,
		char const* _Source
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl strcpy_s(char(&_Destination)[_Size], char const* _Source) throw() { return strcpy_s(_Destination, _Size, _Source); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  char* __cdecl strcpy(char *_Destination, char const* _Source);


	__declspec(dllimport) size_t __cdecl strcspn(
		char const* _Str,
		char const* _Control
	);







	__declspec(dllimport) __declspec(allocator) char* __cdecl _strdup(
		char const* _Source
	);







	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char*  __cdecl _strerror(
			char const* _ErrorMessage
		);


	__declspec(dllimport) errno_t __cdecl _strerror_s(
		char*       _Buffer,
		size_t      _SizeInBytes,
		char const* _ErrorMessage
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strerror_s(char(&_Buffer)[_Size], char const* _ErrorMessage) throw() { return _strerror_s(_Buffer, _Size, _ErrorMessage); } }


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl strerror(
			int _ErrorMessage
		);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl strerror_s(char(&_Buffer)[_Size], int _ErrorMessage) throw() { return strerror_s(_Buffer, _Size, _ErrorMessage); } }


	__declspec(dllimport) int __cdecl _stricmp(
		char const* _String1,
		char const* _String2
	);


	__declspec(dllimport) int __cdecl _stricoll(
		char const* _String1,
		char const* _String2
	);


	__declspec(dllimport) int __cdecl _stricoll_l(
		char const* _String1,
		char const* _String2,
		_locale_t   _Locale
	);


	__declspec(dllimport) int __cdecl _stricmp_l(
		char const* _String1,
		char const* _String2,
		_locale_t   _Locale
	);


	size_t __cdecl strlen(
		char const* _Str
	);


	__declspec(dllimport) errno_t __cdecl _strlwr_s(
		char*  _String,
		size_t _Size
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s(char(&_String)[_Size]) throw() { return _strlwr_s(_String, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strlwr(char *_String);


	__declspec(dllimport) errno_t __cdecl _strlwr_s_l(
		char*     _String,
		size_t    _Size,
		_locale_t _Locale
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s_l(char(&_String)[_Size], _locale_t _Locale) throw() { return _strlwr_s_l(_String, _Size, _Locale); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strlwr_l(char *_String, _locale_t _Locale);

	__declspec(dllimport) char* __cdecl strncat(
		char*       _Dest,
		char const* _Source,
		size_t      _Count
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl strncat_s(char(&_Destination)[_Size], char const* _Source, size_t _Count) throw() { return strncat_s(_Destination, _Size, _Source, _Count); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl strncat(char *_Destination, char const* _Source, size_t _Count);


	__declspec(dllimport) int __cdecl strncmp(
		char const* _Str1,
		char const* _Str2,
		size_t      _MaxCount
	);


	__declspec(dllimport) int __cdecl _strnicmp(
		char const* _String1,
		char const* _String2,
		size_t      _MaxCount
	);


	__declspec(dllimport) int __cdecl _strnicmp_l(
		char const* _String1,
		char const* _String2,
		size_t      _MaxCount,
		_locale_t   _Locale
	);


	__declspec(dllimport) int __cdecl _strnicoll(
		char const* _String1,
		char const* _String2,
		size_t      _MaxCount
	);


	__declspec(dllimport) int __cdecl _strnicoll_l(
		char const* _String1,
		char const* _String2,
		size_t      _MaxCount,
		_locale_t   _Locale
	);


	__declspec(dllimport) int __cdecl _strncoll(
		char const* _String1,
		char const* _String2,
		size_t      _MaxCount
	);


	__declspec(dllimport) int __cdecl _strncoll_l(
		char const* _String1,
		char const* _String2,
		size_t      _MaxCount,
		_locale_t   _Locale
	);

	__declspec(dllimport) size_t __cdecl __strncnt(
		char const* _String,
		size_t      _Count
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl strncpy_s(char(&_Destination)[_Size], char const* _Source, size_t _Count) throw() { return strncpy_s(_Destination, _Size, _Source, _Count); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl strncpy(char *_Destination, char const* _Source, size_t _Count);




	__declspec(dllimport) size_t __cdecl strnlen(
		char const* _String,
		size_t      _MaxCount
	);






	static __inline size_t __cdecl strnlen_s(
		char const* _String,
		size_t      _MaxCount
	)
	{
		return _String == 0 ? 0 : strnlen(_String, _MaxCount);
	}



	__declspec(dllimport) char* __cdecl _strnset(
		char*  _Dest,
		int    _Val,
		size_t _Count
	);


	__declspec(dllimport) errno_t __cdecl _strnset_s(
		char*  _String,
		size_t _SizeInBytes,
		int    _Value,
		size_t _MaxCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strnset_s(char(&_Destination)[_Size], int _Value, size_t _Count) throw() { return _strnset_s(_Destination, _Size, _Value, _Count); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strnset(char *_Destination, int _Value, size_t _Count);


	__declspec(dllimport) char const* __cdecl strpbrk(
		char const* _Str,
		char const* _Control
	);

	__declspec(dllimport) char* __cdecl _strrev(
		char* _Str
	);


	__declspec(dllimport) errno_t __cdecl _strset_s(
		char*  _Destination,
		size_t _DestinationSize,
		int    _Value
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strset_s(char(&_Destination)[_Size], int _Value) throw() { return _strset_s(_Destination, _Size, _Value); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  char* __cdecl _strset(char *_Destination, int _Value);

	char* __cdecl _strset(
		char* _Dest,
		int   _Value
	);


	__declspec(dllimport) size_t __cdecl strspn(
		char const* _Str,
		char const* _Control
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "strtok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) char* __cdecl strtok(
			char*       _String,
			char const* _Delimiter
		);


	__declspec(dllimport) errno_t __cdecl _strupr_s(
		char*  _String,
		size_t _Size
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s(char(&_String)[_Size]) throw() { return _strupr_s(_String, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strupr(char *_String);


	__declspec(dllimport) errno_t __cdecl _strupr_s_l(
		char*     _String,
		size_t    _Size,
		_locale_t _Locale
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s_l(char(&_String)[_Size], _locale_t _Locale) throw() { return _strupr_s_l(_String, _Size, _Locale); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char* __cdecl _strupr_l(char *_String, _locale_t _Locale);



	__declspec(dllimport) size_t __cdecl strxfrm(
		char*       _Destination,
		char const* _Source,
		size_t      _MaxCount
	);



	__declspec(dllimport) size_t __cdecl _strxfrm_l(
		char*       _Destination,
		char const* _Source,
		size_t      _MaxCount,
		_locale_t   _Locale
	);




	extern "C++"
	{

		inline char* __cdecl strchr(char* const _String, int const _Ch)
		{
			return const_cast<char*>(strchr(static_cast<char const*>(_String), _Ch));
		}


		inline char* __cdecl strpbrk(char* const _String, char const* const _Control)
		{
			return const_cast<char*>(strpbrk(static_cast<char const*>(_String), _Control));
		}


		inline char* __cdecl strrchr(char* const _String, int const _Ch)
		{
			return const_cast<char*>(strrchr(static_cast<char const*>(_String), _Ch));
		}


		inline char* __cdecl strstr(char* const _String, char const* const _SubString)
		{
			return const_cast<char*>(strstr(static_cast<char const*>(_String), _SubString));
		}
	}











	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strdup" ". See online help for details."))
		__declspec(dllimport) char* __cdecl strdup(
			char const* _String
		);






	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strcmpi" ". See online help for details."))
		__declspec(dllimport) int __cdecl strcmpi(
			char const* _String1,
			char const* _String2
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_stricmp" ". See online help for details."))
		__declspec(dllimport) int __cdecl stricmp(
			char const* _String1,
			char const* _String2
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strlwr" ". See online help for details."))
		__declspec(dllimport) char* __cdecl strlwr(
			char* _String
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strnicmp" ". See online help for details."))
		__declspec(dllimport) int __cdecl strnicmp(
			char const* _String1,
			char const* _String2,
			size_t      _MaxCount
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strnset" ". See online help for details."))
		__declspec(dllimport) char* __cdecl strnset(
			char*  _String,
			int    _Value,
			size_t _MaxCount
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strrev" ". See online help for details."))
		__declspec(dllimport) char* __cdecl strrev(
			char* _String
		);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strset" ". See online help for details."))
		char* __cdecl strset(
			char* _String,
			int   _Value);

	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strupr" ". See online help for details."))
		__declspec(dllimport) char* __cdecl strupr(
			char* _String
		);





} __pragma(pack(pop))

















#pragma once













































































































































































































































































































































#pragma once












































































































































































































































































































































__pragma(pack(push, 8)) extern "C" {


























	typedef struct __declspec(align(16)) _SETJMP_FLOAT128
	{
		unsigned __int64 Part[2];
	} SETJMP_FLOAT128;


	typedef SETJMP_FLOAT128 _JBTYPE;

	typedef struct _JUMP_BUFFER
	{
		unsigned __int64 Frame;
		unsigned __int64 Rbx;
		unsigned __int64 Rsp;
		unsigned __int64 Rbp;
		unsigned __int64 Rsi;
		unsigned __int64 Rdi;
		unsigned __int64 R12;
		unsigned __int64 R13;
		unsigned __int64 R14;
		unsigned __int64 R15;
		unsigned __int64 Rip;
		unsigned long MxCsr;
		unsigned short FpCsr;
		unsigned short Spare;

		SETJMP_FLOAT128 Xmm6;
		SETJMP_FLOAT128 Xmm7;
		SETJMP_FLOAT128 Xmm8;
		SETJMP_FLOAT128 Xmm9;
		SETJMP_FLOAT128 Xmm10;
		SETJMP_FLOAT128 Xmm11;
		SETJMP_FLOAT128 Xmm12;
		SETJMP_FLOAT128 Xmm13;
		SETJMP_FLOAT128 Xmm14;
		SETJMP_FLOAT128 Xmm15;
	} _JUMP_BUFFER;





























































	typedef _JBTYPE jmp_buf[16];











	int __cdecl _setjmp(
		jmp_buf _Buf
	);


#pragma warning(push)
#pragma warning(disable:4987) 
	__declspec(noreturn) void __cdecl longjmp(
		jmp_buf _Buf,
		int     _Value
	) throw(...);
#pragma warning(pop)








} __pragma(pack(pop))



















#pragma once






























#pragma once































#pragma once































#pragma once
























#pragma once






























#pragma once





































#pragma once
















































#pragma once
































#pragma once













extern "C" {




	typedef union __declspec(intrin_type) __declspec(align(8)) __m64
	{
		unsigned __int64    m64_u64;
		float               m64_f32[2];
		__int8              m64_i8[8];
		__int16             m64_i16[4];
		__int32             m64_i32[2];
		__int64             m64_i64;
		unsigned __int8     m64_u8[8];
		unsigned __int16    m64_u16[4];
		unsigned __int32    m64_u32[2];
	} __m64;












































































































































};
























typedef union __declspec(intrin_type) __declspec(align(16)) __m128 {
	float               m128_f32[4];
	unsigned __int64    m128_u64[2];
	__int8              m128_i8[16];
	__int16             m128_i16[8];
	__int32             m128_i32[4];
	__int64             m128_i64[2];
	unsigned __int8     m128_u8[16];
	unsigned __int16    m128_u16[8];
	unsigned __int32    m128_u32[4];
} __m128;











#pragma once





__pragma(pack(push, 8)) extern "C" {
























	typedef struct _heapinfo
	{
		int* _pentry;
		size_t _size;
		int _useflag;
	} _HEAPINFO;









	void* __cdecl _alloca(size_t _Size);





	__declspec(dllimport) intptr_t __cdecl _get_heap_handle(void);


	__declspec(dllimport) int __cdecl _heapmin(void);


	__declspec(dllimport) int __cdecl _heapwalk(_HEAPINFO* _EntryInfo);



	__declspec(dllimport) int __cdecl _heapchk(void);
	__declspec(dllimport) int __cdecl _resetstkoflw(void);












	typedef char __static_assert_t[(sizeof(unsigned int) <= 16) != 0];


#pragma warning(push)
#pragma warning(disable:6540)

	__inline void* _MarkAllocaS(void* _Ptr, unsigned int _Marker)
	{
		if (_Ptr)
		{
			*((unsigned int*)_Ptr) = _Marker;
			_Ptr = (char*)_Ptr + 16;
		}
		return _Ptr;
	}

	__inline size_t _MallocaComputeSize(size_t _Size)
	{
		size_t _MarkedSize = _Size + 16;
		return _MarkedSize > _Size ? _MarkedSize : 0;
	}

#pragma warning(pop)





































#pragma warning(push)
#pragma warning(disable: 6014)
	__inline void __cdecl _freea(void* _Memory)
	{
		unsigned int _Marker;
		if (_Memory)
		{
			_Memory = (char*)_Memory - 16;
			_Marker = *(unsigned int*)_Memory;
			if (_Marker == 0xDDDD)
			{
				free(_Memory);
			}






		}
	}
#pragma warning(pop)











} __pragma(pack(pop))













































































































extern "C" {







	extern __m128 _mm_add_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_add_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_sub_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_sub_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_mul_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_mul_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_div_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_div_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_sqrt_ss(__m128 _A);
	extern __m128 _mm_sqrt_ps(__m128 _A);
	extern __m128 _mm_rcp_ss(__m128 _A);
	extern __m128 _mm_rcp_ps(__m128 _A);
	extern __m128 _mm_rsqrt_ss(__m128 _A);
	extern __m128 _mm_rsqrt_ps(__m128 _A);
	extern __m128 _mm_min_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_min_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_max_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_max_ps(__m128 _A, __m128 _B);





	extern __m128 _mm_and_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_andnot_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_or_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_xor_ps(__m128 _A, __m128 _B);





	extern __m128 _mm_cmpeq_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpeq_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmplt_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmplt_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmple_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmple_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpgt_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpgt_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpge_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpge_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpneq_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpneq_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpnlt_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpnlt_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpnle_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpnle_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpngt_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpngt_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpnge_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpnge_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpord_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpord_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpunord_ss(__m128 _A, __m128 _B);
	extern __m128 _mm_cmpunord_ps(__m128 _A, __m128 _B);
	extern int _mm_comieq_ss(__m128 _A, __m128 _B);
	extern int _mm_comilt_ss(__m128 _A, __m128 _B);
	extern int _mm_comile_ss(__m128 _A, __m128 _B);
	extern int _mm_comigt_ss(__m128 _A, __m128 _B);
	extern int _mm_comige_ss(__m128 _A, __m128 _B);
	extern int _mm_comineq_ss(__m128 _A, __m128 _B);
	extern int _mm_ucomieq_ss(__m128 _A, __m128 _B);
	extern int _mm_ucomilt_ss(__m128 _A, __m128 _B);
	extern int _mm_ucomile_ss(__m128 _A, __m128 _B);
	extern int _mm_ucomigt_ss(__m128 _A, __m128 _B);
	extern int _mm_ucomige_ss(__m128 _A, __m128 _B);
	extern int _mm_ucomineq_ss(__m128 _A, __m128 _B);





	extern int _mm_cvt_ss2si(__m128 _A);
	extern int _mm_cvtt_ss2si(__m128 _A);
	extern __m128 _mm_cvt_si2ss(__m128, int);
	extern float _mm_cvtss_f32(__m128 _A);














	extern __int64 _mm_cvtss_si64(__m128 _A);
	extern __int64 _mm_cvttss_si64(__m128 _A);
	extern __m128  _mm_cvtsi64_ss(__m128 _A, __int64 _B);






	extern __m128 _mm_shuffle_ps(__m128 _A, __m128 _B, unsigned int _Imm8);
	extern __m128 _mm_unpackhi_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_unpacklo_ps(__m128 _A, __m128 _B);
	extern __m128 _mm_loadh_pi(__m128, __m64 const*);
	extern __m128 _mm_movehl_ps(__m128, __m128);
	extern __m128 _mm_movelh_ps(__m128, __m128);
	extern void _mm_storeh_pi(__m64 *, __m128);
	extern __m128 _mm_loadl_pi(__m128, __m64 const*);
	extern void _mm_storel_pi(__m64 *, __m128);
	extern int _mm_movemask_ps(__m128 _A);

























	extern __m128 _mm_set_ss(float _A);
	extern __m128 _mm_set_ps1(float _A);
	extern __m128 _mm_set_ps(float _A, float _B, float _C, float _D);
	extern __m128 _mm_setr_ps(float _A, float _B, float _C, float _D);
	extern __m128 _mm_setzero_ps(void);
	extern __m128 _mm_load_ss(float const*_A);
	extern __m128 _mm_load_ps1(float const*_A);
	extern __m128 _mm_load_ps(float const*_A);
	extern __m128 _mm_loadr_ps(float const*_A);
	extern __m128 _mm_loadu_ps(float const*_A);
	extern void _mm_store_ss(float *_V, __m128 _A);
	extern void _mm_store_ps1(float *_V, __m128 _A);
	extern void _mm_store_ps(float *_V, __m128 _A);
	extern void _mm_storer_ps(float *_V, __m128 _A);
	extern void _mm_storeu_ps(float *_V, __m128 _A);
	extern void _mm_prefetch(char const*_A, int _Sel);



	extern void _mm_stream_ps(float *, __m128);
	extern __m128 _mm_move_ss(__m128 _A, __m128 _B);

	extern void _mm_sfence(void);
	extern unsigned int _mm_getcsr(void);
	extern void _mm_setcsr(unsigned int);

























































































































































};







typedef union __declspec(intrin_type) __declspec(align(16)) __m128i {
	__int8              m128i_i8[16];
	__int16             m128i_i16[8];
	__int32             m128i_i32[4];
	__int64             m128i_i64[2];
	unsigned __int8     m128i_u8[16];
	unsigned __int16    m128i_u16[8];
	unsigned __int32    m128i_u32[4];
	unsigned __int64    m128i_u64[2];
} __m128i;

typedef struct __declspec(intrin_type) __declspec(align(16)) __m128d {
	double              m128d_f64[2];
} __m128d;











extern "C" {







	extern __m128d _mm_add_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_add_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_sub_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_sub_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_mul_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_mul_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_sqrt_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_sqrt_pd(__m128d _A);
	extern __m128d _mm_div_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_div_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_min_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_min_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_max_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_max_pd(__m128d _A, __m128d _B);





	extern __m128d _mm_and_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_andnot_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_or_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_xor_pd(__m128d _A, __m128d _B);





	extern __m128d _mm_cmpeq_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpeq_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmplt_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmplt_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmple_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmple_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpgt_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpgt_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpge_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpge_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpneq_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpneq_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpnlt_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpnlt_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpnle_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpnle_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpngt_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpngt_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpnge_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpnge_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpord_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpord_sd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpunord_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_cmpunord_sd(__m128d _A, __m128d _B);
	extern int _mm_comieq_sd(__m128d _A, __m128d _B);
	extern int _mm_comilt_sd(__m128d _A, __m128d _B);
	extern int _mm_comile_sd(__m128d _A, __m128d _B);
	extern int _mm_comigt_sd(__m128d _A, __m128d _B);
	extern int _mm_comige_sd(__m128d _A, __m128d _B);
	extern int _mm_comineq_sd(__m128d _A, __m128d _B);
	extern int _mm_ucomieq_sd(__m128d _A, __m128d _B);
	extern int _mm_ucomilt_sd(__m128d _A, __m128d _B);
	extern int _mm_ucomile_sd(__m128d _A, __m128d _B);
	extern int _mm_ucomigt_sd(__m128d _A, __m128d _B);
	extern int _mm_ucomige_sd(__m128d _A, __m128d _B);
	extern int _mm_ucomineq_sd(__m128d _A, __m128d _B);





	extern __m128d _mm_cvtepi32_pd(__m128i _A);
	extern __m128i _mm_cvtpd_epi32(__m128d _A);
	extern __m128i _mm_cvttpd_epi32(__m128d _A);
	extern __m128 _mm_cvtepi32_ps(__m128i _A);
	extern __m128i _mm_cvtps_epi32(__m128 _A);
	extern __m128i _mm_cvttps_epi32(__m128 _A);
	extern __m128 _mm_cvtpd_ps(__m128d _A);
	extern __m128d _mm_cvtps_pd(__m128 _A);
	extern __m128 _mm_cvtsd_ss(__m128 _A, __m128d _B);
	extern __m128d _mm_cvtss_sd(__m128d _A, __m128 _B);

	extern int _mm_cvtsd_si32(__m128d _A);
	extern int _mm_cvttsd_si32(__m128d _A);
	extern __m128d _mm_cvtsi32_sd(__m128d _A, int _B);











	extern __m128d _mm_unpackhi_pd(__m128d _A, __m128d _B);
	extern __m128d _mm_unpacklo_pd(__m128d _A, __m128d _B);
	extern int _mm_movemask_pd(__m128d _A);
	extern __m128d _mm_shuffle_pd(__m128d _A, __m128d _B, int _I);





	extern __m128d _mm_load_pd(double const*_Dp);
	extern __m128d _mm_load1_pd(double const*_Dp);
	extern __m128d _mm_loadr_pd(double const*_Dp);
	extern __m128d _mm_loadu_pd(double const*_Dp);
	extern __m128d _mm_load_sd(double const*_Dp);
	extern __m128d _mm_loadh_pd(__m128d _A, double const*_Dp);
	extern __m128d _mm_loadl_pd(__m128d _A, double const*_Dp);





	extern __m128d _mm_set_sd(double _W);
	extern __m128d _mm_set1_pd(double _A);
	extern __m128d _mm_set_pd(double _Z, double _Y);
	extern __m128d _mm_setr_pd(double _Y, double _Z);
	extern __m128d _mm_setzero_pd(void);
	extern __m128d _mm_move_sd(__m128d _A, __m128d _B);





	extern void _mm_store_sd(double *_Dp, __m128d _A);
	extern void _mm_store1_pd(double *_Dp, __m128d _A);
	extern void _mm_store_pd(double *_Dp, __m128d _A);
	extern void _mm_storeu_pd(double *_Dp, __m128d _A);
	extern void _mm_storer_pd(double *_Dp, __m128d _A);
	extern void _mm_storeh_pd(double *_Dp, __m128d _A);
	extern void _mm_storel_pd(double *_Dp, __m128d _A);





	extern __m128i _mm_add_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_add_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_add_epi32(__m128i _A, __m128i _B);



	extern __m128i _mm_add_epi64(__m128i _A, __m128i _B);
	extern __m128i _mm_adds_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_adds_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_adds_epu8(__m128i _A, __m128i _B);
	extern __m128i _mm_adds_epu16(__m128i _A, __m128i _B);
	extern __m128i _mm_avg_epu8(__m128i _A, __m128i _B);
	extern __m128i _mm_avg_epu16(__m128i _A, __m128i _B);
	extern __m128i _mm_madd_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_max_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_max_epu8(__m128i _A, __m128i _B);
	extern __m128i _mm_min_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_min_epu8(__m128i _A, __m128i _B);
	extern __m128i _mm_mulhi_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_mulhi_epu16(__m128i _A, __m128i _B);
	extern __m128i _mm_mullo_epi16(__m128i _A, __m128i _B);



	extern __m128i _mm_mul_epu32(__m128i _A, __m128i _B);
	extern __m128i _mm_sad_epu8(__m128i _A, __m128i _B);
	extern __m128i _mm_sub_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_sub_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_sub_epi32(__m128i _A, __m128i _B);



	extern __m128i _mm_sub_epi64(__m128i _A, __m128i _B);
	extern __m128i _mm_subs_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_subs_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_subs_epu8(__m128i _A, __m128i _B);
	extern __m128i _mm_subs_epu16(__m128i _A, __m128i _B);





	extern __m128i _mm_and_si128(__m128i _A, __m128i _B);
	extern __m128i _mm_andnot_si128(__m128i _A, __m128i _B);
	extern __m128i _mm_or_si128(__m128i _A, __m128i _B);
	extern __m128i _mm_xor_si128(__m128i _A, __m128i _B);





	extern __m128i _mm_slli_si128(__m128i _A, int _Imm);
	extern __m128i _mm_slli_epi16(__m128i _A, int _Count);
	extern __m128i _mm_sll_epi16(__m128i _A, __m128i _Count);
	extern __m128i _mm_slli_epi32(__m128i _A, int _Count);
	extern __m128i _mm_sll_epi32(__m128i _A, __m128i _Count);
	extern __m128i _mm_slli_epi64(__m128i _A, int _Count);
	extern __m128i _mm_sll_epi64(__m128i _A, __m128i _Count);
	extern __m128i _mm_srai_epi16(__m128i _A, int _Count);
	extern __m128i _mm_sra_epi16(__m128i _A, __m128i _Count);
	extern __m128i _mm_srai_epi32(__m128i _A, int _Count);
	extern __m128i _mm_sra_epi32(__m128i _A, __m128i _Count);
	extern __m128i _mm_srli_si128(__m128i _A, int _Imm);
	extern __m128i _mm_srli_epi16(__m128i _A, int _Count);
	extern __m128i _mm_srl_epi16(__m128i _A, __m128i _Count);
	extern __m128i _mm_srli_epi32(__m128i _A, int _Count);
	extern __m128i _mm_srl_epi32(__m128i _A, __m128i _Count);
	extern __m128i _mm_srli_epi64(__m128i _A, int _Count);
	extern __m128i _mm_srl_epi64(__m128i _A, __m128i _Count);





	extern __m128i _mm_cmpeq_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_cmpeq_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_cmpeq_epi32(__m128i _A, __m128i _B);
	extern __m128i _mm_cmpgt_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_cmpgt_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_cmpgt_epi32(__m128i _A, __m128i _B);
	extern __m128i _mm_cmplt_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_cmplt_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_cmplt_epi32(__m128i _A, __m128i _B);





	extern __m128i _mm_cvtsi32_si128(int _A);
	extern int _mm_cvtsi128_si32(__m128i _A);





	extern __m128i _mm_packs_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_packs_epi32(__m128i _A, __m128i _B);
	extern __m128i _mm_packus_epi16(__m128i _A, __m128i _B);
	extern int _mm_extract_epi16(__m128i _A, int _Imm);
	extern __m128i _mm_insert_epi16(__m128i _A, int _B, int _Imm);
	extern int _mm_movemask_epi8(__m128i _A);
	extern __m128i _mm_shuffle_epi32(__m128i _A, int _Imm);
	extern __m128i _mm_shufflehi_epi16(__m128i _A, int _Imm);
	extern __m128i _mm_shufflelo_epi16(__m128i _A, int _Imm);
	extern __m128i _mm_unpackhi_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_unpackhi_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_unpackhi_epi32(__m128i _A, __m128i _B);
	extern __m128i _mm_unpackhi_epi64(__m128i _A, __m128i _B);
	extern __m128i _mm_unpacklo_epi8(__m128i _A, __m128i _B);
	extern __m128i _mm_unpacklo_epi16(__m128i _A, __m128i _B);
	extern __m128i _mm_unpacklo_epi32(__m128i _A, __m128i _B);
	extern __m128i _mm_unpacklo_epi64(__m128i _A, __m128i _B);





	extern __m128i _mm_load_si128(__m128i const*_P);
	extern __m128i _mm_loadu_si128(__m128i const*_P);
	extern __m128i _mm_loadl_epi64(__m128i const*_P);








	extern __m128i _mm_set_epi64x(__int64 _I1, __int64 _I0);
	extern __m128i _mm_set_epi32(int _I3, int _I2, int _I1, int _I0);
	extern __m128i _mm_set_epi16(short _W7, short _W6, short _W5, short _W4,
		short _W3, short _W2, short _W1, short _W0);
	extern __m128i _mm_set_epi8(char _B15, char _B14, char _B13, char _B12,
		char _B11, char _B10, char _B9, char _B8,
		char _B7, char _B6, char _B5, char _B4,
		char _B3, char _B2, char _B1, char _B0);



	extern __m128i _mm_set1_epi64x(__int64 i);
	extern __m128i _mm_set1_epi32(int _I);
	extern __m128i _mm_set1_epi16(short _W);
	extern __m128i _mm_set1_epi8(char _B);
	extern __m128i _mm_setl_epi64(__m128i _Q);



	extern __m128i _mm_setr_epi32(int _I0, int _I1, int _I2, int _I3);
	extern __m128i _mm_setr_epi16(short _W0, short _W1, short _W2, short _W3,
		short _W4, short _W5, short _W6, short _W7);
	extern __m128i _mm_setr_epi8(char _B15, char _B14, char _B13, char _B12,
		char _B11, char _B10, char _B9, char _B8,
		char _B7, char _B6, char _B5, char _B4,
		char _B3, char _B2, char _B1, char _B0);
	extern __m128i _mm_setzero_si128(void);





	extern void _mm_store_si128(__m128i *_P, __m128i _B);
	extern void _mm_storeu_si128(__m128i *_P, __m128i _B);
	extern void _mm_storel_epi64(__m128i *_P, __m128i _Q);
	extern void _mm_maskmoveu_si128(__m128i _D, __m128i _N, char *_P);





	extern __m128i _mm_move_epi64(__m128i _Q);









	extern void _mm_stream_pd(double *_Dp, __m128d _A);
	extern void _mm_stream_si128(__m128i *_P, __m128i _A);
	extern void _mm_clflush(void const*_P);
	extern void _mm_lfence(void);
	extern void _mm_mfence(void);
	extern void _mm_stream_si32(int *_P, int _I);
	extern void _mm_pause(void);





	extern double _mm_cvtsd_f64(__m128d _A);







	extern __m128  _mm_castpd_ps(__m128d);
	extern __m128i _mm_castpd_si128(__m128d);
	extern __m128d _mm_castps_pd(__m128);
	extern __m128i _mm_castps_si128(__m128);
	extern __m128  _mm_castsi128_ps(__m128i);
	extern __m128d _mm_castsi128_pd(__m128i);






	extern __int64 _mm_cvtsd_si64(__m128d);
	extern __int64 _mm_cvttsd_si64(__m128d);
	extern __m128d _mm_cvtsi64_sd(__m128d, __int64);
	extern __m128i _mm_cvtsi64_si128(__int64);
	extern __int64 _mm_cvtsi128_si64(__m128i);





};





























extern "C" {







	extern __m128 _mm_addsub_ps(__m128, __m128);
	extern __m128 _mm_hadd_ps(__m128, __m128);
	extern __m128 _mm_hsub_ps(__m128, __m128);
	extern __m128 _mm_movehdup_ps(__m128);
	extern __m128 _mm_moveldup_ps(__m128);





	extern __m128d _mm_addsub_pd(__m128d, __m128d);
	extern __m128d _mm_hadd_pd(__m128d, __m128d);
	extern __m128d _mm_hsub_pd(__m128d, __m128d);
	extern __m128d _mm_loaddup_pd(double const *);
	extern __m128d _mm_movedup_pd(__m128d);




	extern __m128i _mm_lddqu_si128(__m128i const *);







	extern void _mm_monitor(void const *, unsigned, unsigned);




	extern void _mm_mwait(unsigned, unsigned);


};















extern "C" {









	extern __m128i _mm_hadd_epi16(__m128i, __m128i);
	extern __m128i _mm_hadd_epi32(__m128i, __m128i);
	extern __m128i _mm_hadds_epi16(__m128i, __m128i);















	extern __m128i _mm_hsub_epi16(__m128i, __m128i);
	extern __m128i _mm_hsub_epi32(__m128i, __m128i);
	extern __m128i _mm_hsubs_epi16(__m128i, __m128i);
















	extern __m128i _mm_maddubs_epi16(__m128i, __m128i);








	extern __m128i _mm_mulhrs_epi16(__m128i, __m128i);








	extern __m128i _mm_shuffle_epi8(__m128i, __m128i);








	extern __m128i _mm_sign_epi8(__m128i, __m128i);
	extern __m128i _mm_sign_epi16(__m128i, __m128i);
	extern __m128i _mm_sign_epi32(__m128i, __m128i);










	extern __m128i _mm_alignr_epi8(__m128i, __m128i, int);








	extern __m128i _mm_abs_epi8(__m128i);
	extern __m128i _mm_abs_epi16(__m128i);
	extern __m128i _mm_abs_epi32(__m128i);








};
























































extern "C" {





	extern __m128i _mm_blend_epi16(__m128i, __m128i, const int);
	extern __m128i _mm_blendv_epi8(__m128i, __m128i, __m128i mask);




	extern __m128  _mm_blend_ps(__m128, __m128, const int);
	extern __m128  _mm_blendv_ps(__m128, __m128, __m128);




	extern __m128d _mm_blend_pd(__m128d, __m128d, const int);
	extern __m128d _mm_blendv_pd(__m128d, __m128d, __m128d);




	extern __m128  _mm_dp_ps(__m128, __m128, const int);
	extern __m128d _mm_dp_pd(__m128d, __m128d, const int);




	extern __m128i _mm_cmpeq_epi64(__m128i, __m128i);



	extern __m128i _mm_min_epi8(__m128i, __m128i);
	extern __m128i _mm_max_epi8(__m128i, __m128i);

	extern __m128i _mm_min_epu16(__m128i, __m128i);
	extern __m128i _mm_max_epu16(__m128i, __m128i);

	extern __m128i _mm_min_epi32(__m128i, __m128i);
	extern __m128i _mm_max_epi32(__m128i, __m128i);
	extern __m128i _mm_min_epu32(__m128i, __m128i);
	extern __m128i _mm_max_epu32(__m128i, __m128i);




	extern __m128i _mm_mullo_epi32(__m128i, __m128i);




	extern __m128i _mm_mul_epi32(__m128i, __m128i);




	extern int _mm_testz_si128(__m128i, __m128i);




	extern int _mm_testc_si128(__m128i, __m128i);





	extern int _mm_testnzc_si128(__m128i, __m128i);







	extern __m128 _mm_insert_ps(__m128, __m128, const int);









	extern int _mm_extract_ps(__m128, const int);

















	extern __m128i _mm_insert_epi8(__m128i, int, const int);
	extern __m128i _mm_insert_epi32(__m128i, int, const int);


	extern __m128i _mm_insert_epi64(__m128i, __int64, const int);




	extern int   _mm_extract_epi8(__m128i, const int);
	extern int   _mm_extract_epi32(__m128i, const int);


	extern __int64 _mm_extract_epi64(__m128i, const int);





	extern __m128i _mm_minpos_epu16(__m128i);



	extern __m128d _mm_round_pd(__m128d, int);
	extern __m128d _mm_round_sd(__m128d, __m128d, int);



	extern __m128  _mm_round_ps(__m128, int);
	extern __m128  _mm_round_ss(__m128, __m128, int);



	extern __m128i _mm_cvtepi8_epi32(__m128i);
	extern __m128i _mm_cvtepi16_epi32(__m128i);
	extern __m128i _mm_cvtepi8_epi64(__m128i);
	extern __m128i _mm_cvtepi32_epi64(__m128i);
	extern __m128i _mm_cvtepi16_epi64(__m128i);
	extern __m128i _mm_cvtepi8_epi16(__m128i);



	extern __m128i _mm_cvtepu8_epi32(__m128i);
	extern __m128i _mm_cvtepu16_epi32(__m128i);
	extern __m128i _mm_cvtepu8_epi64(__m128i);
	extern __m128i _mm_cvtepu32_epi64(__m128i);
	extern __m128i _mm_cvtepu16_epi64(__m128i);
	extern __m128i _mm_cvtepu8_epi16(__m128i);





	extern __m128i _mm_packus_epi32(__m128i, __m128i);





	extern __m128i _mm_mpsadbw_epu8(__m128i, __m128i, const int);





	extern __m128i _mm_stream_load_si128(const __m128i*);


};









extern "C" {














































	extern __m128i _mm_cmpistrm(__m128i, __m128i, const int);
	extern int     _mm_cmpistri(__m128i, __m128i, const int);

	extern __m128i _mm_cmpestrm(__m128i, int, __m128i, int, const int);
	extern int     _mm_cmpestri(__m128i, int, __m128i, int, const int);





	extern int     _mm_cmpistrz(__m128i, __m128i, const int);
	extern int     _mm_cmpistrc(__m128i, __m128i, const int);
	extern int     _mm_cmpistrs(__m128i, __m128i, const int);
	extern int     _mm_cmpistro(__m128i, __m128i, const int);
	extern int     _mm_cmpistra(__m128i, __m128i, const int);

	extern int     _mm_cmpestrz(__m128i, int, __m128i, int, const int);
	extern int     _mm_cmpestrc(__m128i, int, __m128i, int, const int);
	extern int     _mm_cmpestrs(__m128i, int, __m128i, int, const int);
	extern int     _mm_cmpestro(__m128i, int, __m128i, int, const int);
	extern int     _mm_cmpestra(__m128i, int, __m128i, int, const int);






	extern __m128i _mm_cmpgt_epi64(__m128i, __m128i);





	extern int _mm_popcnt_u32(unsigned int);


	extern __int64 _mm_popcnt_u64(unsigned __int64);






	extern unsigned int _mm_crc32_u8(unsigned int, unsigned char);
	extern unsigned int _mm_crc32_u16(unsigned int, unsigned short);
	extern unsigned int _mm_crc32_u32(unsigned int, unsigned int);


	extern unsigned __int64 _mm_crc32_u64(unsigned __int64, unsigned __int64);



};









extern "C" {






	extern __m128i _mm_aesdec_si128(__m128i, __m128i);





	extern __m128i _mm_aesdeclast_si128(__m128i, __m128i);





	extern __m128i _mm_aesenc_si128(__m128i, __m128i);





	extern __m128i _mm_aesenclast_si128(__m128i, __m128i);





	extern __m128i _mm_aesimc_si128(__m128i);






	extern __m128i _mm_aeskeygenassist_si128(__m128i, const int);







	extern __m128i _mm_clmulepi64_si128(__m128i, __m128i,
		const int);



};








extern "C" {





	typedef union __declspec(intrin_type) __declspec(align(32)) __m256 {
		float m256_f32[8];
	} __m256;

	typedef struct __declspec(intrin_type) __declspec(align(32)) __m256d {
		double m256d_f64[4];
	} __m256d;

	typedef union  __declspec(intrin_type) __declspec(align(32)) __m256i {
		__int8              m256i_i8[32];
		__int16             m256i_i16[16];
		__int32             m256i_i32[8];
		__int64             m256i_i64[4];
		unsigned __int8     m256i_u8[32];
		unsigned __int16    m256i_u16[16];
		unsigned __int32    m256i_u32[8];
		unsigned __int64    m256i_u64[4];
	} __m256i;



















































	extern __m256d __cdecl _mm256_add_pd(__m256d, __m256d);









	extern __m256 __cdecl _mm256_add_ps(__m256, __m256);












	extern __m256d __cdecl _mm256_addsub_pd(__m256d, __m256d);












	extern __m256 __cdecl _mm256_addsub_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_and_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_and_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_andnot_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_andnot_ps(__m256, __m256);













	extern __m256d __cdecl _mm256_blend_pd(__m256d, __m256d, const int);













	extern __m256 __cdecl _mm256_blend_ps(__m256, __m256, const int);









	extern __m256d __cdecl _mm256_blendv_pd(__m256d, __m256d, __m256d);









	extern __m256 __cdecl _mm256_blendv_ps(__m256, __m256, __m256);








	extern __m256d __cdecl _mm256_div_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_div_ps(__m256, __m256);














	extern __m256 __cdecl _mm256_dp_ps(__m256, __m256, const int);








	extern __m256d __cdecl _mm256_hadd_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_hadd_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_hsub_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_hsub_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_max_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_max_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_min_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_min_ps(__m256, __m256);









	extern __m256d __cdecl _mm256_mul_pd(__m256d, __m256d);









	extern __m256 __cdecl _mm256_mul_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_or_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_or_ps(__m256, __m256);











	extern __m256d __cdecl _mm256_shuffle_pd(__m256d, __m256d, const int);












	extern __m256 __cdecl _mm256_shuffle_ps(__m256, __m256, const int);








	extern __m256d __cdecl _mm256_sub_pd(__m256d, __m256d);









	extern __m256 __cdecl _mm256_sub_ps(__m256, __m256);








	extern __m256d __cdecl _mm256_xor_pd(__m256d, __m256d);








	extern __m256 __cdecl _mm256_xor_ps(__m256, __m256);















	extern __m128d __cdecl _mm_cmp_pd(__m128d, __m128d, const int);
	extern __m256d __cdecl _mm256_cmp_pd(__m256d, __m256d, const int);















	extern __m128 __cdecl _mm_cmp_ps(__m128, __m128, const int);
	extern __m256 __cdecl _mm256_cmp_ps(__m256, __m256, const int);












	extern __m128d __cdecl _mm_cmp_sd(__m128d, __m128d, const int);





	extern int __cdecl _mm_comi_sd(__m128d, __m128d, const int);












	extern __m128 __cdecl _mm_cmp_ss(__m128, __m128, const int);





	extern int __cdecl _mm_comi_ss(__m128, __m128, const int);








	extern __m256d __cdecl _mm256_cvtepi32_pd(__m128i);








	extern __m256  __cdecl _mm256_cvtepi32_ps(__m256i);









	extern __m128  __cdecl _mm256_cvtpd_ps(__m256d);








	extern __m256i __cdecl _mm256_cvtps_epi32(__m256);









	extern __m256d __cdecl _mm256_cvtps_pd(__m128);












	extern __m128i __cdecl _mm256_cvttpd_epi32(__m256d);








	extern __m128i __cdecl _mm256_cvtpd_epi32(__m256d);












	extern __m256i __cdecl _mm256_cvttps_epi32(__m256);







	extern __m128  __cdecl _mm256_extractf128_ps(__m256, const int);
	extern __m128d __cdecl _mm256_extractf128_pd(__m256d, const int);
	extern __m128i __cdecl _mm256_extractf128_si256(__m256i, const int);






	extern void __cdecl _mm256_zeroall(void);







	extern void __cdecl _mm256_zeroupper(void);









	extern __m256  __cdecl _mm256_permutevar_ps(__m256, __m256i);
	extern __m128  __cdecl _mm_permutevar_ps(__m128, __m128i);









	extern __m256  __cdecl _mm256_permute_ps(__m256, int);
	extern __m128  __cdecl _mm_permute_ps(__m128, int);









	extern __m256d __cdecl _mm256_permutevar_pd(__m256d, __m256i);
	extern __m128d __cdecl _mm_permutevar_pd(__m128d, __m128i);









	extern __m256d __cdecl _mm256_permute_pd(__m256d, int);
	extern __m128d __cdecl _mm_permute_pd(__m128d, int);








	extern __m256  __cdecl _mm256_permute2f128_ps(__m256, __m256, int);
	extern __m256d __cdecl _mm256_permute2f128_pd(__m256d, __m256d, int);
	extern __m256i __cdecl _mm256_permute2f128_si256(__m256i, __m256i, int);








	extern __m256  __cdecl _mm256_broadcast_ss(float const *);
	extern __m128  __cdecl _mm_broadcast_ss(float const *);







	extern __m256d __cdecl _mm256_broadcast_sd(double const *);







	extern __m256  __cdecl _mm256_broadcast_ps(__m128 const *);
	extern __m256d __cdecl _mm256_broadcast_pd(__m128d const *);









	extern __m256  __cdecl _mm256_insertf128_ps(__m256, __m128, int);
	extern __m256d __cdecl _mm256_insertf128_pd(__m256d, __m128d, int);
	extern __m256i __cdecl _mm256_insertf128_si256(__m256i, __m128i, int);








	extern __m256d __cdecl _mm256_load_pd(double const *);
	extern void    __cdecl _mm256_store_pd(double *, __m256d);








	extern __m256  __cdecl _mm256_load_ps(float const *);
	extern void    __cdecl _mm256_store_ps(float *, __m256);








	extern __m256d __cdecl _mm256_loadu_pd(double const *);
	extern void    __cdecl _mm256_storeu_pd(double *, __m256d);








	extern __m256  __cdecl _mm256_loadu_ps(float const *);
	extern void    __cdecl _mm256_storeu_ps(float *, __m256);








	extern __m256i __cdecl _mm256_load_si256(__m256i const *);
	extern void    __cdecl _mm256_store_si256(__m256i *, __m256i);








	extern __m256i __cdecl _mm256_loadu_si256(__m256i const *);
	extern void    __cdecl _mm256_storeu_si256(__m256i *, __m256i);







































































	extern __m256d __cdecl _mm256_maskload_pd(double const *, __m256i);
	extern void    __cdecl _mm256_maskstore_pd(double *, __m256i, __m256d);
	extern __m128d __cdecl _mm_maskload_pd(double const *, __m128i);
	extern void    __cdecl _mm_maskstore_pd(double *, __m128i, __m128d);



















	extern __m256  __cdecl _mm256_maskload_ps(float const *, __m256i);
	extern void    __cdecl _mm256_maskstore_ps(float *, __m256i, __m256);
	extern __m128  __cdecl _mm_maskload_ps(float const *, __m128i);
	extern void    __cdecl _mm_maskstore_ps(float *, __m128i, __m128);







	extern __m256  __cdecl _mm256_movehdup_ps(__m256);







	extern __m256  __cdecl _mm256_moveldup_ps(__m256);







	extern __m256d __cdecl _mm256_movedup_pd(__m256d);









	extern __m256i __cdecl _mm256_lddqu_si256(__m256i const *);







	extern void    __cdecl _mm256_stream_si256(__m256i *, __m256i);








	extern void    __cdecl _mm256_stream_pd(double *, __m256d);








	extern void    __cdecl _mm256_stream_ps(float *, __m256);









	extern __m256  __cdecl _mm256_rcp_ps(__m256);










	extern __m256  __cdecl _mm256_rsqrt_ps(__m256);








	extern __m256d __cdecl _mm256_sqrt_pd(__m256d);








	extern __m256  __cdecl _mm256_sqrt_ps(__m256);












	extern __m256d __cdecl _mm256_round_pd(__m256d, int);














	extern __m256  __cdecl _mm256_round_ps(__m256, int);









	extern __m256d __cdecl _mm256_unpackhi_pd(__m256d, __m256d);







	extern __m256  __cdecl _mm256_unpackhi_ps(__m256, __m256);







	extern __m256d __cdecl _mm256_unpacklo_pd(__m256d, __m256d);







	extern __m256  __cdecl _mm256_unpacklo_ps(__m256, __m256);









	extern int     __cdecl _mm256_testz_si256(__m256i, __m256i);



	extern int     __cdecl _mm256_testc_si256(__m256i, __m256i);



	extern int     __cdecl _mm256_testnzc_si256(__m256i, __m256i);














	extern int     __cdecl _mm256_testz_pd(__m256d, __m256d);
	extern int     __cdecl _mm256_testc_pd(__m256d, __m256d);
	extern int     __cdecl _mm256_testnzc_pd(__m256d, __m256d);
	extern int     __cdecl _mm_testz_pd(__m128d, __m128d);
	extern int     __cdecl _mm_testc_pd(__m128d, __m128d);
	extern int     __cdecl _mm_testnzc_pd(__m128d, __m128d);












	extern int     __cdecl _mm256_testz_ps(__m256, __m256);
	extern int     __cdecl _mm256_testc_ps(__m256, __m256);
	extern int     __cdecl _mm256_testnzc_ps(__m256, __m256);
	extern int     __cdecl _mm_testz_ps(__m128, __m128);
	extern int     __cdecl _mm_testc_ps(__m128, __m128);
	extern int     __cdecl _mm_testnzc_ps(__m128, __m128);








	extern int     __cdecl _mm256_movemask_pd(__m256d);








	extern int     __cdecl _mm256_movemask_ps(__m256);




	extern __m256d __cdecl _mm256_setzero_pd(void);
	extern __m256  __cdecl _mm256_setzero_ps(void);
	extern __m256i __cdecl _mm256_setzero_si256(void);




	extern __m256d __cdecl _mm256_set_pd(double, double, double, double);
	extern __m256  __cdecl _mm256_set_ps(float, float, float, float,
		float, float, float, float);
	extern __m256i __cdecl _mm256_set_epi8(char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char);
	extern __m256i __cdecl _mm256_set_epi16(short, short, short, short,
		short, short, short, short,
		short, short, short, short,
		short, short, short, short);
	extern __m256i __cdecl _mm256_set_epi32(int, int, int, int,
		int, int, int, int);
	extern __m256i __cdecl _mm256_set_epi64x(__int64, __int64,
		__int64, __int64);










	extern __m256d __cdecl _mm256_setr_pd(double, double, double, double);
	extern __m256  __cdecl _mm256_setr_ps(float, float, float, float,
		float, float, float, float);
	extern __m256i __cdecl _mm256_setr_epi8(char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char,
		char, char, char, char);
	extern __m256i __cdecl _mm256_setr_epi16(short, short, short, short,
		short, short, short, short,
		short, short, short, short,
		short, short, short, short);
	extern __m256i __cdecl _mm256_setr_epi32(int, int, int, int,
		int, int, int, int);
	extern __m256i __cdecl _mm256_setr_epi64x(__int64, __int64,
		__int64, __int64);







	extern __m256d __cdecl _mm256_set1_pd(double);
	extern __m256  __cdecl _mm256_set1_ps(float);
	extern __m256i __cdecl _mm256_set1_epi8(char);
	extern __m256i __cdecl _mm256_set1_epi16(short);
	extern __m256i __cdecl _mm256_set1_epi32(int);
	extern __m256i __cdecl _mm256_set1_epi64x(long long);







	extern __m256  __cdecl _mm256_castpd_ps(__m256d);
	extern __m256d __cdecl _mm256_castps_pd(__m256);
	extern __m256i __cdecl _mm256_castps_si256(__m256);
	extern __m256i __cdecl _mm256_castpd_si256(__m256d);
	extern __m256  __cdecl _mm256_castsi256_ps(__m256i);
	extern __m256d __cdecl _mm256_castsi256_pd(__m256i);
	extern __m128  __cdecl _mm256_castps256_ps128(__m256);
	extern __m128d __cdecl _mm256_castpd256_pd128(__m256d);
	extern __m128i __cdecl _mm256_castsi256_si128(__m256i);
	extern __m256  __cdecl _mm256_castps128_ps256(__m128);
	extern __m256d __cdecl _mm256_castpd128_pd256(__m128d);
	extern __m256i __cdecl _mm256_castsi128_si256(__m128i);






	extern __m128  __cdecl _mm_cvtph_ps(__m128i);
	extern __m256  __cdecl _mm256_cvtph_ps(__m128i);
	extern __m128i __cdecl _mm_cvtps_ph(__m128, const int);
	extern __m128i __cdecl _mm256_cvtps_ph(__m256, int);




















	extern unsigned __int64 __cdecl _xgetbv(unsigned int);


	extern void __cdecl _xsetbv(unsigned int, unsigned __int64);






	extern void __cdecl _xsave(void *, unsigned __int64);

	extern void __cdecl _xsave64(void *, unsigned __int64);







	extern void __cdecl _xsaveopt(void *, unsigned __int64);

	extern void __cdecl _xsaveopt64(void *, unsigned __int64);






	extern void __cdecl _xsavec(void *, unsigned __int64);

	extern void __cdecl _xsavec64(void *, unsigned __int64);







	extern void __cdecl _xrstor(void const *, unsigned __int64);

	extern void __cdecl _xrstor64(void const *, unsigned __int64);







	extern void __cdecl _xsaves(void *, unsigned __int64);

	extern void __cdecl _xsaves64(void *, unsigned __int64);







	extern void __cdecl _xrstors(void const *, unsigned __int64);

	extern void __cdecl _xrstors64(void const *, unsigned __int64);






	extern void __cdecl _fxsave(void *);

	extern void __cdecl _fxsave64(void *);






	extern void __cdecl _fxrstor(void const *);

	extern void __cdecl _fxrstor64(void const *);








	extern int __cdecl _rdrand16_step(unsigned short *);
	extern int __cdecl _rdrand32_step(unsigned int *);

	extern int __cdecl _rdrand64_step(unsigned __int64 *);






	extern unsigned int     __cdecl _readfsbase_u32();
	extern unsigned int     __cdecl _readgsbase_u32();
	extern unsigned __int64 __cdecl _readfsbase_u64();
	extern unsigned __int64 __cdecl _readgsbase_u64();




	extern void __cdecl _writefsbase_u32(unsigned int);
	extern void __cdecl _writegsbase_u32(unsigned int);
	extern void __cdecl _writefsbase_u64(unsigned __int64);
	extern void __cdecl _writegsbase_u64(unsigned __int64);





	extern __m128  __cdecl _mm_fmadd_ps(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fmadd_pd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fmadd_ss(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fmadd_sd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fmsub_ps(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fmsub_pd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fmsub_ss(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fmsub_sd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fnmadd_ps(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fnmadd_pd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fnmadd_ss(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fnmadd_sd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fnmsub_ps(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fnmsub_pd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fnmsub_ss(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fnmsub_sd(__m128d, __m128d, __m128d);

	extern __m256  __cdecl _mm256_fmadd_ps(__m256, __m256, __m256);
	extern __m256d __cdecl _mm256_fmadd_pd(__m256d, __m256d, __m256d);
	extern __m256  __cdecl _mm256_fmsub_ps(__m256, __m256, __m256);
	extern __m256d __cdecl _mm256_fmsub_pd(__m256d, __m256d, __m256d);
	extern __m256  __cdecl _mm256_fnmadd_ps(__m256, __m256, __m256);
	extern __m256d __cdecl _mm256_fnmadd_pd(__m256d, __m256d, __m256d);
	extern __m256  __cdecl _mm256_fnmsub_ps(__m256, __m256, __m256);
	extern __m256d __cdecl _mm256_fnmsub_pd(__m256d, __m256d, __m256d);





	extern __m128  __cdecl _mm_fmaddsub_ps(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fmaddsub_pd(__m128d, __m128d, __m128d);
	extern __m128  __cdecl _mm_fmsubadd_ps(__m128, __m128, __m128);
	extern __m128d __cdecl _mm_fmsubadd_pd(__m128d, __m128d, __m128d);

	extern __m256  __cdecl _mm256_fmaddsub_ps(__m256, __m256, __m256);
	extern __m256d __cdecl _mm256_fmaddsub_pd(__m256d, __m256d, __m256d);
	extern __m256  __cdecl _mm256_fmsubadd_ps(__m256, __m256, __m256);
	extern __m256d __cdecl _mm256_fmsubadd_pd(__m256d, __m256d, __m256d);





	extern __m256i __cdecl _mm256_cmpeq_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_cmpeq_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_cmpeq_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_cmpeq_epi64(__m256i, __m256i);

	extern __m256i __cdecl _mm256_cmpgt_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_cmpgt_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_cmpgt_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_cmpgt_epi64(__m256i, __m256i);





	extern __m256i __cdecl _mm256_max_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_max_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_max_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_max_epu8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_max_epu16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_max_epu32(__m256i, __m256i);

	extern __m256i __cdecl _mm256_min_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_min_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_min_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_min_epu8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_min_epu16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_min_epu32(__m256i, __m256i);





	extern __m256i __cdecl _mm256_and_si256(__m256i, __m256i);
	extern __m256i __cdecl _mm256_andnot_si256(__m256i, __m256i);
	extern __m256i __cdecl _mm256_or_si256(__m256i, __m256i);
	extern __m256i __cdecl _mm256_xor_si256(__m256i, __m256i);





	extern __m256i __cdecl _mm256_abs_epi8(__m256i);
	extern __m256i __cdecl _mm256_abs_epi16(__m256i);
	extern __m256i __cdecl _mm256_abs_epi32(__m256i);

	extern __m256i __cdecl _mm256_add_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_add_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_add_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_add_epi64(__m256i, __m256i);

	extern __m256i __cdecl _mm256_adds_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_adds_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_adds_epu8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_adds_epu16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_sub_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_sub_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_sub_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_sub_epi64(__m256i, __m256i);

	extern __m256i __cdecl _mm256_subs_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_subs_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_subs_epu8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_subs_epu16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_avg_epu8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_avg_epu16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_hadd_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_hadd_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_hadds_epi16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_hsub_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_hsub_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_hsubs_epi16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_madd_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_maddubs_epi16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_mulhi_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_mulhi_epu16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_mullo_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_mullo_epi32(__m256i, __m256i);

	extern __m256i __cdecl _mm256_mul_epu32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_mul_epi32(__m256i, __m256i);

	extern __m256i __cdecl _mm256_sign_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_sign_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_sign_epi32(__m256i, __m256i);

	extern __m256i __cdecl _mm256_mulhrs_epi16(__m256i, __m256i);

	extern __m256i __cdecl _mm256_sad_epu8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_mpsadbw_epu8(__m256i, __m256i, const int);





	extern __m256i __cdecl _mm256_slli_si256(__m256i, const int);

	extern __m256i __cdecl _mm256_srli_si256(__m256i, const int);


	extern __m256i __cdecl _mm256_sll_epi16(__m256i, __m128i);
	extern __m256i __cdecl _mm256_sll_epi32(__m256i, __m128i);
	extern __m256i __cdecl _mm256_sll_epi64(__m256i, __m128i);

	extern __m256i __cdecl _mm256_slli_epi16(__m256i, int);
	extern __m256i __cdecl _mm256_slli_epi32(__m256i, int);
	extern __m256i __cdecl _mm256_slli_epi64(__m256i, int);

	extern __m256i __cdecl _mm256_sllv_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_sllv_epi64(__m256i, __m256i);

	extern __m128i __cdecl _mm_sllv_epi32(__m128i, __m128i);
	extern __m128i __cdecl _mm_sllv_epi64(__m128i, __m128i);

	extern __m256i __cdecl _mm256_sra_epi16(__m256i, __m128i);
	extern __m256i __cdecl _mm256_sra_epi32(__m256i, __m128i);

	extern __m256i __cdecl _mm256_srai_epi16(__m256i, int);
	extern __m256i __cdecl _mm256_srai_epi32(__m256i, int);

	extern __m256i __cdecl _mm256_srav_epi32(__m256i, __m256i);

	extern __m128i __cdecl _mm_srav_epi32(__m128i, __m128i);

	extern __m256i __cdecl _mm256_srl_epi16(__m256i, __m128i);
	extern __m256i __cdecl _mm256_srl_epi32(__m256i, __m128i);
	extern __m256i __cdecl _mm256_srl_epi64(__m256i, __m128i);

	extern __m256i __cdecl _mm256_srli_epi16(__m256i, int);
	extern __m256i __cdecl _mm256_srli_epi32(__m256i, int);
	extern __m256i __cdecl _mm256_srli_epi64(__m256i, int);

	extern __m256i __cdecl _mm256_srlv_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_srlv_epi64(__m256i, __m256i);

	extern __m128i __cdecl _mm_srlv_epi32(__m128i, __m128i);
	extern __m128i __cdecl _mm_srlv_epi64(__m128i, __m128i);





	extern __m128i __cdecl _mm_blend_epi32(__m128i, __m128i, const int);

	extern __m256i __cdecl _mm256_blend_epi32(__m256i, __m256i, const int);

	extern __m256i __cdecl _mm256_alignr_epi8(__m256i, __m256i, const int);

	extern __m256i __cdecl _mm256_blendv_epi8(__m256i, __m256i, __m256i);
	extern __m256i __cdecl _mm256_blend_epi16(__m256i, __m256i, const int);

	extern __m256i __cdecl _mm256_packs_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_packs_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_packus_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_packus_epi32(__m256i, __m256i);

	extern __m256i __cdecl _mm256_unpackhi_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_unpackhi_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_unpackhi_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_unpackhi_epi64(__m256i, __m256i);

	extern __m256i __cdecl _mm256_unpacklo_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_unpacklo_epi16(__m256i, __m256i);
	extern __m256i __cdecl _mm256_unpacklo_epi32(__m256i, __m256i);
	extern __m256i __cdecl _mm256_unpacklo_epi64(__m256i, __m256i);

	extern __m256i __cdecl _mm256_shuffle_epi8(__m256i, __m256i);
	extern __m256i __cdecl _mm256_shuffle_epi32(__m256i, const int);

	extern __m256i __cdecl _mm256_shufflehi_epi16(__m256i, const int);
	extern __m256i __cdecl _mm256_shufflelo_epi16(__m256i, const int);

	extern __m128i __cdecl _mm256_extracti128_si256(__m256i, const int);
	extern __m256i __cdecl _mm256_inserti128_si256(__m256i, __m128i, const int);





	extern __m128  __cdecl _mm_broadcastss_ps(__m128);
	extern __m128d __cdecl _mm_broadcastsd_pd(__m128d);

	extern __m128i __cdecl _mm_broadcastb_epi8(__m128i);
	extern __m128i __cdecl _mm_broadcastw_epi16(__m128i);
	extern __m128i __cdecl _mm_broadcastd_epi32(__m128i);
	extern __m128i __cdecl _mm_broadcastq_epi64(__m128i);

	extern __m256  __cdecl _mm256_broadcastss_ps(__m128);
	extern __m256d __cdecl _mm256_broadcastsd_pd(__m128d);

	extern __m256i __cdecl _mm256_broadcastb_epi8(__m128i);
	extern __m256i __cdecl _mm256_broadcastw_epi16(__m128i);
	extern __m256i __cdecl _mm256_broadcastd_epi32(__m128i);
	extern __m256i __cdecl _mm256_broadcastq_epi64(__m128i);

	extern __m256i __cdecl _mm256_broadcastsi128_si256(__m128i);






	extern __m256i __cdecl _mm256_cvtepi8_epi16(__m128i);
	extern __m256i __cdecl _mm256_cvtepi8_epi32(__m128i);
	extern __m256i __cdecl _mm256_cvtepi8_epi64(__m128i);
	extern __m256i __cdecl _mm256_cvtepi16_epi32(__m128i);
	extern __m256i __cdecl _mm256_cvtepi16_epi64(__m128i);
	extern __m256i __cdecl _mm256_cvtepi32_epi64(__m128i);

	extern __m256i __cdecl _mm256_cvtepu8_epi16(__m128i);
	extern __m256i __cdecl _mm256_cvtepu8_epi32(__m128i);
	extern __m256i __cdecl _mm256_cvtepu8_epi64(__m128i);
	extern __m256i __cdecl _mm256_cvtepu16_epi32(__m128i);
	extern __m256i __cdecl _mm256_cvtepu16_epi64(__m128i);
	extern __m256i __cdecl _mm256_cvtepu32_epi64(__m128i);






	extern int __cdecl _mm256_movemask_epi8(__m256i);





	extern __m128i __cdecl _mm_maskload_epi32(int const *,
		__m128i);
	extern __m128i __cdecl _mm_maskload_epi64(__int64 const *,
		__m128i);

	extern void __cdecl _mm_maskstore_epi32(int *,
		__m128i,
		__m128i);
	extern void __cdecl _mm_maskstore_epi64(__int64 *,
		__m128i,
		__m128i);

	extern __m256i __cdecl _mm256_maskload_epi32(int const *,
		__m256i);
	extern __m256i __cdecl _mm256_maskload_epi64(__int64 const *,
		__m256i);

	extern void __cdecl _mm256_maskstore_epi32(int *,
		__m256i,
		__m256i);
	extern void __cdecl _mm256_maskstore_epi64(__int64 *,
		__m256i,
		__m256i);





	extern __m256i __cdecl _mm256_permutevar8x32_epi32(__m256i, __m256i);
	extern __m256  __cdecl _mm256_permutevar8x32_ps(__m256, __m256i);

	extern __m256i __cdecl _mm256_permute4x64_epi64(__m256i, const int);
	extern __m256d __cdecl _mm256_permute4x64_pd(__m256d, const int);

	extern __m256i __cdecl _mm256_permute2x128_si256(__m256i, __m256i, const int);





	extern __m256i  __cdecl _mm256_stream_load_si256(__m256i const *);






	extern __m256d __cdecl _mm256_mask_i32gather_pd(__m256d,
		double const *,
		__m128i,
		__m256d,
		const int);
	extern __m256  __cdecl _mm256_mask_i32gather_ps(__m256,
		float const *,
		__m256i,
		__m256,
		const int);
	extern __m256d __cdecl _mm256_mask_i64gather_pd(__m256d,
		double const *,
		__m256i,
		__m256d,
		const int);
	extern __m128  __cdecl _mm256_mask_i64gather_ps(__m128,
		float const *,
		__m256i,
		__m128,
		const int);

	extern __m128d __cdecl _mm_mask_i32gather_pd(__m128d,
		double const *,
		__m128i,
		__m128d,
		const int);
	extern __m128  __cdecl _mm_mask_i32gather_ps(__m128,
		float const *,
		__m128i,
		__m128,
		const int);
	extern __m128d __cdecl _mm_mask_i64gather_pd(__m128d,
		double const *,
		__m128i,
		__m128d,
		const int);
	extern __m128  __cdecl _mm_mask_i64gather_ps(__m128,
		float const *,
		__m128i,
		__m128,
		const int);


	extern __m256i __cdecl _mm256_mask_i32gather_epi32(__m256i,
		int const *,
		__m256i,
		__m256i,
		const int);
	extern __m256i __cdecl _mm256_mask_i32gather_epi64(__m256i,
		__int64 const *,
		__m128i,
		__m256i,
		const int);
	extern __m128i __cdecl _mm256_mask_i64gather_epi32(__m128i,
		int     const *,
		__m256i,
		__m128i,
		const int);
	extern __m256i __cdecl _mm256_mask_i64gather_epi64(__m256i,
		__int64 const *,
		__m256i,
		__m256i,
		const int);

	extern __m128i __cdecl _mm_mask_i32gather_epi32(__m128i,
		int const *,
		__m128i,
		__m128i,
		const int);
	extern __m128i __cdecl _mm_mask_i32gather_epi64(__m128i,
		__int64 const *,
		__m128i,
		__m128i,
		const int);
	extern __m128i __cdecl _mm_mask_i64gather_epi32(__m128i,
		int     const *,
		__m128i,
		__m128i,
		const int);
	extern __m128i __cdecl _mm_mask_i64gather_epi64(__m128i,
		__int64 const *,
		__m128i,
		__m128i,
		const int);





	extern __m256d __cdecl _mm256_i32gather_pd(double const *,
		__m128i,
		const int);
	extern __m256  __cdecl _mm256_i32gather_ps(float  const *,
		__m256i,
		const int);
	extern __m256d __cdecl _mm256_i64gather_pd(double const *,
		__m256i,
		const int);
	extern __m128  __cdecl _mm256_i64gather_ps(float  const *,
		__m256i,
		const int);

	extern __m128d __cdecl _mm_i32gather_pd(double const *,
		__m128i,
		const int);
	extern __m128  __cdecl _mm_i32gather_ps(float  const *,
		__m128i,
		const int);
	extern __m128d __cdecl _mm_i64gather_pd(double const *,
		__m128i,
		const int);
	extern __m128  __cdecl _mm_i64gather_ps(float  const *,
		__m128i,
		const int);

	extern __m256i __cdecl _mm256_i32gather_epi32(int const *,
		__m256i,
		const int);
	extern __m256i __cdecl _mm256_i32gather_epi64(__int64 const *,
		__m128i,
		const int);
	extern __m128i __cdecl _mm256_i64gather_epi32(int const *,
		__m256i,
		const int);
	extern __m256i __cdecl _mm256_i64gather_epi64(__int64 const *,
		__m256i,
		const int);

	extern __m128i __cdecl _mm_i32gather_epi32(int const *,
		__m128i,
		const int);
	extern __m128i __cdecl _mm_i32gather_epi64(__int64 const *,
		__m128i,
		const int);
	extern __m128i __cdecl _mm_i64gather_epi32(int     const *,
		__m128i,
		const int);
	extern __m128i __cdecl _mm_i64gather_epi64(__int64 const *,
		__m128i,
		const int);







	extern unsigned int     _bextr_u32(unsigned int,
		unsigned int,
		unsigned int);
	extern unsigned int     _blsi_u32(unsigned int);
	extern unsigned int     _blsmsk_u32(unsigned int);
	extern unsigned int     _blsr_u32(unsigned int);
	extern unsigned int     _bzhi_u32(unsigned int,
		unsigned int);
	extern unsigned int     _mulx_u32(unsigned int,
		unsigned int,
		unsigned int *);
	extern unsigned int     _pdep_u32(unsigned int,
		unsigned int);
	extern unsigned int     _pext_u32(unsigned int,
		unsigned int);
	extern unsigned int     _rorx_u32(unsigned int,
		const unsigned int);
	extern int              _sarx_i32(int,
		unsigned int);
	extern unsigned int     _shlx_u32(unsigned int,
		unsigned int);
	extern unsigned int     _shrx_u32(unsigned int,
		unsigned int);


	extern unsigned __int64 _bextr_u64(unsigned __int64,
		unsigned int,
		unsigned int);
	extern unsigned __int64 _blsi_u64(unsigned __int64);
	extern unsigned __int64 _blsmsk_u64(unsigned __int64);
	extern unsigned __int64 _blsr_u64(unsigned __int64);
	extern unsigned __int64 _bzhi_u64(unsigned __int64,
		unsigned int);
	extern unsigned __int64 _mulx_u64(unsigned __int64,
		unsigned __int64,
		unsigned __int64 *);
	extern unsigned __int64 _pdep_u64(unsigned __int64,
		unsigned __int64);
	extern unsigned __int64 _pext_u64(unsigned __int64,
		unsigned __int64);
	extern unsigned __int64 _rorx_u64(unsigned __int64,
		const unsigned int);
	extern __int64          _sarx_i64(__int64,
		unsigned int);
	extern unsigned __int64 _shlx_u64(unsigned __int64,
		unsigned int);
	extern unsigned __int64 _shrx_u64(unsigned __int64,
		unsigned int);









	extern unsigned int     _lzcnt_u32(unsigned int);

	extern unsigned __int64 _lzcnt_u64(unsigned __int64);









	extern unsigned int     _tzcnt_u32(unsigned int);

	extern unsigned __int64 _tzcnt_u64(unsigned __int64);







	extern void __cdecl _invpcid(unsigned int, void *);


	extern void _Store_HLERelease(long volatile *, long);
	extern void _StorePointer_HLERelease(void * volatile *, void *);

	extern long _InterlockedExchange_HLEAcquire(long volatile *, long);
	extern long _InterlockedExchange_HLERelease(long volatile *, long);
	extern void * _InterlockedExchangePointer_HLEAcquire(void *volatile *, void *);
	extern void * _InterlockedExchangePointer_HLERelease(void *volatile *, void *);

	extern long _InterlockedCompareExchange_HLEAcquire(long volatile *, long, long);
	extern long _InterlockedCompareExchange_HLERelease(long volatile *, long, long);
	extern __int64 _InterlockedCompareExchange64_HLEAcquire(__int64 volatile *, __int64, __int64);
	extern __int64 _InterlockedCompareExchange64_HLERelease(__int64 volatile *, __int64, __int64);
	extern void * _InterlockedCompareExchangePointer_HLEAcquire(void *volatile *, void *, void *);
	extern void * _InterlockedCompareExchangePointer_HLERelease(void *volatile *, void *, void *);

	extern long _InterlockedExchangeAdd_HLEAcquire(long volatile *, long);
	extern long _InterlockedExchangeAdd_HLERelease(long volatile *, long);

	extern long _InterlockedAnd_HLEAcquire(long volatile *, long);
	extern long _InterlockedAnd_HLERelease(long volatile *, long);
	extern long _InterlockedOr_HLEAcquire(long volatile *, long);
	extern long _InterlockedOr_HLERelease(long volatile *, long);
	extern long _InterlockedXor_HLEAcquire(long volatile *, long);
	extern long _InterlockedXor_HLERelease(long volatile *, long);

	extern unsigned char _interlockedbittestandset_HLEAcquire(long *, long);
	extern unsigned char _interlockedbittestandset_HLERelease(long *, long);
	extern unsigned char _interlockedbittestandreset_HLEAcquire(long *, long);
	extern unsigned char _interlockedbittestandreset_HLERelease(long *, long);


	extern void _Store64_HLERelease(__int64 volatile *, __int64);
	extern __int64 _InterlockedExchange64_HLEAcquire(__int64 volatile *, __int64);
	extern __int64 _InterlockedExchange64_HLERelease(__int64 volatile *, __int64);

	extern __int64 _InterlockedExchangeAdd64_HLEAcquire(__int64 volatile *, __int64);
	extern __int64 _InterlockedExchangeAdd64_HLERelease(__int64 volatile *, __int64);

	extern __int64 _InterlockedAnd64_HLEAcquire(__int64 volatile *, __int64);
	extern __int64 _InterlockedAnd64_HLERelease(__int64 volatile *, __int64);
	extern __int64 _InterlockedOr64_HLEAcquire(__int64 volatile *, __int64);
	extern __int64 _InterlockedOr64_HLERelease(__int64 volatile *, __int64);
	extern __int64 _InterlockedXor64_HLEAcquire(__int64 volatile *, __int64);
	extern __int64 _InterlockedXor64_HLERelease(__int64 volatile *, __int64);

	extern unsigned char _interlockedbittestandset64_HLEAcquire(__int64 *, __int64);
	extern unsigned char _interlockedbittestandset64_HLERelease(__int64 *, __int64);
	extern unsigned char _interlockedbittestandreset64_HLEAcquire(__int64 *, __int64);
	extern unsigned char _interlockedbittestandreset64_HLERelease(__int64 *, __int64);












	extern unsigned int     __cdecl _xbegin(void);
	extern void             __cdecl _xend(void);
	extern void             __cdecl _xabort(const unsigned int);
	extern unsigned char    __cdecl _xtest(void);








	extern int __cdecl _rdseed16_step(unsigned short *);
	extern int __cdecl _rdseed32_step(unsigned int *);

	extern int __cdecl _rdseed64_step(unsigned __int64 *);











	extern unsigned char __cdecl _addcarryx_u32(unsigned char,
		unsigned int,
		unsigned int,
		unsigned int *);



	extern unsigned char __cdecl _addcarryx_u64(unsigned char,
		unsigned __int64,
		unsigned __int64,
		unsigned __int64 *);






	extern unsigned short   __cdecl _load_be_u16(void const*);
	extern unsigned int     __cdecl _load_be_u32(void const*);
	extern unsigned __int64 __cdecl _load_be_u64(void const*);







	extern void __cdecl _store_be_u16(void *, unsigned short);
	extern void __cdecl _store_be_u32(void *, unsigned int);
	extern void __cdecl _store_be_u64(void *, unsigned __int64);







	extern __m128i __cdecl _mm_sha1msg1_epu32(__m128i, __m128i);
	extern __m128i __cdecl _mm_sha1msg2_epu32(__m128i, __m128i);
	extern __m128i __cdecl _mm_sha1nexte_epu32(__m128i, __m128i);
	extern __m128i __cdecl _mm_sha1rnds4_epu32(__m128i, __m128i, const int);

	extern __m128i __cdecl _mm_sha256msg1_epu32(__m128i, __m128i);
	extern __m128i __cdecl _mm_sha256msg2_epu32(__m128i, __m128i);
	extern __m128i __cdecl _mm_sha256rnds2_epu32(__m128i, __m128i, __m128i);




	extern void * __cdecl _bnd_set_ptr_bounds(const void *, size_t);
	extern void * __cdecl _bnd_narrow_ptr_bounds(const void *, const void *, size_t);
	extern void * __cdecl _bnd_copy_ptr_bounds(const void *, const void *);
	extern void * __cdecl _bnd_init_ptr_bounds(const void *);
	extern void __cdecl _bnd_store_ptr_bounds(const void **, const void *);
	extern void __cdecl _bnd_chk_ptr_lbounds(const void *);
	extern void __cdecl _bnd_chk_ptr_ubounds(const void *);
	extern void __cdecl _bnd_chk_ptr_bounds(const void *, size_t);
	extern void * __cdecl _bnd_load_ptr_bounds(const void **, const void *);
	extern const void * __cdecl _bnd_get_ptr_lbound(const void *);
	extern const void * __cdecl _bnd_get_ptr_ubound(const void *);


};




















#pragma once


















extern "C" {






























































































	__m128 _mm_macc_ps(__m128, __m128, __m128);
	__m128d _mm_macc_pd(__m128d, __m128d, __m128d);
	__m128 _mm_macc_ss(__m128, __m128, __m128);
	__m128d _mm_macc_sd(__m128d, __m128d, __m128d);
	__m128 _mm_maddsub_ps(__m128, __m128, __m128);
	__m128d _mm_maddsub_pd(__m128d, __m128d, __m128d);
	__m128 _mm_msubadd_ps(__m128, __m128, __m128);
	__m128d _mm_msubadd_pd(__m128d, __m128d, __m128d);
	__m128 _mm_msub_ps(__m128, __m128, __m128);
	__m128d _mm_msub_pd(__m128d, __m128d, __m128d);
	__m128 _mm_msub_ss(__m128, __m128, __m128);
	__m128d _mm_msub_sd(__m128d, __m128d, __m128d);
	__m128 _mm_nmacc_ps(__m128, __m128, __m128);
	__m128d _mm_nmacc_pd(__m128d, __m128d, __m128d);
	__m128 _mm_nmacc_ss(__m128, __m128, __m128);
	__m128d _mm_nmacc_sd(__m128d, __m128d, __m128d);
	__m128 _mm_nmsub_ps(__m128, __m128, __m128);
	__m128d _mm_nmsub_pd(__m128d, __m128d, __m128d);
	__m128 _mm_nmsub_ss(__m128, __m128, __m128);
	__m128d _mm_nmsub_sd(__m128d, __m128d, __m128d);


	__m128i _mm_maccs_epi16(__m128i, __m128i, __m128i);
	__m128i _mm_macc_epi16(__m128i, __m128i, __m128i);
	__m128i _mm_maccsd_epi16(__m128i, __m128i, __m128i);
	__m128i _mm_maccd_epi16(__m128i, __m128i, __m128i);
	__m128i _mm_maccs_epi32(__m128i, __m128i, __m128i);
	__m128i _mm_macc_epi32(__m128i, __m128i, __m128i);
	__m128i _mm_maccslo_epi32(__m128i, __m128i, __m128i);
	__m128i _mm_macclo_epi32(__m128i, __m128i, __m128i);
	__m128i _mm_maccshi_epi32(__m128i, __m128i, __m128i);
	__m128i _mm_macchi_epi32(__m128i, __m128i, __m128i);
	__m128i _mm_maddsd_epi16(__m128i, __m128i, __m128i);
	__m128i _mm_maddd_epi16(__m128i, __m128i, __m128i);


	__m128i _mm_haddw_epi8(__m128i);
	__m128i _mm_haddd_epi8(__m128i);
	__m128i _mm_haddq_epi8(__m128i);
	__m128i _mm_haddd_epi16(__m128i);
	__m128i _mm_haddq_epi16(__m128i);
	__m128i _mm_haddq_epi32(__m128i);
	__m128i _mm_haddw_epu8(__m128i);
	__m128i _mm_haddd_epu8(__m128i);
	__m128i _mm_haddq_epu8(__m128i);
	__m128i _mm_haddd_epu16(__m128i);
	__m128i _mm_haddq_epu16(__m128i);
	__m128i _mm_haddq_epu32(__m128i);
	__m128i _mm_hsubw_epi8(__m128i);
	__m128i _mm_hsubd_epi16(__m128i);
	__m128i _mm_hsubq_epi32(__m128i);


	__m128i _mm_cmov_si128(__m128i, __m128i, __m128i);
	__m128i _mm_perm_epi8(__m128i, __m128i, __m128i);


	__m128i _mm_rot_epi8(__m128i, __m128i);
	__m128i _mm_rot_epi16(__m128i, __m128i);
	__m128i _mm_rot_epi32(__m128i, __m128i);
	__m128i _mm_rot_epi64(__m128i, __m128i);
	__m128i _mm_roti_epi8(__m128i, int);
	__m128i _mm_roti_epi16(__m128i, int);
	__m128i _mm_roti_epi32(__m128i, int);
	__m128i _mm_roti_epi64(__m128i, int);
	__m128i _mm_shl_epi8(__m128i, __m128i);
	__m128i _mm_shl_epi16(__m128i, __m128i);
	__m128i _mm_shl_epi32(__m128i, __m128i);
	__m128i _mm_shl_epi64(__m128i, __m128i);
	__m128i _mm_sha_epi8(__m128i, __m128i);
	__m128i _mm_sha_epi16(__m128i, __m128i);
	__m128i _mm_sha_epi32(__m128i, __m128i);
	__m128i _mm_sha_epi64(__m128i, __m128i);



	__m128i _mm_com_epu8(__m128i, __m128i, int);
	__m128i _mm_com_epu16(__m128i, __m128i, int);
	__m128i _mm_com_epu32(__m128i, __m128i, int);
	__m128i _mm_com_epu64(__m128i, __m128i, int);
	__m128i _mm_com_epi8(__m128i, __m128i, int);
	__m128i _mm_com_epi16(__m128i, __m128i, int);
	__m128i _mm_com_epi32(__m128i, __m128i, int);
	__m128i _mm_com_epi64(__m128i, __m128i, int);



	__m128 _mm_frcz_ps(__m128);
	__m128d _mm_frcz_pd(__m128d);
	__m128 _mm_frcz_ss(__m128, __m128);
	__m128d _mm_frcz_sd(__m128d, __m128d);








	__m128 _mm_permute2_ps(__m128, __m128, __m128i, int);
	__m128d _mm_permute2_pd(__m128d, __m128d, __m128i, int);



	__m256 _mm256_macc_ps(__m256, __m256, __m256);
	__m256d _mm256_macc_pd(__m256d, __m256d, __m256d);
	__m256 _mm256_maddsub_ps(__m256, __m256, __m256);
	__m256d _mm256_maddsub_pd(__m256d, __m256d, __m256d);
	__m256 _mm256_msubadd_ps(__m256, __m256, __m256);
	__m256d _mm256_msubadd_pd(__m256d, __m256d, __m256d);
	__m256 _mm256_msub_ps(__m256, __m256, __m256);
	__m256d _mm256_msub_pd(__m256d, __m256d, __m256d);
	__m256 _mm256_nmacc_ps(__m256, __m256, __m256);
	__m256d _mm256_nmacc_pd(__m256d, __m256d, __m256d);
	__m256 _mm256_nmsub_ps(__m256, __m256, __m256);
	__m256d _mm256_nmsub_pd(__m256d, __m256d, __m256d);
	__m256i _mm256_cmov_si256(__m256i, __m256i, __m256i);
	__m256 _mm256_frcz_ps(__m256);
	__m256d _mm256_frcz_pd(__m256d);
	__m256 _mm256_permute2_ps(__m256, __m256, __m256i, int);
	__m256d _mm256_permute2_pd(__m256d, __m256d, __m256i, int);


	void __llwpcb(void *);
	void *__slwpcb();
	void __lwpval32(unsigned int, unsigned int, unsigned int);
	unsigned char __lwpins32(unsigned int, unsigned int, unsigned int);

	void __lwpval64(unsigned __int64, unsigned int, unsigned int);
	unsigned char __lwpins64(unsigned __int64, unsigned int, unsigned int);



	unsigned int _bextr_u32(unsigned int, unsigned int, unsigned int);
	unsigned int _andn_u32(unsigned int, unsigned int);
	unsigned int _tzcnt_u32(unsigned int);
	unsigned int _lzcnt_u32(unsigned int);
	unsigned int _blsr_u32(unsigned int);
	unsigned int _blsmsk_u32(unsigned int);
	unsigned int _blsi_u32(unsigned int);

	unsigned __int64 _bextr_u64(unsigned __int64, unsigned int, unsigned int);
	unsigned __int64 _andn_u64(unsigned __int64, unsigned __int64);
	unsigned __int64 _tzcnt_u64(unsigned __int64);
	unsigned __int64 _lzcnt_u64(unsigned __int64);
	unsigned __int64 _blsr_u64(unsigned __int64);
	unsigned __int64 _blsmsk_u64(unsigned __int64);
	unsigned __int64 _blsi_u64(unsigned __int64);



	unsigned int _bextri_u32(unsigned int, unsigned int);
	unsigned int _blcfill_u32(unsigned int);
	unsigned int _blsfill_u32(unsigned int);
	unsigned int _blcs_u32(unsigned int);
	unsigned int _tzmsk_u32(unsigned int);
	unsigned int _blcic_u32(unsigned int);
	unsigned int _blsic_u32(unsigned int);
	unsigned int _t1mskc_u32(unsigned int);
	unsigned int _blcmsk_u32(unsigned int);
	unsigned int _blci_u32(unsigned int);

	unsigned __int64 _bextri_u64(unsigned __int64, unsigned int);
	unsigned __int64 _blcfill_u64(unsigned __int64);
	unsigned __int64 _blsfill_u64(unsigned __int64);
	unsigned __int64 _blcs_u64(unsigned __int64);
	unsigned __int64 _tzmsk_u64(unsigned __int64);
	unsigned __int64 _blcic_u64(unsigned __int64);
	unsigned __int64 _blsic_u64(unsigned __int64);
	unsigned __int64 _t1mskc_u64(unsigned __int64);
	unsigned __int64 _blcmsk_u64(unsigned __int64);
	unsigned __int64 _blci_u64(unsigned __int64);


	void _mm_monitorx(void const *, unsigned int, unsigned int);
	void _mm_mwaitx(unsigned int, unsigned int, unsigned int);

	void _mm_clzero(void const *);


};
























extern "C" {




















































































	void * _AddressOfReturnAddress(void);
	unsigned char _BitScanForward(unsigned long * _Index, unsigned long _Mask);
	unsigned char _BitScanForward64(unsigned long * _Index, unsigned __int64 _Mask);

	unsigned char _BitScanReverse(unsigned long * _Index, unsigned long _Mask);
	unsigned char _BitScanReverse64(unsigned long * _Index, unsigned __int64 _Mask);
























	long _InterlockedAnd(long volatile * _Value, long _Mask);
	short _InterlockedAnd16(short volatile * _Value, short _Mask);


	short _InterlockedAnd16_np(short volatile * _Value, short _Mask);

	__int64 _InterlockedAnd64(__int64 volatile * _Value, __int64 _Mask);


	__int64 _InterlockedAnd64_np(__int64 volatile * _Value, __int64 _Mask);

	char _InterlockedAnd8(char volatile * _Value, char _Mask);


	char _InterlockedAnd8_np(char volatile * _Value, char _Mask);



	long _InterlockedAnd_np(long volatile * _Value, long _Mask);

	long  _InterlockedCompareExchange(long volatile * _Destination, long _Exchange, long _Comparand);

	unsigned char _InterlockedCompareExchange128(__int64 volatile * _Destination, __int64 _ExchangeHigh, __int64 _ExchangeLow, __int64 * _ComparandResult);


	unsigned char _InterlockedCompareExchange128_np(__int64 volatile * _Destination, __int64 _ExchangeHigh, __int64 _ExchangeLow, __int64 * _ComparandResult);

	short _InterlockedCompareExchange16(short volatile * _Destination, short _Exchange, short _Comparand);


	short _InterlockedCompareExchange16_np(short volatile * _Destination, short _Exchange, short _Comparand);

	__int64 _InterlockedCompareExchange64(__int64 volatile * _Destination, __int64 _Exchange, __int64 _Comparand);


	__int64 _InterlockedCompareExchange64_np(__int64 volatile * _Destination, __int64 _Exchange, __int64 _Comparand);

	char _InterlockedCompareExchange8(char volatile * _Destination, char _Exchange, char _Comparand);



	void * _InterlockedCompareExchangePointer(void * volatile * _Destination, void * _Exchange, void * _Comparand);


	void * _InterlockedCompareExchangePointer_np(void * volatile * _Destination, void * _Exchange, void * _Comparand);



	long _InterlockedCompareExchange_np(long volatile * _Destination, long _Exchange, long _Comparand);

	long  _InterlockedDecrement(long volatile * _Addend);

	short _InterlockedDecrement16(short volatile * _Addend);



	__int64 _InterlockedDecrement64(__int64 volatile * _Addend);






	long  _InterlockedExchange(long volatile * _Target, long _Value);

	short _InterlockedExchange16(short volatile * _Target, short _Value);



	__int64 _InterlockedExchange64(__int64 volatile * _Target, __int64 _Value);



	char _InterlockedExchange8(char volatile * _Target, char _Value);



	long  _InterlockedExchangeAdd(long volatile * _Addend, long _Value);
	short _InterlockedExchangeAdd16(short volatile * _Addend, short _Value);



	__int64 _InterlockedExchangeAdd64(__int64 volatile * _Addend, __int64 _Value);



	char _InterlockedExchangeAdd8(char volatile * _Addend, char _Value);






	void * _InterlockedExchangePointer(void * volatile * _Target, void * _Value);






	long  _InterlockedIncrement(long volatile * _Addend);

	short _InterlockedIncrement16(short volatile * _Addend);



	__int64 _InterlockedIncrement64(__int64 volatile * _Addend);






	long _InterlockedOr(long volatile * _Value, long _Mask);
	short _InterlockedOr16(short volatile * _Value, short _Mask);


	short _InterlockedOr16_np(short volatile * _Value, short _Mask);

	__int64 _InterlockedOr64(__int64 volatile * _Value, __int64 _Mask);


	__int64 _InterlockedOr64_np(__int64 volatile * _Value, __int64 _Mask);

	char _InterlockedOr8(char volatile * _Value, char _Mask);


	char _InterlockedOr8_np(char volatile * _Value, char _Mask);



	long _InterlockedOr_np(long volatile * _Value, long _Mask);

	long _InterlockedXor(long volatile * _Value, long _Mask);
	short _InterlockedXor16(short volatile * _Value, short _Mask);


	short _InterlockedXor16_np(short volatile * _Value, short _Mask);

	__int64 _InterlockedXor64(__int64 volatile * _Value, __int64 _Mask);


	__int64 _InterlockedXor64_np(__int64 volatile * _Value, __int64 _Mask);

	char _InterlockedXor8(char volatile * _Value, char _Mask);


	char _InterlockedXor8_np(char volatile * _Value, char _Mask);



	long _InterlockedXor_np(long volatile * _Value, long _Mask);









	void _ReadBarrier(void);






	void _ReadWriteBarrier(void);
	void * _ReturnAddress(void);

	void _WriteBarrier(void);









	void __addgsbyte(unsigned long, unsigned char);
	void __addgsdword(unsigned long, unsigned long);
	void __addgsqword(unsigned long, unsigned __int64);
	void __addgsword(unsigned long, unsigned short);




	void __code_seg(const char *);
	void __cpuid(int[4], int);
	void __cpuidex(int[4], int, int);
	void __cdecl __debugbreak(void);

	__int64 __emul(int, int);
	unsigned __int64 __emulu(unsigned int, unsigned int);
	__declspec(noreturn) void __fastfail(unsigned int);
	void __faststorefence(void);
	unsigned int __getcallerseflags(void);
	void __halt(void);


	unsigned char __inbyte(unsigned short);
	void __inbytestring(unsigned short, unsigned char *, unsigned long);



	void __incgsbyte(unsigned long);
	void __incgsdword(unsigned long);
	void __incgsqword(unsigned long);
	void __incgsword(unsigned long);




	unsigned long __indword(unsigned short);
	void __indwordstring(unsigned short, unsigned long *, unsigned long);
	void __int2c(void);
	void __invlpg(void *);
	unsigned short __inword(unsigned short);
	void __inwordstring(unsigned short, unsigned short *, unsigned long);









	void __lidt(void *);
	unsigned __int64 __ll_lshift(unsigned __int64, int);
	__int64 __ll_rshift(__int64, int);
	unsigned int __lzcnt(unsigned int);
	unsigned short __lzcnt16(unsigned short);
	unsigned __int64 __lzcnt64(unsigned __int64);
	void __movsb(unsigned char *, unsigned char const *, size_t);
	void __movsd(unsigned long *, unsigned long const *, size_t);
	void __movsq(unsigned long long *, unsigned long long const *, size_t);
	void __movsw(unsigned short *, unsigned short const *, size_t);
	__int64 __mulh(__int64, __int64);
	void __nop(void);
	void __nvreg_restore_fence(void);
	void __nvreg_save_fence(void);
	void __outbyte(unsigned short, unsigned char);
	void __outbytestring(unsigned short, unsigned char *, unsigned long);
	void __outdword(unsigned short, unsigned long);
	void __outdwordstring(unsigned short, unsigned long *, unsigned long);
	void __outword(unsigned short, unsigned short);
	void __outwordstring(unsigned short, unsigned short *, unsigned long);
	unsigned int __popcnt(unsigned int);
	unsigned short __popcnt16(unsigned short);
	unsigned __int64 __popcnt64(unsigned __int64);



	unsigned __int64 __rdtsc(void);
	unsigned __int64 __rdtscp(unsigned int *);
	unsigned __int64 __readcr0(void);

	unsigned __int64 __readcr2(void);

	unsigned __int64 __readcr3(void);

	unsigned __int64 __readcr4(void);

	unsigned __int64 __readcr8(void);

	unsigned __int64 __readdr(unsigned int);

	unsigned __int64 __readeflags(void);





	unsigned char __readgsbyte(unsigned long);
	unsigned long __readgsdword(unsigned long);
	unsigned __int64 __readgsqword(unsigned long);
	unsigned short __readgsword(unsigned long);
	unsigned __int64 __readmsr(unsigned long);
	unsigned __int64 __readpmc(unsigned long);




	unsigned long __segmentlimit(unsigned long);

	unsigned __int64 __shiftleft128(unsigned __int64 _LowPart, unsigned __int64 _HighPart, unsigned char _Shift);
	unsigned __int64 __shiftright128(unsigned __int64 _LowPart, unsigned __int64 _HighPart, unsigned char _Shift);
	void __sidt(void *);

	void __stosb(unsigned char *, unsigned char, size_t);
	void __stosd(unsigned long *, unsigned long, size_t);
	void __stosq(unsigned __int64 *, unsigned __int64, size_t);
	void __stosw(unsigned short *, unsigned short, size_t);
	void __svm_clgi(void);
	void __svm_invlpga(void *, int);
	void __svm_skinit(int);
	void __svm_stgi(void);
	void __svm_vmload(size_t);
	void __svm_vmrun(size_t);
	void __svm_vmsave(size_t);





	void __ud2(void);
	unsigned __int64 __ull_rshift(unsigned __int64, int);
	unsigned __int64 __umulh(unsigned __int64, unsigned __int64);
	void __vmx_off(void);
	unsigned char __vmx_on(unsigned __int64 *);
	unsigned char __vmx_vmclear(unsigned __int64 *);
	unsigned char __vmx_vmlaunch(void);
	unsigned char __vmx_vmptrld(unsigned __int64 *);
	void __vmx_vmptrst(unsigned __int64 *);
	unsigned char __vmx_vmread(size_t, size_t *);
	unsigned char __vmx_vmresume(void);
	unsigned char __vmx_vmwrite(size_t, size_t);
	void __wbinvd(void);


	void __writecr0(unsigned __int64);

	void __writecr3(unsigned __int64);

	void __writecr4(unsigned __int64);

	void __writecr8(unsigned __int64);

	void __writedr(unsigned int, unsigned __int64);

	void __writeeflags(unsigned __int64);





	void __writegsbyte(unsigned long, unsigned char);
	void __writegsdword(unsigned long, unsigned long);
	void __writegsqword(unsigned long, unsigned __int64);
	void __writegsword(unsigned long, unsigned short);
	void __writemsr(unsigned long, unsigned __int64);





	unsigned char _bittest(long const *, long);
	unsigned char _bittest64(__int64 const *, __int64);
	unsigned char _bittestandcomplement(long *, long);
	unsigned char _bittestandcomplement64(__int64 *, __int64);
	unsigned char _bittestandreset(long *, long);
	unsigned char _bittestandreset64(__int64 *, __int64);
	unsigned char _bittestandset(long *, long);
	unsigned char _bittestandset64(__int64 *, __int64);
	unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64);
	unsigned long __cdecl _byteswap_ulong(unsigned long);
	unsigned short __cdecl _byteswap_ushort(unsigned short);
	void __cdecl _disable(void);
	void __cdecl _enable(void);
	unsigned char _interlockedbittestandreset(long volatile *, long);
	unsigned char _interlockedbittestandreset64(__int64 volatile *, __int64);






	unsigned char _interlockedbittestandset(long volatile *, long);
	unsigned char _interlockedbittestandset64(__int64 volatile *, __int64);
















	unsigned long __cdecl _lrotl(unsigned long, int);
	unsigned long __cdecl _lrotr(unsigned long, int);




























































	void _m_prefetch(void *);
	void _m_prefetchw(volatile const void *);



































	__m128i _mm_abs_epi16(__m128i);
	__m128i _mm_abs_epi32(__m128i);
	__m128i _mm_abs_epi8(__m128i);



	__m128i _mm_add_epi16(__m128i, __m128i);
	__m128i _mm_add_epi32(__m128i, __m128i);
	__m128i _mm_add_epi64(__m128i, __m128i);
	__m128i _mm_add_epi8(__m128i, __m128i);
	__m128d _mm_add_pd(__m128d, __m128d);
	__m128 _mm_add_ps(__m128, __m128);
	__m128d _mm_add_sd(__m128d, __m128d);

	__m128 _mm_add_ss(__m128, __m128);
	__m128i _mm_adds_epi16(__m128i, __m128i);
	__m128i _mm_adds_epi8(__m128i, __m128i);
	__m128i _mm_adds_epu16(__m128i, __m128i);
	__m128i _mm_adds_epu8(__m128i, __m128i);
	__m128d _mm_addsub_pd(__m128d, __m128d);
	__m128 _mm_addsub_ps(__m128, __m128);
	__m128i _mm_alignr_epi8(__m128i, __m128i, int);

	__m128d _mm_and_pd(__m128d, __m128d);
	__m128 _mm_and_ps(__m128, __m128);
	__m128i _mm_and_si128(__m128i, __m128i);
	__m128d _mm_andnot_pd(__m128d, __m128d);
	__m128 _mm_andnot_ps(__m128, __m128);
	__m128i _mm_andnot_si128(__m128i, __m128i);
	__m128i _mm_avg_epu16(__m128i, __m128i);
	__m128i _mm_avg_epu8(__m128i, __m128i);
	__m128i _mm_blend_epi16(__m128i, __m128i, int);
	__m128d _mm_blend_pd(__m128d, __m128d, int);
	__m128 _mm_blend_ps(__m128, __m128, int);
	__m128i _mm_blendv_epi8(__m128i, __m128i, __m128i);
	__m128d _mm_blendv_pd(__m128d, __m128d, __m128d);
	__m128 _mm_blendv_ps(__m128, __m128, __m128);
	void _mm_clflush(void const *);
	void _mm_clflushopt(void const *);
	void _mm_clwb(void const *);
	void _mm_clzero(void const *);
	__m128i _mm_cmpeq_epi16(__m128i, __m128i);
	__m128i _mm_cmpeq_epi32(__m128i, __m128i);
	__m128i _mm_cmpeq_epi64(__m128i, __m128i);
	__m128i _mm_cmpeq_epi8(__m128i, __m128i);
	__m128d _mm_cmpeq_pd(__m128d, __m128d);
	__m128 _mm_cmpeq_ps(__m128, __m128);
	__m128d _mm_cmpeq_sd(__m128d, __m128d);
	__m128 _mm_cmpeq_ss(__m128, __m128);
	int _mm_cmpestra(__m128i, int, __m128i, int, int);
	int _mm_cmpestrc(__m128i, int, __m128i, int, int);
	int _mm_cmpestri(__m128i, int, __m128i, int, int);
	__m128i _mm_cmpestrm(__m128i, int, __m128i, int, int);
	int _mm_cmpestro(__m128i, int, __m128i, int, int);
	int _mm_cmpestrs(__m128i, int, __m128i, int, int);
	int _mm_cmpestrz(__m128i, int, __m128i, int, int);
	__m128d _mm_cmpge_pd(__m128d, __m128d);
	__m128 _mm_cmpge_ps(__m128, __m128);
	__m128d _mm_cmpge_sd(__m128d, __m128d);
	__m128 _mm_cmpge_ss(__m128, __m128);
	__m128i _mm_cmpgt_epi16(__m128i, __m128i);
	__m128i _mm_cmpgt_epi32(__m128i, __m128i);
	__m128i _mm_cmpgt_epi64(__m128i, __m128i);
	__m128i _mm_cmpgt_epi8(__m128i, __m128i);
	__m128d _mm_cmpgt_pd(__m128d, __m128d);
	__m128 _mm_cmpgt_ps(__m128, __m128);
	__m128d _mm_cmpgt_sd(__m128d, __m128d);
	__m128 _mm_cmpgt_ss(__m128, __m128);
	int _mm_cmpistra(__m128i, __m128i, int);
	int _mm_cmpistrc(__m128i, __m128i, int);
	int _mm_cmpistri(__m128i, __m128i, int);
	__m128i _mm_cmpistrm(__m128i, __m128i, int);
	int _mm_cmpistro(__m128i, __m128i, int);
	int _mm_cmpistrs(__m128i, __m128i, int);
	int _mm_cmpistrz(__m128i, __m128i, int);
	__m128d _mm_cmple_pd(__m128d, __m128d);
	__m128 _mm_cmple_ps(__m128, __m128);
	__m128d _mm_cmple_sd(__m128d, __m128d);
	__m128 _mm_cmple_ss(__m128, __m128);
	__m128i _mm_cmplt_epi16(__m128i, __m128i);
	__m128i _mm_cmplt_epi32(__m128i, __m128i);
	__m128i _mm_cmplt_epi8(__m128i, __m128i);
	__m128d _mm_cmplt_pd(__m128d, __m128d);
	__m128 _mm_cmplt_ps(__m128, __m128);
	__m128d _mm_cmplt_sd(__m128d, __m128d);
	__m128 _mm_cmplt_ss(__m128, __m128);
	__m128d _mm_cmpneq_pd(__m128d, __m128d);
	__m128 _mm_cmpneq_ps(__m128, __m128);
	__m128d _mm_cmpneq_sd(__m128d, __m128d);
	__m128 _mm_cmpneq_ss(__m128, __m128);
	__m128d _mm_cmpnge_pd(__m128d, __m128d);
	__m128 _mm_cmpnge_ps(__m128, __m128);
	__m128d _mm_cmpnge_sd(__m128d, __m128d);
	__m128 _mm_cmpnge_ss(__m128, __m128);
	__m128d _mm_cmpngt_pd(__m128d, __m128d);
	__m128 _mm_cmpngt_ps(__m128, __m128);
	__m128d _mm_cmpngt_sd(__m128d, __m128d);
	__m128 _mm_cmpngt_ss(__m128, __m128);
	__m128d _mm_cmpnle_pd(__m128d, __m128d);
	__m128 _mm_cmpnle_ps(__m128, __m128);
	__m128d _mm_cmpnle_sd(__m128d, __m128d);
	__m128 _mm_cmpnle_ss(__m128, __m128);
	__m128d _mm_cmpnlt_pd(__m128d, __m128d);
	__m128 _mm_cmpnlt_ps(__m128, __m128);
	__m128d _mm_cmpnlt_sd(__m128d, __m128d);
	__m128 _mm_cmpnlt_ss(__m128, __m128);
	__m128d _mm_cmpord_pd(__m128d, __m128d);
	__m128 _mm_cmpord_ps(__m128, __m128);
	__m128d _mm_cmpord_sd(__m128d, __m128d);
	__m128 _mm_cmpord_ss(__m128, __m128);
	__m128d _mm_cmpunord_pd(__m128d, __m128d);
	__m128 _mm_cmpunord_ps(__m128, __m128);
	__m128d _mm_cmpunord_sd(__m128d, __m128d);
	__m128 _mm_cmpunord_ss(__m128, __m128);
	int _mm_comieq_sd(__m128d, __m128d);
	int _mm_comieq_ss(__m128, __m128);
	int _mm_comige_sd(__m128d, __m128d);
	int _mm_comige_ss(__m128, __m128);
	int _mm_comigt_sd(__m128d, __m128d);
	int _mm_comigt_ss(__m128, __m128);
	int _mm_comile_sd(__m128d, __m128d);
	int _mm_comile_ss(__m128, __m128);
	int _mm_comilt_sd(__m128d, __m128d);
	int _mm_comilt_ss(__m128, __m128);
	int _mm_comineq_sd(__m128d, __m128d);
	int _mm_comineq_ss(__m128, __m128);
	unsigned int _mm_crc32_u16(unsigned int, unsigned short);
	unsigned int _mm_crc32_u32(unsigned int, unsigned int);
	unsigned __int64 _mm_crc32_u64(unsigned __int64, unsigned __int64);
	unsigned int _mm_crc32_u8(unsigned int, unsigned char);


	__m128 _mm_cvt_si2ss(__m128, int);
	int _mm_cvt_ss2si(__m128);
	__m128i _mm_cvtepi16_epi32(__m128i);
	__m128i _mm_cvtepi16_epi64(__m128i);
	__m128i _mm_cvtepi32_epi64(__m128i);
	__m128d _mm_cvtepi32_pd(__m128i);
	__m128 _mm_cvtepi32_ps(__m128i);
	__m128i _mm_cvtepi8_epi16(__m128i);
	__m128i _mm_cvtepi8_epi32(__m128i);
	__m128i _mm_cvtepi8_epi64(__m128i);
	__m128i _mm_cvtepu16_epi32(__m128i);
	__m128i _mm_cvtepu16_epi64(__m128i);
	__m128i _mm_cvtepu32_epi64(__m128i);
	__m128i _mm_cvtepu8_epi16(__m128i);
	__m128i _mm_cvtepu8_epi32(__m128i);
	__m128i _mm_cvtepu8_epi64(__m128i);
	__m128i _mm_cvtpd_epi32(__m128d);

	__m128 _mm_cvtpd_ps(__m128d);

	__m128i _mm_cvtps_epi32(__m128);
	__m128d _mm_cvtps_pd(__m128);
	int _mm_cvtsd_si32(__m128d);
	__int64 _mm_cvtsd_si64(__m128d);
	__int64 _mm_cvtsd_si64x(__m128d);
	__m128 _mm_cvtsd_ss(__m128, __m128d);
	int _mm_cvtsi128_si32(__m128i);
	__int64 _mm_cvtsi128_si64(__m128i);
	__int64 _mm_cvtsi128_si64x(__m128i);
	__m128d _mm_cvtsi32_sd(__m128d, int);
	__m128i _mm_cvtsi32_si128(int);
	__m128d _mm_cvtsi64_sd(__m128d, __int64);
	__m128i _mm_cvtsi64_si128(__int64);
	__m128 _mm_cvtsi64_ss(__m128, __int64);
	__m128d _mm_cvtsi64x_sd(__m128d, __int64);
	__m128i _mm_cvtsi64x_si128(__int64);
	__m128 _mm_cvtsi64x_ss(__m128, __int64);
	__m128d _mm_cvtss_sd(__m128d, __m128);
	__int64 _mm_cvtss_si64(__m128);
	__int64 _mm_cvtss_si64x(__m128);

	int _mm_cvtt_ss2si(__m128);
	__m128i _mm_cvttpd_epi32(__m128d);

	__m128i _mm_cvttps_epi32(__m128);
	int _mm_cvttsd_si32(__m128d);
	__int64 _mm_cvttsd_si64(__m128d);
	__int64 _mm_cvttsd_si64x(__m128d);
	__int64 _mm_cvttss_si64(__m128);
	__int64 _mm_cvttss_si64x(__m128);
	__m128d _mm_div_pd(__m128d, __m128d);
	__m128 _mm_div_ps(__m128, __m128);
	__m128d _mm_div_sd(__m128d, __m128d);
	__m128 _mm_div_ss(__m128, __m128);
	__m128d _mm_dp_pd(__m128d, __m128d, int);
	__m128 _mm_dp_ps(__m128, __m128, int);
	int _mm_extract_epi16(__m128i, int);
	int _mm_extract_epi32(__m128i, int);
	__int64 _mm_extract_epi64(__m128i, int);
	int _mm_extract_epi8(__m128i, int);
	int _mm_extract_ps(__m128, int);
	__m128i _mm_extract_si64(__m128i, __m128i);
	__m128i _mm_extracti_si64(__m128i, int, int);
	unsigned int _mm_getcsr(void);
	__m128i _mm_hadd_epi16(__m128i, __m128i);
	__m128i _mm_hadd_epi32(__m128i, __m128i);
	__m128d _mm_hadd_pd(__m128d, __m128d);


	__m128 _mm_hadd_ps(__m128, __m128);
	__m128i _mm_hadds_epi16(__m128i, __m128i);

	__m128i _mm_hsub_epi16(__m128i, __m128i);
	__m128i _mm_hsub_epi32(__m128i, __m128i);
	__m128d _mm_hsub_pd(__m128d, __m128d);


	__m128 _mm_hsub_ps(__m128, __m128);
	__m128i _mm_hsubs_epi16(__m128i, __m128i);

	__m128i _mm_insert_epi16(__m128i, int, int);
	__m128i _mm_insert_epi32(__m128i, int, int);
	__m128i _mm_insert_epi64(__m128i, __int64, int);
	__m128i _mm_insert_epi8(__m128i, int, int);
	__m128 _mm_insert_ps(__m128, __m128, int);
	__m128i _mm_insert_si64(__m128i, __m128i);
	__m128i _mm_inserti_si64(__m128i, __m128i, int, int);
	__m128i _mm_lddqu_si128(__m128i const *);
	void _mm_lfence(void);
	__m128d _mm_load1_pd(double const *);
	__m128d _mm_load_pd(double const *);
	__m128 _mm_load_ps(float const *);
	__m128 _mm_load_ps1(float const *);
	__m128d _mm_load_sd(double const *);
	__m128i _mm_load_si128(__m128i const *);
	__m128 _mm_load_ss(float const *);
	__m128d _mm_loaddup_pd(double const *);
	__m128d _mm_loadh_pd(__m128d, double const *);
	__m128 _mm_loadh_pi(__m128, __m64 const *);
	__m128i _mm_loadl_epi64(__m128i const *);
	__m128d _mm_loadl_pd(__m128d, double const *);
	__m128 _mm_loadl_pi(__m128, __m64 const *);
	__m128d _mm_loadr_pd(double const *);
	__m128 _mm_loadr_ps(float const *);
	__m128d _mm_loadu_pd(double const *);
	__m128 _mm_loadu_ps(float const *);
	__m128i _mm_loadu_si128(__m128i const *);
	__m128i _mm_madd_epi16(__m128i, __m128i);
	__m128i _mm_maddubs_epi16(__m128i, __m128i);

	void _mm_maskmoveu_si128(__m128i, __m128i, char *);
	__m128i _mm_max_epi16(__m128i, __m128i);
	__m128i _mm_max_epi32(__m128i, __m128i);
	__m128i _mm_max_epi8(__m128i, __m128i);
	__m128i _mm_max_epu16(__m128i, __m128i);
	__m128i _mm_max_epu32(__m128i, __m128i);
	__m128i _mm_max_epu8(__m128i, __m128i);
	__m128d _mm_max_pd(__m128d, __m128d);
	__m128 _mm_max_ps(__m128, __m128);
	__m128d _mm_max_sd(__m128d, __m128d);
	__m128 _mm_max_ss(__m128, __m128);
	void _mm_mfence(void);
	__m128i _mm_min_epi16(__m128i, __m128i);
	__m128i _mm_min_epi32(__m128i, __m128i);
	__m128i _mm_min_epi8(__m128i, __m128i);
	__m128i _mm_min_epu16(__m128i, __m128i);
	__m128i _mm_min_epu32(__m128i, __m128i);
	__m128i _mm_min_epu8(__m128i, __m128i);
	__m128d _mm_min_pd(__m128d, __m128d);
	__m128 _mm_min_ps(__m128, __m128);
	__m128d _mm_min_sd(__m128d, __m128d);
	__m128 _mm_min_ss(__m128, __m128);
	__m128i _mm_minpos_epu16(__m128i);
	void _mm_monitor(void const *, unsigned int, unsigned int);
	__m128i _mm_move_epi64(__m128i);
	__m128d _mm_move_sd(__m128d, __m128d);
	__m128 _mm_move_ss(__m128, __m128);
	__m128d _mm_movedup_pd(__m128d);
	__m128 _mm_movehdup_ps(__m128);
	__m128 _mm_movehl_ps(__m128, __m128);
	__m128 _mm_moveldup_ps(__m128);
	__m128 _mm_movelh_ps(__m128, __m128);
	int _mm_movemask_epi8(__m128i);
	int _mm_movemask_pd(__m128d);
	int _mm_movemask_ps(__m128);


	__m128i _mm_mpsadbw_epu8(__m128i, __m128i, int);
	__m128i _mm_mul_epi32(__m128i, __m128i);
	__m128i _mm_mul_epu32(__m128i, __m128i);
	__m128d _mm_mul_pd(__m128d, __m128d);
	__m128 _mm_mul_ps(__m128, __m128);
	__m128d _mm_mul_sd(__m128d, __m128d);
	__m128 _mm_mul_ss(__m128, __m128);

	__m128i _mm_mulhi_epi16(__m128i, __m128i);
	__m128i _mm_mulhi_epu16(__m128i, __m128i);
	__m128i _mm_mulhrs_epi16(__m128i, __m128i);

	__m128i _mm_mullo_epi16(__m128i, __m128i);
	__m128i _mm_mullo_epi32(__m128i, __m128i);
	void _mm_mwait(unsigned int, unsigned int);
	__m128d _mm_or_pd(__m128d, __m128d);
	__m128 _mm_or_ps(__m128, __m128);
	__m128i _mm_or_si128(__m128i, __m128i);
	__m128i _mm_packs_epi16(__m128i, __m128i);
	__m128i _mm_packs_epi32(__m128i, __m128i);
	__m128i _mm_packus_epi16(__m128i, __m128i);
	__m128i _mm_packus_epi32(__m128i, __m128i);
	void _mm_pause(void);
	int _mm_popcnt_u32(unsigned int);
	__int64 _mm_popcnt_u64(unsigned __int64);
	void _mm_prefetch(char const *, int);
	__m128 _mm_rcp_ps(__m128);
	__m128 _mm_rcp_ss(__m128);
	__m128d _mm_round_pd(__m128d, int);
	__m128 _mm_round_ps(__m128, int);
	__m128d _mm_round_sd(__m128d, __m128d, int);
	__m128 _mm_round_ss(__m128, __m128, int);
	__m128 _mm_rsqrt_ps(__m128);
	__m128 _mm_rsqrt_ss(__m128);
	__m128i _mm_sad_epu8(__m128i, __m128i);
	__m128i _mm_set1_epi16(short);
	__m128i _mm_set1_epi32(int);

	__m128i _mm_set1_epi64x(__int64);
	__m128i _mm_set1_epi8(char);
	__m128d _mm_set1_pd(double);



	__m128i _mm_set_epi16(short, short, short, short, short, short, short, short);
	__m128i _mm_set_epi32(int, int, int, int);

	__m128i _mm_set_epi64x(__int64, __int64);
	__m128i _mm_set_epi8(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
	__m128d _mm_set_pd(double, double);



	__m128 _mm_set_ps(float, float, float, float);
	__m128 _mm_set_ps1(float);
	__m128d _mm_set_sd(double);
	__m128 _mm_set_ss(float);
	void _mm_setcsr(unsigned int);
	__m128i _mm_setl_epi64(__m128i);
	__m128i _mm_setr_epi16(short, short, short, short, short, short, short, short);
	__m128i _mm_setr_epi32(int, int, int, int);

	__m128i _mm_setr_epi64x(__int64, __int64);
	__m128i _mm_setr_epi8(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
	__m128d _mm_setr_pd(double, double);



	__m128 _mm_setr_ps(float, float, float, float);
	__m128d _mm_setzero_pd(void);
	__m128 _mm_setzero_ps(void);
	__m128i _mm_setzero_si128(void);

	void _mm_sfence(void);
	__m128i _mm_shuffle_epi32(__m128i, int);
	__m128i _mm_shuffle_epi8(__m128i, __m128i);
	__m128d _mm_shuffle_pd(__m128d, __m128d, int);

	__m128 _mm_shuffle_ps(__m128, __m128, unsigned int);
	__m128i _mm_shufflehi_epi16(__m128i, int);
	__m128i _mm_shufflelo_epi16(__m128i, int);
	__m128i _mm_sign_epi16(__m128i, __m128i);
	__m128i _mm_sign_epi32(__m128i, __m128i);
	__m128i _mm_sign_epi8(__m128i, __m128i);



	__m128i _mm_sll_epi16(__m128i, __m128i);
	__m128i _mm_sll_epi32(__m128i, __m128i);
	__m128i _mm_sll_epi64(__m128i, __m128i);
	__m128i _mm_slli_epi16(__m128i, int);
	__m128i _mm_slli_epi32(__m128i, int);
	__m128i _mm_slli_epi64(__m128i, int);
	__m128i _mm_slli_si128(__m128i, int);
	__m128d _mm_sqrt_pd(__m128d);
	__m128 _mm_sqrt_ps(__m128);
	__m128d _mm_sqrt_sd(__m128d, __m128d);
	__m128 _mm_sqrt_ss(__m128);
	__m128i _mm_sra_epi16(__m128i, __m128i);
	__m128i _mm_sra_epi32(__m128i, __m128i);
	__m128i _mm_srai_epi16(__m128i, int);
	__m128i _mm_srai_epi32(__m128i, int);
	__m128i _mm_srl_epi16(__m128i, __m128i);
	__m128i _mm_srl_epi32(__m128i, __m128i);
	__m128i _mm_srl_epi64(__m128i, __m128i);
	__m128i _mm_srli_epi16(__m128i, int);
	__m128i _mm_srli_epi32(__m128i, int);
	__m128i _mm_srli_epi64(__m128i, int);
	__m128i _mm_srli_si128(__m128i, int);
	void _mm_store1_pd(double *, __m128d);
	void _mm_store_pd(double *, __m128d);
	void _mm_store_ps(float *, __m128);
	void _mm_store_ps1(float *, __m128);
	void _mm_store_sd(double *, __m128d);
	void _mm_store_si128(__m128i *, __m128i);
	void _mm_store_ss(float *, __m128);
	void _mm_storeh_pd(double *, __m128d);
	void _mm_storeh_pi(__m64 *, __m128);
	void _mm_storel_epi64(__m128i *, __m128i);
	void _mm_storel_pd(double *, __m128d);
	void _mm_storel_pi(__m64 *, __m128);
	void _mm_storer_pd(double *, __m128d);
	void _mm_storer_ps(float *, __m128);
	void _mm_storeu_pd(double *, __m128d);
	void _mm_storeu_ps(float *, __m128);
	void _mm_storeu_si128(__m128i *, __m128i);
	__m128i _mm_stream_load_si128(const __m128i *);
	void _mm_stream_pd(double *, __m128d);

	void _mm_stream_ps(float *, __m128);
	void _mm_stream_sd(double *, __m128d);
	void _mm_stream_si128(__m128i *, __m128i);
	void _mm_stream_si32(int *, int);
	void _mm_stream_si64x(__int64 *, __int64);
	void _mm_stream_ss(float *, __m128);
	__m128i _mm_sub_epi16(__m128i, __m128i);
	__m128i _mm_sub_epi32(__m128i, __m128i);
	__m128i _mm_sub_epi64(__m128i, __m128i);
	__m128i _mm_sub_epi8(__m128i, __m128i);
	__m128d _mm_sub_pd(__m128d, __m128d);
	__m128 _mm_sub_ps(__m128, __m128);
	__m128d _mm_sub_sd(__m128d, __m128d);

	__m128 _mm_sub_ss(__m128, __m128);
	__m128i _mm_subs_epi16(__m128i, __m128i);
	__m128i _mm_subs_epi8(__m128i, __m128i);
	__m128i _mm_subs_epu16(__m128i, __m128i);
	__m128i _mm_subs_epu8(__m128i, __m128i);
	int _mm_testc_si128(__m128i, __m128i);
	int _mm_testnzc_si128(__m128i, __m128i);
	int _mm_testz_si128(__m128i, __m128i);
	int _mm_ucomieq_sd(__m128d, __m128d);
	int _mm_ucomieq_ss(__m128, __m128);
	int _mm_ucomige_sd(__m128d, __m128d);
	int _mm_ucomige_ss(__m128, __m128);
	int _mm_ucomigt_sd(__m128d, __m128d);
	int _mm_ucomigt_ss(__m128, __m128);
	int _mm_ucomile_sd(__m128d, __m128d);
	int _mm_ucomile_ss(__m128, __m128);
	int _mm_ucomilt_sd(__m128d, __m128d);
	int _mm_ucomilt_ss(__m128, __m128);
	int _mm_ucomineq_sd(__m128d, __m128d);
	int _mm_ucomineq_ss(__m128, __m128);
	__m128i _mm_unpackhi_epi16(__m128i, __m128i);
	__m128i _mm_unpackhi_epi32(__m128i, __m128i);
	__m128i _mm_unpackhi_epi64(__m128i, __m128i);
	__m128i _mm_unpackhi_epi8(__m128i, __m128i);
	__m128d _mm_unpackhi_pd(__m128d, __m128d);
	__m128 _mm_unpackhi_ps(__m128, __m128);
	__m128i _mm_unpacklo_epi16(__m128i, __m128i);
	__m128i _mm_unpacklo_epi32(__m128i, __m128i);
	__m128i _mm_unpacklo_epi64(__m128i, __m128i);
	__m128i _mm_unpacklo_epi8(__m128i, __m128i);
	__m128d _mm_unpacklo_pd(__m128d, __m128d);
	__m128 _mm_unpacklo_ps(__m128, __m128);
	__m128d _mm_xor_pd(__m128d, __m128d);
	__m128 _mm_xor_ps(__m128, __m128);
	__m128i _mm_xor_si128(__m128i, __m128i);
	__int64 _mul128(__int64 _Multiplier, __int64 _Multiplicand, __int64 * _HighProduct);
	unsigned int __cdecl _rotl(unsigned int _Value, int _Shift);
	unsigned short __cdecl _rotl16(unsigned short _Value, unsigned char _Shift);
	unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift);
	unsigned char __cdecl _rotl8(unsigned char _Value, unsigned char _Shift);
	unsigned int __cdecl _rotr(unsigned int _Value, int _Shift);
	unsigned short __cdecl _rotr16(unsigned short _Value, unsigned char _Shift);
	unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift);
	unsigned char __cdecl _rotr8(unsigned char _Value, unsigned char _Shift);
	int __cdecl _setjmp(jmp_buf);
	int __cdecl _setjmpex(jmp_buf);
	unsigned __int64 _umul128(unsigned __int64 _Multiplier, unsigned __int64 _Multiplicand, unsigned __int64 * _HighProduct);
	void _rsm(void);
	void _lgdt(void *);
	void _sgdt(void *);
	void _clac(void);
	void _stac(void);
	unsigned char __cdecl _addcarry_u8(unsigned char, unsigned char, unsigned char, unsigned char *);
	unsigned char __cdecl _subborrow_u8(unsigned char, unsigned char, unsigned char, unsigned char *);
	unsigned char __cdecl _addcarry_u16(unsigned char, unsigned short, unsigned short, unsigned short *);
	unsigned char __cdecl _subborrow_u16(unsigned char, unsigned short, unsigned short, unsigned short *);
	unsigned char __cdecl _addcarry_u32(unsigned char, unsigned int, unsigned int, unsigned int *);
	unsigned char __cdecl _subborrow_u32(unsigned char, unsigned int, unsigned int, unsigned int *);
	unsigned char __cdecl _addcarry_u64(unsigned char, unsigned __int64, unsigned __int64, unsigned __int64 *);
	unsigned char __cdecl _subborrow_u64(unsigned char, unsigned __int64, unsigned __int64, unsigned __int64 *);
	void _mm_monitorx(void const *, unsigned int, unsigned int);
	void _mm_mwaitx(unsigned int, unsigned int, unsigned int);


}







#pragma once





#pragma once















#pragma once






#pragma once





#pragma once


















#pragma once













#pragma once










#pragma once





__pragma(pack(push, 8)) extern "C" {


















































#pragma detect_mismatch("_CRT_STDIO_ISO_WIDE_SPECIFIERS", "0")






	__declspec(noinline) __inline unsigned __int64* __cdecl __local_stdio_printf_options(void)
	{
		static unsigned __int64 _OptionsStorage;
		return &_OptionsStorage;
	}




	__declspec(noinline) __inline unsigned __int64* __cdecl __local_stdio_scanf_options(void)
	{
		static unsigned __int64 _OptionsStorage;
		return &_OptionsStorage;
	}



















} __pragma(pack(pop))




__pragma(pack(push, 8)) extern "C" {









	typedef struct _iobuf
	{
		void* _Placeholder;
	} FILE;


	__declspec(dllimport) FILE* __cdecl __acrt_iob_func(unsigned);















	__declspec(dllimport) wint_t __cdecl fgetwc(
		FILE* _Stream
	);


	__declspec(dllimport) wint_t __cdecl _fgetwchar(void);


	__declspec(dllimport) wint_t __cdecl fputwc(
		wchar_t _Character,
		FILE*   _Stream);


	__declspec(dllimport) wint_t __cdecl _fputwchar(
		wchar_t _Character
	);


	__declspec(dllimport) wint_t __cdecl getwc(
		FILE* _Stream
	);


	__declspec(dllimport) wint_t __cdecl getwchar(void);




	__declspec(dllimport) wchar_t* __cdecl fgetws(
		wchar_t* _Buffer,
		int      _BufferCount,
		FILE*    _Stream
	);


	__declspec(dllimport) int __cdecl fputws(
		wchar_t const* _Buffer,
		FILE*          _Stream
	);



	__declspec(dllimport) wchar_t* __cdecl _getws_s(
		wchar_t* _Buffer,
		size_t   _BufferCount
	);

	extern "C++" { template <size_t _Size> inline   wchar_t* __cdecl _getws_s(wchar_t(&_Buffer)[_Size]) throw() { return _getws_s(_Buffer, _Size); } }


	__declspec(dllimport) wint_t __cdecl putwc(
		wchar_t _Character,
		FILE*   _Stream
	);


	__declspec(dllimport) wint_t __cdecl putwchar(
		wchar_t _Character
	);


	__declspec(dllimport) int __cdecl _putws(
		wchar_t const* _Buffer
	);


	__declspec(dllimport) wint_t __cdecl ungetwc(
		wint_t _Character,
		FILE*  _Stream
	);


	__declspec(dllimport) FILE * __cdecl _wfdopen(
		int            _FileHandle,
		wchar_t const* _Mode
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) FILE* __cdecl _wfopen(
			wchar_t const* _FileName,
			wchar_t const* _Mode
		);


	__declspec(dllimport) errno_t __cdecl _wfopen_s(
		FILE**         _Stream,
		wchar_t const* _FileName,
		wchar_t const* _Mode
	);


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfreopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) FILE* __cdecl _wfreopen(
			wchar_t const* _FileName,
			wchar_t const* _Mode,
			FILE*          _OldStream
		);


	__declspec(dllimport) errno_t __cdecl _wfreopen_s(
		FILE**         _Stream,
		wchar_t const* _FileName,
		wchar_t const* _Mode,
		FILE*          _OldStream
	);


	__declspec(dllimport) FILE* __cdecl _wfsopen(
		wchar_t const* _FileName,
		wchar_t const* _Mode,
		int            _ShFlag
	);

	__declspec(dllimport) void __cdecl _wperror(
		wchar_t const* _ErrorMessage
	);




	__declspec(dllimport) FILE* __cdecl _wpopen(
		wchar_t const* _Command,
		wchar_t const* _Mode
	);



	__declspec(dllimport) int __cdecl _wremove(
		wchar_t const* _FileName
	);





	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wtempnam(
		wchar_t const* _Directory,
		wchar_t const* _FilePrefix
	);





	__declspec(dllimport) errno_t __cdecl _wtmpnam_s(
		wchar_t* _Buffer,
		size_t   _BufferCount
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wtmpnam_s(wchar_t(&_Buffer)[_Size]) throw() { return _wtmpnam_s(_Buffer, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wtmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  wchar_t* __cdecl _wtmpnam(wchar_t *_Buffer);









	__declspec(dllimport) wint_t __cdecl _fgetwc_nolock(
		FILE* _Stream
	);


	__declspec(dllimport) wint_t __cdecl _fputwc_nolock(
		wchar_t _Character,
		FILE*   _Stream
	);


	__declspec(dllimport) wint_t __cdecl _getwc_nolock(
		FILE* _Stream
	);


	__declspec(dllimport) wint_t __cdecl _putwc_nolock(
		wchar_t _Character,
		FILE*   _Stream
	);


	__declspec(dllimport) wint_t __cdecl _ungetwc_nolock(
		wint_t _Character,
		FILE*  _Stream
	);






















	__declspec(dllimport) int __cdecl __stdio_common_vfwprintf(
		unsigned __int64 _Options,
		FILE*            _Stream,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(
		unsigned __int64 _Options,
		FILE*            _Stream,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(
		unsigned __int64 _Options,
		FILE*            _Stream,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__inline int __cdecl _vfwprintf_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vfwprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vfwprintf(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwprintf_l(_Stream, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vfwprintf_s_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vfwprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vfwprintf_s(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList);
	}





	__inline int __cdecl _vfwprintf_p_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vfwprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vfwprintf_p(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vwprintf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vwprintf(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
	}



	__inline int __cdecl _vwprintf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vwprintf_s(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
	}





	__inline int __cdecl _vwprintf_p_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vwprintf_p(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
	}



	__inline int __cdecl _fwprintf_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl fwprintf(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _fwprintf_s_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl fwprintf_s(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl _fwprintf_p_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _fwprintf_p(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _wprintf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl wprintf(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _wprintf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl wprintf_s(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl _wprintf_p_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _wprintf_p(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}









	__declspec(dllimport) int __cdecl __stdio_common_vfwscanf(
		unsigned __int64 _Options,
		FILE*            _Stream,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__inline int __cdecl _vfwscanf_l(
		FILE*                                const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vfwscanf(
			(*__local_stdio_scanf_options()),
			_Stream, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vfwscanf(
		FILE*                                const _Stream,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwscanf_l(_Stream, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vfwscanf_s_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vfwscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Stream, _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vfwscanf_s(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList);
	}




	__inline int __cdecl _vwscanf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vwscanf(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
	}



	__inline int __cdecl _vwscanf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vwscanf_s(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
	}




	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_fwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _fwscanf_l(
			FILE*          const _Stream,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "fwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl fwscanf(
			FILE*          const _Stream,
			wchar_t const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _fwscanf_s_l(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl fwscanf_s(
		FILE*          const _Stream,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _wscanf_l(
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl wscanf(
			wchar_t const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _wscanf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl wscanf_s(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}






















	__declspec(dllimport) int __cdecl __stdio_common_vswprintf(
		unsigned __int64 _Options,
		wchar_t*         _Buffer,
		size_t           _BufferCount,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);



	__declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(
		unsigned __int64 _Options,
		wchar_t*         _Buffer,
		size_t           _BufferCount,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);



	__declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(
		unsigned __int64 _Options,
		wchar_t*         _Buffer,
		size_t           _BufferCount,
		size_t           _MaxCount,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);



	__declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(
		unsigned __int64 _Options,
		wchar_t*         _Buffer,
		size_t           _BufferCount,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vsnwprintf_l(
			wchar_t*       const _Buffer,
			size_t         const _BufferCount,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			va_list              _ArgList
		)



	{
		int const _Result = __stdio_common_vswprintf(
			(*__local_stdio_printf_options()) | (1ULL << 0),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}


#pragma warning(push)
#pragma warning(disable: 4793)



	__inline int __cdecl _vsnwprintf_s_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		size_t         const _MaxCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		int const _Result = __stdio_common_vsnwprintf_s(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vsnwprintf_s(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		size_t         const _MaxCount,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _snwprintf(wchar_t *_Buffer, size_t _BufferCount, wchar_t const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _vsnwprintf(wchar_t *_Buffer, size_t _BufferCount, wchar_t const* _Format, va_list _Args);

#pragma warning(pop)


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vsnwprintf(
			wchar_t*       _Buffer,
			size_t         _BufferCount,
			wchar_t const* _Format,
			va_list        _ArgList
		)



	{
#pragma warning(push)
#pragma warning(disable: 4996) 
		return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
#pragma warning(pop)
	}


	extern "C++" { template <size_t _Size> inline   int __cdecl _vsnwprintf_s(wchar_t(&_Buffer)[_Size], size_t _BufferCount, wchar_t const* _Format, va_list _ArgList) throw() { return _vsnwprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }



	__inline int __cdecl _vswprintf_c_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		int const _Result = __stdio_common_vswprintf(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vswprintf_c(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}




	__inline int __cdecl _vswprintf_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
#pragma warning(push)
#pragma warning(disable: 4996) 
		return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
#pragma warning(pop)
	}




	__inline int __cdecl __vswprintf_l(
		wchar_t*       const _Buffer,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
	}




	__inline int __cdecl _vswprintf(
		wchar_t*       const _Buffer,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vswprintf_l(_Buffer, (size_t)-1, _Format, 0, _ArgList);
	}




	__inline int __cdecl vswprintf(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}




	__inline int __cdecl _vswprintf_s_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		int const _Result = __stdio_common_vswprintf_s(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}





	__inline int __cdecl vswprintf_s(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}




	extern "C++" { template <size_t _Size> inline   int __cdecl vswprintf_s(wchar_t(&_Buffer)[_Size], wchar_t const* _Format, va_list _ArgList) throw() { return vswprintf_s(_Buffer, _Size, _Format, _ArgList); } }



	__inline int __cdecl _vswprintf_p_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		int const _Result = __stdio_common_vswprintf_p(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vswprintf_p(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}




	__inline int __cdecl _vscwprintf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		int const _Result = __stdio_common_vswprintf(
			(*__local_stdio_printf_options()) | (1ULL << 1),
			0, 0, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vscwprintf(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vscwprintf_l(_Format, 0, _ArgList);
	}




	__inline int __cdecl _vscwprintf_p_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		int const _Result = __stdio_common_vswprintf_p(
			(*__local_stdio_printf_options()) | (1ULL << 1),
			0, 0, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vscwprintf_p(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vscwprintf_p_l(_Format, 0, _ArgList);
	}




	__inline int __cdecl __swprintf_l(
		wchar_t*       const _Buffer,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _swprintf_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _swprintf(
		wchar_t*       const _Buffer,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl swprintf(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


#pragma warning(push)


#pragma warning(disable:4793 4996)

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "__swprintf_l_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl __swprintf_l(wchar_t *_Buffer, wchar_t const* _Format, _locale_t _Locale, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl __vswprintf_l(wchar_t *_Buffer, wchar_t const* _Format, _locale_t _Locale, va_list _Args);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _swprintf(wchar_t *_Buffer, wchar_t const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline   int __cdecl _vswprintf(wchar_t *_Buffer, wchar_t const* _Format, va_list _Args);

#pragma warning(pop)



	__inline int __cdecl _swprintf_s_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl swprintf_s(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline   int __cdecl swprintf_s(wchar_t(&_Buffer)[_Size], wchar_t const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format))))); return vswprintf_s(_Buffer, _Size, _Format, _ArgList); } __pragma(warning(pop)); }



	__inline int __cdecl _swprintf_p_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _swprintf_p(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _swprintf_c_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _swprintf_c(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _snwprintf_l(
			wchar_t*       const _Buffer,
			size_t         const _BufferCount,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snwprintf(
		wchar_t*       _Buffer,
		size_t         _BufferCount,
		wchar_t const* _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snwprintf_s_l(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		size_t         const _MaxCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snwprintf_s(
		wchar_t*       const _Buffer,
		size_t         const _BufferCount,
		size_t         const _MaxCount,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline   int __cdecl _snwprintf_s(wchar_t(&_Buffer)[_Size], size_t _BufferCount, wchar_t const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format))))); return _vsnwprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } __pragma(warning(pop)); }


	__inline int __cdecl _scwprintf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vscwprintf_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _scwprintf(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vscwprintf_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _scwprintf_p_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _scwprintf_p(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vscwprintf_p_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




#pragma warning(push)
#pragma warning(disable: 4141 4412 4793 4996 6054)



	extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		inline int swprintf(
			wchar_t*       const _Buffer,
			wchar_t const* const _Format,
			...) throw()
	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
#pragma warning(suppress: 28719)
		_Result = vswprintf(_Buffer, 2147483647, _Format, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}

	extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		inline int __cdecl vswprintf(
			wchar_t*       const _Buffer,
			wchar_t const* const _Format,
			va_list              _ArgList
		) throw()
	{
#pragma warning(suppress: 28719)
		return vswprintf(_Buffer, 2147483647, _Format, _ArgList);
	}

	extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		inline int _swprintf_l(
			wchar_t*       const _Buffer,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			...) throw()
	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}

	extern "C++" __declspec(deprecated("function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		inline int __cdecl _vswprintf_l(
			wchar_t*       const _Buffer,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			va_list              _ArgList
		) throw()
	{
		return _vswprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
	}



#pragma warning(pop)
















	__declspec(dllimport) int __cdecl __stdio_common_vswscanf(
		unsigned __int64 _Options,
		wchar_t const*   _Buffer,
		size_t           _BufferCount,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);



	__inline int __cdecl _vswscanf_l(
		wchar_t const* const _Buffer,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vswscanf(
			(*__local_stdio_scanf_options()),
			_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
	}




	__inline int __cdecl vswscanf(
		wchar_t const* _Buffer,
		wchar_t const* _Format,
		va_list        _ArgList
	)



	{
		return _vswscanf_l(_Buffer, _Format, 0, _ArgList);
	}




	__inline int __cdecl _vswscanf_s_l(
		wchar_t const* const _Buffer,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vswscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
	}






	__inline int __cdecl vswscanf_s(
		wchar_t const* const _Buffer,
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList);
	}




	extern "C++" { template <size_t _Size> inline   int __cdecl vswscanf_s(wchar_t(&_Buffer)[_Size], wchar_t const* _Format, va_list _Args) throw() { return vswscanf_s(_Buffer, _Size, _Format, _Args); } }


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vsnwscanf_l(
			wchar_t const* const _Buffer,
			size_t         const _BufferCount,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			va_list              _ArgList
		)



	{
		return __stdio_common_vswscanf(
			(*__local_stdio_scanf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);
	}




	__inline int __cdecl _vsnwscanf_s_l(
		wchar_t const* const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __stdio_common_vswscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_swscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _swscanf_l(
			wchar_t const* const _Buffer,
			wchar_t const* const _Format,
			_locale_t            _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "swscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl swscanf(
			wchar_t const* const _Buffer,
			wchar_t const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _swscanf_s_l(
		wchar_t const* const _Buffer,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}






	__inline int __cdecl swscanf_s(
		wchar_t const* const _Buffer,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _snwscanf_l(
			wchar_t const* const _Buffer,
			size_t         const _BufferCount,
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _snwscanf(
			wchar_t const* const _Buffer,
			size_t         const _BufferCount,
			wchar_t const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snwscanf_s_l(
		wchar_t const* const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snwscanf_s(
		wchar_t const* const _Buffer,
		size_t         const _BufferCount,
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}








} __pragma(pack(pop))



__pragma(pack(push, 8)) extern "C" {





















































	typedef __int64 fpos_t;




	__declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(
		FILE*   _Stream,
		char*** _Base,
		char*** _Pointer,
		int**   _Count
	);










	__declspec(dllimport) errno_t __cdecl clearerr_s(
		FILE* _Stream
	);


	__declspec(dllimport) errno_t __cdecl fopen_s(
		FILE**      _Stream,
		char const* _FileName,
		char const* _Mode
	);



	__declspec(dllimport) size_t __cdecl fread_s(
		void*  _Buffer,
		size_t _BufferSize,
		size_t _ElementSize,
		size_t _ElementCount,
		FILE*  _Stream
	);


	__declspec(dllimport) errno_t __cdecl freopen_s(
		FILE**      _Stream,
		char const* _FileName,
		char const* _Mode,
		FILE*       _OldStream
	);


	__declspec(dllimport) char* __cdecl gets_s(
		char*   _Buffer,
		rsize_t _Size
	);


	__declspec(dllimport) errno_t __cdecl tmpfile_s(
		FILE** _Stream
	);



	__declspec(dllimport) errno_t __cdecl tmpnam_s(
		char*   _Buffer,
		rsize_t _Size
	);



	__declspec(dllimport) void __cdecl clearerr(
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl fclose(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _fcloseall(void);


	__declspec(dllimport) FILE* __cdecl _fdopen(
		int         _FileHandle,
		char const* _Mode
	);


	__declspec(dllimport) int __cdecl feof(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl ferror(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl fflush(
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl fgetc(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _fgetchar(void);



	__declspec(dllimport) int __cdecl fgetpos(
		FILE*   _Stream,
		fpos_t* _Position
	);



	__declspec(dllimport) char* __cdecl fgets(
		char* _Buffer,
		int   _MaxCount,
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _fileno(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _flushall(void);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "fopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) FILE* __cdecl fopen(
			char const* _FileName,
			char const* _Mode
		);




	__declspec(dllimport) int __cdecl fputc(
		int   _Character,
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _fputchar(
		int _Character
	);



	__declspec(dllimport) int __cdecl fputs(
		char const* _Buffer,
		FILE*       _Stream
	);


	__declspec(dllimport) size_t __cdecl fread(
		void*  _Buffer,
		size_t _ElementSize,
		size_t _ElementCount,
		FILE*  _Stream
	);


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "freopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) FILE* __cdecl freopen(
			char const* _FileName,
			char const* _Mode,
			FILE*       _Stream
		);


	__declspec(dllimport) FILE* __cdecl _fsopen(
		char const* _FileName,
		char const* _Mode,
		int         _ShFlag
	);



	__declspec(dllimport) int __cdecl fsetpos(
		FILE*         _Stream,
		fpos_t const* _Position
	);



	__declspec(dllimport) int __cdecl fseek(
		FILE* _Stream,
		long  _Offset,
		int   _Origin
	);



	__declspec(dllimport) int __cdecl _fseeki64(
		FILE*   _Stream,
		__int64 _Offset,
		int     _Origin
	);



	__declspec(dllimport) long __cdecl ftell(
		FILE* _Stream
	);



	__declspec(dllimport) __int64 __cdecl _ftelli64(
		FILE* _Stream
	);


	__declspec(dllimport) size_t __cdecl fwrite(
		void const* _Buffer,
		size_t      _ElementSize,
		size_t      _ElementCount,
		FILE*       _Stream
	);



	__declspec(dllimport) int __cdecl getc(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl getchar(void);


	__declspec(dllimport) int __cdecl _getmaxstdio(void);

	extern "C++" { template <size_t _Size> inline char* __cdecl gets_s(char(&_Buffer)[_Size]) throw() { return gets_s(_Buffer, _Size); } }


	__declspec(dllimport) int __cdecl _getw(
		FILE* _Stream
	);

	__declspec(dllimport) void __cdecl perror(
		char const* _ErrorMessage
	);





	__declspec(dllimport) int __cdecl _pclose(
		FILE* _Stream
	);


	__declspec(dllimport) FILE* __cdecl _popen(
		char const* _Command,
		char const* _Mode
	);





	__declspec(dllimport) int __cdecl putc(
		int   _Character,
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl putchar(
		int _Character
	);


	__declspec(dllimport) int __cdecl puts(
		char const* _Buffer
	);



	__declspec(dllimport) int __cdecl _putw(
		int   _Word,
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl remove(
		char const* _FileName
	);


	__declspec(dllimport) int __cdecl rename(
		char const* _OldFileName,
		char const* _NewFileName
	);

	__declspec(dllimport) int __cdecl _unlink(
		char const* _FileName
	);



	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_unlink" ". See online help for details."))
		__declspec(dllimport) int __cdecl unlink(
			char const* _FileName
		);





	__declspec(dllimport) void __cdecl rewind(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _rmtmp(void);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "setvbuf" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) void __cdecl setbuf(
			FILE* _Stream,
			char* _Buffer
		);


	__declspec(dllimport) int __cdecl _setmaxstdio(
		int _Maximum
	);



	__declspec(dllimport) int __cdecl setvbuf(
		FILE*  _Stream,
		char*  _Buffer,
		int    _Mode,
		size_t _Size
	);







	__declspec(dllimport) __declspec(allocator) char* __cdecl _tempnam(
		char const* _DirectoryName,
		char const* _FilePrefix
	);





	__declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpfile_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) FILE* __cdecl tmpfile(void);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl tmpnam_s(char(&_Buffer)[_Size]) throw() { return tmpnam_s(_Buffer, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  char* __cdecl tmpnam(char *_Buffer);



	__declspec(dllimport) int __cdecl ungetc(
		int   _Character,
		FILE* _Stream
	);








	__declspec(dllimport) void __cdecl _lock_file(
		FILE* _Stream
	);

	__declspec(dllimport) void __cdecl _unlock_file(
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl _fclose_nolock(
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl _fflush_nolock(
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl _fgetc_nolock(
		FILE* _Stream
	);



	__declspec(dllimport) int __cdecl _fputc_nolock(
		int   _Character,
		FILE* _Stream
	);


	__declspec(dllimport) size_t __cdecl _fread_nolock(
		void*  _Buffer,
		size_t _ElementSize,
		size_t _ElementCount,
		FILE*  _Stream
	);



	__declspec(dllimport) size_t __cdecl _fread_nolock_s(
		void*  _Buffer,
		size_t _BufferSize,
		size_t _ElementSize,
		size_t _ElementCount,
		FILE*  _Stream
	);


	__declspec(dllimport) int __cdecl _fseek_nolock(
		FILE* _Stream,
		long  _Offset,
		int   _Origin
	);


	__declspec(dllimport) int __cdecl _fseeki64_nolock(
		FILE*   _Stream,
		__int64 _Offset,
		int     _Origin
	);


	__declspec(dllimport) long __cdecl _ftell_nolock(
		FILE* _Stream
	);


	__declspec(dllimport) __int64 __cdecl _ftelli64_nolock(
		FILE* _Stream
	);


	__declspec(dllimport) size_t __cdecl _fwrite_nolock(
		void const* _Buffer,
		size_t      _ElementSize,
		size_t      _ElementCount,
		FILE*       _Stream
	);


	__declspec(dllimport) int __cdecl _getc_nolock(
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _putc_nolock(
		int   _Character,
		FILE* _Stream
	);


	__declspec(dllimport) int __cdecl _ungetc_nolock(
		int   _Character,
		FILE* _Stream
	);


























	__declspec(dllimport) int* __cdecl __p__commode(void);



















	__declspec(dllimport) int __cdecl __stdio_common_vfprintf(
		unsigned __int64 _Options,
		FILE*            _Stream,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);

	__declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(
		unsigned __int64 _Options,
		FILE*            _Stream,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(
		unsigned __int64 _Options,
		FILE*            _Stream,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__inline int __cdecl _vfprintf_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vfprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vfprintf(
		FILE*       const _Stream,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfprintf_l(_Stream, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vfprintf_s_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vfprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vfprintf_s(
		FILE*       const _Stream,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfprintf_s_l(_Stream, _Format, 0, _ArgList);
	}





	__inline int __cdecl _vfprintf_p_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vfprintf_p(
		FILE*       const _Stream,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfprintf_p_l(_Stream, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vprintf_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vprintf(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
	}



	__inline int __cdecl _vprintf_s_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vprintf_s(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
	}





	__inline int __cdecl _vprintf_p_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vprintf_p(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
	}



	__inline int __cdecl _fprintf_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl fprintf(
		FILE*       const _Stream,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(dllimport) int __cdecl _set_printf_count_output(
		int _Value
	);

	__declspec(dllimport) int __cdecl _get_printf_count_output(void);


	__inline int __cdecl _fprintf_s_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl fprintf_s(
		FILE*       const _Stream,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl _fprintf_p_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _fprintf_p(
		FILE*       const _Stream,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _printf_l(
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl printf(
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _printf_s_l(
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl printf_s(
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl _printf_p_l(
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _printf_p(
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}








	__declspec(dllimport) int __cdecl __stdio_common_vfscanf(
		unsigned __int64 _Options,
		FILE*            _Stream,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _Arglist
	);


	__inline int __cdecl _vfscanf_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vfscanf(
			(*__local_stdio_scanf_options()),
			_Stream, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vfscanf(
		FILE*       const _Stream,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfscanf_l(_Stream, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vfscanf_s_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vfscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Stream, _Format, _Locale, _ArgList);
	}






	__inline int __cdecl vfscanf_s(
		FILE*       const _Stream,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfscanf_s_l(_Stream, _Format, 0, _ArgList);
	}





	__inline int __cdecl _vscanf_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vscanf(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
	}



	__inline int __cdecl _vscanf_s_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
	}





	__inline int __cdecl vscanf_s(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vfscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
	}




	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_fscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _fscanf_l(
			FILE*       const _Stream,
			char const* const _Format,
			_locale_t   const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "fscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl fscanf(
			FILE*       const _Stream,
			char const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _fscanf_s_l(
		FILE*       const _Stream,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl fscanf_s(
		FILE*       const _Stream,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_scanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _scanf_l(
			char const* const _Format,
			_locale_t   const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "scanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl scanf(
			char const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _scanf_s_l(
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl scanf_s(
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}












	__declspec(dllimport) int __cdecl __stdio_common_vsprintf(
		unsigned __int64 _Options,
		char*            _Buffer,
		size_t           _BufferCount,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(
		unsigned __int64 _Options,
		char*            _Buffer,
		size_t           _BufferCount,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(
		unsigned __int64 _Options,
		char*            _Buffer,
		size_t           _BufferCount,
		size_t           _MaxCount,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(
		unsigned __int64 _Options,
		char*            _Buffer,
		size_t           _BufferCount,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vsnprintf_l(
			char*       const _Buffer,
			size_t      const _BufferCount,
			char const* const _Format,
			_locale_t   const _Locale,
			va_list           _ArgList
		)



	{
		int const _Result = __stdio_common_vsprintf(
			(*__local_stdio_printf_options()) | (1ULL << 0),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vsnprintf(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
#pragma warning(push)
#pragma warning(disable: 4996) 
		return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
#pragma warning(pop)
	}















	__inline int __cdecl vsnprintf(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		int const _Result = __stdio_common_vsprintf(
			(*__local_stdio_printf_options()) | (1ULL << 1),
			_Buffer, _BufferCount, _Format, 0, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vsprintf_l(
			char*       const _Buffer,
			char const* const _Format,
			_locale_t   const _Locale,
			va_list           _ArgList
		)



	{
#pragma warning(push)
#pragma warning(disable: 4996) 
		return _vsnprintf_l(_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
#pragma warning(pop)
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl vsprintf(
			char*       const _Buffer,
			char const* const _Format,
			va_list           _ArgList
		)



	{
#pragma warning(push)
#pragma warning(disable: 4996) 
		return _vsnprintf_l(_Buffer, (size_t)-1, _Format, 0, _ArgList);
#pragma warning(pop)
	}




	__inline int __cdecl _vsprintf_s_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		int const _Result = __stdio_common_vsprintf_s(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}






	__inline int __cdecl vsprintf_s(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}


	extern "C++" { template <size_t _Size> inline   int __cdecl vsprintf_s(char(&_Buffer)[_Size], char const* _Format, va_list _ArgList) throw() { return vsprintf_s(_Buffer, _Size, _Format, _ArgList); } }





	__inline int __cdecl _vsprintf_p_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		int const _Result = __stdio_common_vsprintf_p(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vsprintf_p(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}




	__inline int __cdecl _vsnprintf_s_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		size_t      const _MaxCount,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list          _ArgList
	)



	{
		int const _Result = __stdio_common_vsnprintf_s(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vsnprintf_s(
		char*       const _Buffer,
		size_t      const _BufferCount,
		size_t      const _MaxCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
	}


	extern "C++" { template <size_t _Size> inline   int __cdecl _vsnprintf_s(char(&_Buffer)[_Size], size_t _BufferCount, char const* _Format, va_list _ArgList) throw() { return _vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }





	__inline int __cdecl vsnprintf_s(
		char*       const _Buffer,
		size_t      const _BufferCount,
		size_t      const _MaxCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
	}


	extern "C++" { template <size_t _Size> inline   int __cdecl vsnprintf_s(char(&_Buffer)[_Size], size_t _BufferCount, char const* _Format, va_list _ArgList) throw() { return vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }




	__inline int __cdecl _vscprintf_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		int const _Result = __stdio_common_vsprintf(
			(*__local_stdio_printf_options()) | (1ULL << 1),
			0, 0, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}



	__inline int __cdecl _vscprintf(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vscprintf_l(_Format, 0, _ArgList);
	}



	__inline int __cdecl _vscprintf_p_l(
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		int const _Result = __stdio_common_vsprintf_p(
			(*__local_stdio_printf_options()) | (1ULL << 1),
			0, 0, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}



	__inline int __cdecl _vscprintf_p(
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vscprintf_p_l(_Format, 0, _ArgList);
	}



	__inline int __cdecl _vsnprintf_c_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		int const _Result = __stdio_common_vsprintf(
			(*__local_stdio_printf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		return _Result < 0 ? -1 : _Result;
	}




	__inline int __cdecl _vsnprintf_c(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_sprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _sprintf_l(
			char*       const _Buffer,
			char const* const _Format,
			_locale_t   const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl sprintf(
		char*       const _Buffer,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}


#pragma warning(push)
#pragma warning(disable: 4996)
	__declspec(deprecated("This function or variable may be unsafe. Consider using " "sprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))   int __cdecl sprintf(char *_Buffer, char const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))   int __cdecl vsprintf(char *_Buffer, char const* _Format, va_list _Args);
#pragma warning(pop)



	__inline int __cdecl _sprintf_s_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}






	__inline int __cdecl sprintf_s(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl sprintf_s(char(&_Buffer)[_Size], char const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format))))); return vsprintf_s(_Buffer, _Size, _Format, _ArgList); } __pragma(warning(pop)); }



	__inline int __cdecl _sprintf_p_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _sprintf_p(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _snprintf_l(
			char*       const _Buffer,
			size_t      const _BufferCount,
			char const* const _Format,
			_locale_t   const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}















	__inline int __cdecl snprintf(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
#pragma warning(suppress:28719)    
		_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _snprintf(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
#pragma warning(suppress:28719)    
		_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))    int __cdecl _snprintf(char *_Buffer, size_t _BufferCount, char const* _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))    int __cdecl _vsnprintf(char *_Buffer, size_t _BufferCount, char const* _Format, va_list _Args);



	__inline int __cdecl _snprintf_c_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snprintf_c(
		char*       const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snprintf_s_l(
		char*       const _Buffer,
		size_t      const _BufferCount,
		size_t      const _MaxCount,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snprintf_s(
		char*       const _Buffer,
		size_t      const _BufferCount,
		size_t      const _MaxCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline   int __cdecl _snprintf_s(char(&_Buffer)[_Size], size_t _BufferCount, char const* _Format, ...) throw() { va_list _ArgList; ((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format))))); return _vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } __pragma(warning(pop)); }


	__inline int __cdecl _scprintf_l(
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vscprintf_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _scprintf(
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vscprintf_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _scprintf_p_l(
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vscprintf_p_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _scprintf_p(
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vscprintf_p(_Format, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}







	__declspec(dllimport) int __cdecl __stdio_common_vsscanf(
		unsigned __int64 _Options,
		char const*      _Buffer,
		size_t           _BufferCount,
		char const*      _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__inline int __cdecl _vsscanf_l(
		char const* const _Buffer,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vsscanf(
			(*__local_stdio_scanf_options()),
			_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
	}



	__inline int __cdecl vsscanf(
		char const* const _Buffer,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsscanf_l(_Buffer, _Format, 0, _ArgList);
	}



	__inline int __cdecl _vsscanf_s_l(
		char const* const _Buffer,
		char const* const _Format,
		_locale_t   const _Locale,
		va_list           _ArgList
	)



	{
		return __stdio_common_vsscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Buffer, (size_t)-1, _Format, _Locale, _ArgList);
	}




#pragma warning(push)
#pragma warning(disable:6530)


	__inline int __cdecl vsscanf_s(
		char const* const _Buffer,
		char const* const _Format,
		va_list           _ArgList
	)



	{
		return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList);
	}


	extern "C++" { template <size_t _Size> inline int __cdecl vsscanf_s(char const (&_Buffer)[_Size], char const* _Format, va_list _ArgList) throw() { return vsscanf_s(_Buffer, _Size, _Format, _ArgList); } }

#pragma warning(pop)



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_sscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _sscanf_l(
			char const* const _Buffer,
			char const* const _Format,
			_locale_t   const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "sscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl sscanf(
			char const* const _Buffer,
			char const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _sscanf_s_l(
		char const* const _Buffer,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}





	__inline int __cdecl sscanf_s(
		char const* const _Buffer,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = vsscanf_s(_Buffer, _Format, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}




#pragma warning(push)
#pragma warning(disable:6530)

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _snscanf_l(
			char const* const _Buffer,
			size_t      const _BufferCount,
			char const* const _Format,
			_locale_t   const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

		_Result = __stdio_common_vsscanf(
			(*__local_stdio_scanf_options()),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _snscanf(
			char const* const _Buffer,
			size_t      const _BufferCount,
			char const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

		_Result = __stdio_common_vsscanf(
			(*__local_stdio_scanf_options()),
			_Buffer, _BufferCount, _Format, 0, _ArgList);

		((void)(_ArgList = (va_list)0));
		return _Result;
	}




	__inline int __cdecl _snscanf_s_l(
		char const* const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		_locale_t   const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

		_Result = __stdio_common_vsscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Buffer, _BufferCount, _Format, _Locale, _ArgList);

		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _snscanf_s(
		char const* const _Buffer,
		size_t      const _BufferCount,
		char const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

		_Result = __stdio_common_vsscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Buffer, _BufferCount, _Format, 0, _ArgList);

		((void)(_ArgList = (va_list)0));
		return _Result;
	}


#pragma warning(pop)





















	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_tempnam" ". See online help for details."))
		__declspec(dllimport) char* __cdecl tempnam(
			char const* _Directory,
			char const* _FilePrefix
		);





	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fcloseall" ". See online help for details.")) __declspec(dllimport) int   __cdecl fcloseall(void);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fdopen" ". See online help for details."))    __declspec(dllimport) FILE* __cdecl fdopen(int _FileHandle, char const* _Format);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fgetchar" ". See online help for details."))  __declspec(dllimport) int   __cdecl fgetchar(void);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fileno" ". See online help for details."))    __declspec(dllimport) int   __cdecl fileno(FILE* _Stream);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_flushall" ". See online help for details."))  __declspec(dllimport) int   __cdecl flushall(void);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_fputchar" ". See online help for details."))  __declspec(dllimport) int   __cdecl fputchar(int _Ch);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_getw" ". See online help for details."))      __declspec(dllimport) int   __cdecl getw(FILE* _Stream);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_putw" ". See online help for details."))      __declspec(dllimport) int   __cdecl putw(int _Ch, FILE* _Stream);
	__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_rmtmp" ". See online help for details."))     __declspec(dllimport) int   __cdecl rmtmp(void);





} __pragma(pack(pop))




















typedef FILE FILE;


namespace std {
	using ::FILE; using ::_Mbstatet;

	using ::size_t; using ::fpos_t; using ::FILE;
	using ::clearerr; using ::fclose; using ::feof;
	using ::ferror; using ::fflush; using ::fgetc;
	using ::fgetpos; using ::fgets; using ::fopen;
	using ::fprintf; using ::fputc; using ::fputs;
	using ::fread; using ::freopen; using ::fscanf;
	using ::fseek; using ::fsetpos; using ::ftell;
	using ::fwrite; using ::getc; using ::getchar;
	using ::perror;
	using ::putc; using ::putchar;
	using ::printf; using ::puts; using ::remove;
	using ::rename; using ::rewind; using ::scanf;
	using ::setbuf; using ::setvbuf; using ::sprintf;
	using ::sscanf; using ::tmpfile; using ::tmpnam;
	using ::ungetc; using ::vfprintf; using ::vprintf;
	using ::vsprintf;

	using ::snprintf; using ::vsnprintf;
	using ::vfscanf; using ::vscanf; using ::vsscanf;
}











#pragma once














namespace std {
	using ::size_t; using ::memchr; using ::memcmp;
	using ::memcpy; using ::memmove; using ::memset;
	using ::strcat; using ::strchr; using ::strcmp;
	using ::strcoll; using ::strcpy; using ::strcspn;
	using ::strerror; using ::strlen; using ::strncat;
	using ::strncmp; using ::strncpy; using ::strpbrk;
	using ::strrchr; using ::strspn; using ::strstr;
	using ::strtok; using ::strxfrm;
}











#pragma once




















#pragma once













#pragma once




__pragma(pack(push, 8)) extern "C" {











	__declspec(dllimport) errno_t __cdecl _cgetws_s(
		wchar_t* _Buffer,
		size_t   _BufferCount,
		size_t*  _SizeRead
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl _cgetws_s(wchar_t(&_Buffer)[_Size], size_t* _SizeRead) throw() { return _cgetws_s(_Buffer, _Size, _SizeRead); } }


	__declspec(dllimport) int __cdecl _cputws(
		wchar_t const* _Buffer
	);

	__declspec(dllimport) wint_t __cdecl _getwch(void);
	__declspec(dllimport) wint_t __cdecl _getwche(void);
	__declspec(dllimport) wint_t __cdecl _putwch(wchar_t _Character);
	__declspec(dllimport) wint_t __cdecl _ungetwch(wint_t  _Character);

	__declspec(dllimport) wint_t __cdecl _getwch_nolock(void);
	__declspec(dllimport) wint_t __cdecl _getwche_nolock(void);
	__declspec(dllimport) wint_t __cdecl _putwch_nolock(wchar_t _Character);
	__declspec(dllimport) wint_t __cdecl _ungetwch_nolock(wint_t  _Character);









	__declspec(dllimport) int __cdecl __conio_common_vcwprintf(
		unsigned __int64 _Options,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __conio_common_vcwprintf_s(
		unsigned __int64 _Options,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__declspec(dllimport) int __cdecl __conio_common_vcwprintf_p(
		unsigned __int64 _Options,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);


	__inline int __cdecl _vcwprintf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __conio_common_vcwprintf((*__local_stdio_printf_options()), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vcwprintf(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vcwprintf_l(_Format, 0, _ArgList);
	}



	__inline int __cdecl _vcwprintf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __conio_common_vcwprintf_s((*__local_stdio_printf_options()), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vcwprintf_s(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vcwprintf_s_l(_Format, 0, _ArgList);
	}



	__inline int __cdecl _vcwprintf_p_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __conio_common_vcwprintf_p((*__local_stdio_printf_options()), _Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vcwprintf_p(
		const wchar_t* const _Format,
		va_list              _ArgList
	)



	{
		return _vcwprintf_p_l(_Format, 0, _ArgList);
	}



	__inline int __cdecl _cwprintf_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vcwprintf_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwprintf(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vcwprintf_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwprintf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vcwprintf_s_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwprintf_s(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vcwprintf_s_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwprintf_p_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vcwprintf_p_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwprintf_p(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vcwprintf_p_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}










	__declspec(dllimport) int __cdecl __conio_common_vcwscanf(
		unsigned __int64 _Options,
		wchar_t const*   _Format,
		_locale_t        _Locale,
		va_list          _ArgList
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vcwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vcwscanf_l(
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			va_list              _ArgList
		)



	{
		return __conio_common_vcwscanf(
			(*__local_stdio_scanf_options()),
			_Format, _Locale, _ArgList);
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_vcwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _vcwscanf(
			wchar_t const* const _Format,
			va_list              _ArgList
		)



	{
#pragma warning(push)
#pragma warning(disable: 4996) 
		return _vcwscanf_l(_Format, 0, _ArgList);
#pragma warning(pop)
	}



	__inline int __cdecl _vcwscanf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		va_list              _ArgList
	)



	{
		return __conio_common_vcwscanf(
			(*__local_stdio_scanf_options()) | (1ULL << 0),
			_Format, _Locale, _ArgList);
	}



	__inline int __cdecl _vcwscanf_s(
		wchar_t const* const _Format,
		va_list              _ArgList
	)



	{
		return _vcwscanf_s_l(_Format, 0, _ArgList);
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_cwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _cwscanf_l(
			wchar_t const* const _Format,
			_locale_t      const _Locale,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vcwscanf_l(_Format, _Locale, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_cwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__inline int __cdecl _cwscanf(
			wchar_t const* const _Format,
			...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));

#pragma warning(push)
#pragma warning(disable: 4996) 
		_Result = _vcwscanf_l(_Format, 0, _ArgList);
#pragma warning(pop)

		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwscanf_s_l(
		wchar_t const* const _Format,
		_locale_t      const _Locale,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Locale)>(), ((void)(__va_start(&_ArgList, _Locale)))));
		_Result = _vcwscanf_s_l(_Format, _Locale, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}



	__inline int __cdecl _cwscanf_s(
		wchar_t const* const _Format,
		...)



	{
		int _Result;
		va_list _ArgList;
		((void)(__vcrt_va_start_verify_argument_type<decltype(_Format)>(), ((void)(__va_start(&_ArgList, _Format)))));
		_Result = _vcwscanf_s_l(_Format, 0, _ArgList);
		((void)(_ArgList = (va_list)0));
		return _Result;
	}






} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {

















	__declspec(dllimport) const unsigned short* __cdecl __pctype_func(void);
	__declspec(dllimport) const wctype_t*       __cdecl __pwctype_func(void);






























	__declspec(dllimport) int __cdecl iswalnum(wint_t _C);
	__declspec(dllimport) int __cdecl iswalpha(wint_t _C);
	__declspec(dllimport) int __cdecl iswascii(wint_t _C);
	__declspec(dllimport) int __cdecl iswblank(wint_t _C);
	__declspec(dllimport) int __cdecl iswcntrl(wint_t _C);


	__declspec(dllimport) int __cdecl iswdigit(wint_t _C);

	__declspec(dllimport) int __cdecl iswgraph(wint_t _C);
	__declspec(dllimport) int __cdecl iswlower(wint_t _C);
	__declspec(dllimport) int __cdecl iswprint(wint_t _C);
	__declspec(dllimport) int __cdecl iswpunct(wint_t _C);
	__declspec(dllimport) int __cdecl iswspace(wint_t _C);
	__declspec(dllimport) int __cdecl iswupper(wint_t _C);
	__declspec(dllimport) int __cdecl iswxdigit(wint_t _C);
	__declspec(dllimport) int __cdecl __iswcsymf(wint_t _C);
	__declspec(dllimport) int __cdecl __iswcsym(wint_t _C);

	__declspec(dllimport) int __cdecl _iswalnum_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswalpha_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswblank_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswcntrl_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswdigit_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswgraph_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswlower_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswprint_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswpunct_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswspace_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswupper_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswxdigit_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswcsymf_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int __cdecl _iswcsym_l(wint_t _C, _locale_t _Locale);


	__declspec(dllimport) wint_t __cdecl towupper(wint_t _C);
	__declspec(dllimport) wint_t __cdecl towlower(wint_t _C);
	__declspec(dllimport) int    __cdecl iswctype(wint_t _C, wctype_t _Type);

	__declspec(dllimport) wint_t __cdecl _towupper_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) wint_t __cdecl _towlower_l(wint_t _C, _locale_t _Locale);
	__declspec(dllimport) int    __cdecl _iswctype_l(wint_t _C, wctype_t _Type, _locale_t _Locale);



	__declspec(dllimport) int __cdecl isleadbyte(int _C);
	__declspec(dllimport) int __cdecl _isleadbyte_l(int _C, _locale_t _Locale);

	__declspec(deprecated("This function or variable has been superceded by newer library " "or operating system functionality. Consider using " "iswctype" " " "instead. See online help for details.")) __declspec(dllimport) int __cdecl is_wctype(wint_t _C, wctype_t _Type);























































































} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {








	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wgetcwd(
		wchar_t* _DstBuf,
		int      _SizeInWords
	);



	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wgetdcwd(
		int      _Drive,
		wchar_t* _DstBuf,
		int      _SizeInWords
	);







	__declspec(dllimport) int __cdecl _wchdir(
		wchar_t const* _Path
	);


	__declspec(dllimport) int __cdecl _wmkdir(
		wchar_t const* _Path
	);


	__declspec(dllimport) int __cdecl _wrmdir(
		wchar_t const* _Path
	);



} __pragma(pack(pop))










#pragma once











#pragma once



















__pragma(pack(push, 8)) extern "C" {



#pragma warning(push)
#pragma warning(disable:4820) 
















	typedef unsigned long _fsize_t;

	struct _wfinddata32_t
	{
		unsigned   attrib;
		__time32_t time_create;
		__time32_t time_access;
		__time32_t time_write;
		_fsize_t   size;
		wchar_t    name[260];
	};

	struct _wfinddata32i64_t
	{
		unsigned   attrib;
		__time32_t time_create;
		__time32_t time_access;
		__time32_t time_write;
		__int64    size;
		wchar_t    name[260];
	};

	struct _wfinddata64i32_t
	{
		unsigned   attrib;
		__time64_t time_create;
		__time64_t time_access;
		__time64_t time_write;
		_fsize_t   size;
		wchar_t    name[260];
	};

	struct _wfinddata64_t
	{
		unsigned   attrib;
		__time64_t time_create;
		__time64_t time_access;
		__time64_t time_write;
		__int64    size;
		wchar_t    name[260];
	};





















	__declspec(dllimport) int __cdecl _waccess(
		wchar_t const* _FileName,
		int            _AccessMode
	);


	__declspec(dllimport) errno_t __cdecl _waccess_s(
		wchar_t const* _FileName,
		int            _AccessMode
	);


	__declspec(dllimport) int __cdecl _wchmod(
		wchar_t const* _FileName,
		int            _Mode
	);

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) int __cdecl _wcreat(
			wchar_t const* _FileName,
			int            _PermissionMode
		);



	__declspec(dllimport) intptr_t __cdecl _wfindfirst32(
		wchar_t const*         _FileName,
		struct _wfinddata32_t* _FindData
	);



	__declspec(dllimport) int __cdecl _wfindnext32(
		intptr_t               _FindHandle,
		struct _wfinddata32_t* _FindData
	);

	__declspec(dllimport) int __cdecl _wunlink(
		wchar_t const* _FileName
	);


	__declspec(dllimport) int __cdecl _wrename(
		wchar_t const* _OldFileName,
		wchar_t const* _NewFileName
	);

	__declspec(dllimport) errno_t __cdecl _wmktemp_s(
		wchar_t* _TemplateName,
		size_t   _SizeInWords
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wmktemp_s(wchar_t(&_TemplateName)[_Size]) throw() { return _wmktemp_s(_TemplateName, _Size); } }


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmktemp_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t* __cdecl _wmktemp(wchar_t *_TemplateName);



	__declspec(dllimport) intptr_t __cdecl _wfindfirst32i64(
		wchar_t const*            _FileName,
		struct _wfinddata32i64_t* _FindData
	);



	__declspec(dllimport) intptr_t __cdecl _wfindfirst64i32(
		wchar_t const*            _FileName,
		struct _wfinddata64i32_t* _FindData
	);



	__declspec(dllimport) intptr_t __cdecl _wfindfirst64(
		wchar_t const*         _FileName,
		struct _wfinddata64_t* _FindData
	);



	__declspec(dllimport) int __cdecl _wfindnext32i64(
		intptr_t                  _FindHandle,
		struct _wfinddata32i64_t* _FindData
	);



	__declspec(dllimport) int __cdecl _wfindnext64i32(
		intptr_t                  _FindHandle,
		struct _wfinddata64i32_t* _FindData
	);



	__declspec(dllimport) int __cdecl _wfindnext64(
		intptr_t               _FindHandle,
		struct _wfinddata64_t* _FindData
	);


	__declspec(dllimport) errno_t __cdecl _wsopen_s(
		int*           _FileHandle,
		wchar_t const* _FileName,
		int            _OpenFlag,
		int            _ShareFlag,
		int            _PermissionFlag
	);

	__declspec(dllimport) errno_t __cdecl _wsopen_dispatch(
		wchar_t const* _FileName,
		int            _OFlag,
		int            _ShFlag,
		int            _PMode,
		int*           _PFileHandle,
		int            _BSecure
	);






	extern "C++"   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		inline int __cdecl _wopen(
			wchar_t const* _FileName,
			int            _OFlag,
			int            _PMode = 0
		)
	{
		int _FileHandle;

		errno_t const _Result = _wsopen_dispatch(_FileName, _OFlag, 0x40, _PMode, &_FileHandle, 0);
		return _Result ? -1 : _FileHandle;
	}

	extern "C++"   __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		inline int __cdecl _wsopen(
			wchar_t const* _FileName,
			int            _OFlag,
			int            _ShFlag,
			int            _PMode = 0
		)
	{
		int _FileHandle;

		errno_t const _Result = _wsopen_dispatch(_FileName, _OFlag, _ShFlag, _PMode, &_FileHandle, 0);
		return _Result ? -1 : _FileHandle;
	}





















#pragma warning(pop)



} __pragma(pack(pop))










#pragma once



__pragma(pack(push, 8)) extern "C" {





	__declspec(dllimport) intptr_t __cdecl _wexecl(
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wexecle(
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wexeclp(
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wexeclpe(
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wexecv(
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList
	);

	__declspec(dllimport) intptr_t __cdecl _wexecve(
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList,
		wchar_t const* const* _Env
	);

	__declspec(dllimport) intptr_t __cdecl _wexecvp(
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList
	);

	__declspec(dllimport) intptr_t __cdecl _wexecvpe(
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList,
		wchar_t const* const* _Env
	);

	__declspec(dllimport) intptr_t __cdecl _wspawnl(
		int            _Mode,
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wspawnle(
		int            _Mode,
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wspawnlp(
		int            _Mode,
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wspawnlpe(
		int            _Mode,
		wchar_t const* _FileName,
		wchar_t const* _ArgList,
		...);

	__declspec(dllimport) intptr_t __cdecl _wspawnv(
		int                   _Mode,
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList
	);

	__declspec(dllimport) intptr_t __cdecl _wspawnve(
		int                   _Mode,
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList,
		wchar_t const* const* _Env
	);

	__declspec(dllimport) intptr_t __cdecl _wspawnvp(
		int                   _Mode,
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList
	);

	__declspec(dllimport) intptr_t __cdecl _wspawnvpe(
		int                   _Mode,
		wchar_t const*        _FileName,
		wchar_t const* const* _ArgList,
		wchar_t const* const* _Env
	);

	__declspec(dllimport) int __cdecl _wsystem(
		wchar_t const* _Command
	);





} __pragma(pack(pop))













#pragma once



__pragma(pack(push, 8)) extern "C" {








	struct tm
	{
		int tm_sec;
		int tm_min;
		int tm_hour;
		int tm_mday;
		int tm_mon;
		int tm_year;
		int tm_wday;
		int tm_yday;
		int tm_isdst;
	};







	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wasctime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))


		__declspec(dllimport) wchar_t* __cdecl _wasctime(
			struct tm const* _Tm
		);



	__declspec(dllimport) errno_t __cdecl _wasctime_s(
		wchar_t*         _Buffer,
		size_t           _SizeInWords,
		struct tm const* _Tm
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl _wasctime_s(wchar_t(&_Buffer)[_Size], struct tm const* _Time) throw() { return _wasctime_s(_Buffer, _Size, _Time); } }



	__declspec(dllimport) size_t __cdecl wcsftime(
		wchar_t*         _Buffer,
		size_t           _SizeInWords,
		wchar_t const*   _Format,
		struct tm const* _Tm
	);



	__declspec(dllimport) size_t __cdecl _wcsftime_l(
		wchar_t*         _Buffer,
		size_t           _SizeInWords,
		wchar_t const*   _Format,
		struct tm const* _Tm,
		_locale_t        _Locale
	);


	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl _wctime32(
			__time32_t const* _Time
		);


	__declspec(dllimport) errno_t __cdecl _wctime32_s(
		wchar_t*          _Buffer,
		size_t            _SizeInWords,
		__time32_t const* _Time
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wctime32_s(wchar_t(&_Buffer)[_Size], __time32_t const* _Time) throw() { return _wctime32_s(_Buffer, _Size, _Time); } }



	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
		__declspec(dllimport) wchar_t* __cdecl _wctime64(
			__time64_t const* _Time
		);


	__declspec(dllimport) errno_t __cdecl _wctime64_s(
		wchar_t*          _Buffer,
		size_t            _SizeInWords,
		__time64_t const* _Time);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wctime64_s(wchar_t(&_Buffer)[_Size], __time64_t const* _Time) throw() { return _wctime64_s(_Buffer, _Size, _Time); } }


	__declspec(dllimport) errno_t __cdecl _wstrdate_s(
		wchar_t* _Buffer,
		size_t   _SizeInWords
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wstrdate_s(wchar_t(&_Buffer)[_Size]) throw() { return _wstrdate_s(_Buffer, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrdate_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  wchar_t* __cdecl _wstrdate(wchar_t *_Buffer);


	__declspec(dllimport) errno_t __cdecl _wstrtime_s(
		wchar_t* _Buffer,
		size_t   _SizeInWords
	);

	extern "C++" { template <size_t _Size> inline errno_t __cdecl _wstrtime_s(wchar_t(&_Buffer)[_Size]) throw() { return _wstrtime_s(_Buffer, _Size); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport)  wchar_t* __cdecl _wstrtime(wchar_t *_Buffer);









#pragma warning(push)
#pragma warning(disable: 4996)























	static __inline wchar_t * __cdecl _wctime(
		time_t const* const _Time)
	{
		return _wctime64(_Time);
	}


	static __inline errno_t __cdecl _wctime_s(
		wchar_t*      const _Buffer,
		size_t        const _SizeInWords,
		time_t const* const _Time
	)
	{
		return _wctime64_s(_Buffer, _SizeInWords, _Time);
	}



#pragma warning(pop)




} __pragma(pack(pop))









#pragma once










#pragma once






typedef unsigned short _ino_t;


typedef _ino_t ino_t;








typedef unsigned int _dev_t;


typedef _dev_t dev_t;








typedef long _off_t;


typedef _off_t off_t;




__pragma(pack(push, 8)) extern "C" {



#pragma warning(push)
#pragma warning(disable:4820) 








	struct _stat32
	{
		_dev_t         st_dev;
		_ino_t         st_ino;
		unsigned short st_mode;
		short          st_nlink;
		short          st_uid;
		short          st_gid;
		_dev_t         st_rdev;
		_off_t         st_size;
		__time32_t     st_atime;
		__time32_t     st_mtime;
		__time32_t     st_ctime;
	};

	struct _stat32i64
	{
		_dev_t         st_dev;
		_ino_t         st_ino;
		unsigned short st_mode;
		short          st_nlink;
		short          st_uid;
		short          st_gid;
		_dev_t         st_rdev;
		__int64        st_size;
		__time32_t     st_atime;
		__time32_t     st_mtime;
		__time32_t     st_ctime;
	};

	struct _stat64i32
	{
		_dev_t         st_dev;
		_ino_t         st_ino;
		unsigned short st_mode;
		short          st_nlink;
		short          st_uid;
		short          st_gid;
		_dev_t         st_rdev;
		_off_t         st_size;
		__time64_t     st_atime;
		__time64_t     st_mtime;
		__time64_t     st_ctime;
	};

	struct _stat64
	{
		_dev_t         st_dev;
		_ino_t         st_ino;
		unsigned short st_mode;
		short          st_nlink;
		short          st_uid;
		short          st_gid;
		_dev_t         st_rdev;
		__int64        st_size;
		__time64_t     st_atime;
		__time64_t     st_mtime;
		__time64_t     st_ctime;
	};




	struct stat
	{
		_dev_t         st_dev;
		_ino_t         st_ino;
		unsigned short st_mode;
		short          st_nlink;
		short          st_uid;
		short          st_gid;
		_dev_t         st_rdev;
		_off_t         st_size;
		time_t         st_atime;
		time_t         st_mtime;
		time_t         st_ctime;
	};





















































	__declspec(dllimport) int __cdecl _fstat32(
		int             _FileHandle,
		struct _stat32* _Stat
	);

	__declspec(dllimport) int __cdecl _fstat32i64(
		int                _FileHandle,
		struct _stat32i64* _Stat
	);

	__declspec(dllimport) int __cdecl _fstat64i32(
		int                _FileHandle,
		struct _stat64i32* _Stat
	);

	__declspec(dllimport) int __cdecl _fstat64(
		int             _FileHandle,
		struct _stat64* _Stat
	);

	__declspec(dllimport) int __cdecl _stat32(
		char const*     _FileName,
		struct _stat32* _Stat
	);

	__declspec(dllimport) int __cdecl _stat32i64(
		char const*        _FileName,
		struct _stat32i64* _Stat
	);

	__declspec(dllimport) int __cdecl _stat64i32(
		char const*        _FileName,
		struct _stat64i32* _Stat
	);

	__declspec(dllimport) int __cdecl _stat64(
		char const*     _FileName,
		struct _stat64* _Stat
	);

	__declspec(dllimport) int __cdecl _wstat32(
		wchar_t const*  _FileName,
		struct _stat32* _Stat
	);

	__declspec(dllimport) int __cdecl _wstat32i64(
		wchar_t const*     _FileName,
		struct _stat32i64* _Stat
	);

	__declspec(dllimport) int __cdecl _wstat64i32(
		wchar_t const*     _FileName,
		struct _stat64i32* _Stat
	);

	__declspec(dllimport) int __cdecl _wstat64(
		wchar_t const*  _FileName,
		struct _stat64* _Stat
	);




















	static __inline int __cdecl fstat(int const _FileHandle, struct stat* const _Stat)
	{
		typedef char __static_assert_t[(sizeof(struct stat) == sizeof(struct _stat64i32)) != 0];
		return _fstat64i32(_FileHandle, (struct _stat64i32*)_Stat);
	}
	static __inline int __cdecl stat(char const* const _FileName, struct stat* const _Stat)
	{
		typedef char __static_assert_t[(sizeof(struct stat) == sizeof(struct _stat64i32)) != 0];
		return _stat64i32(_FileName, (struct _stat64i32*)_Stat);
	}






#pragma warning(pop)



} __pragma(pack(pop))




__pragma(pack(push, 8)) extern "C" {








	typedef wchar_t _Wint_t;




	__declspec(dllimport) wchar_t* __cdecl _wsetlocale(
		int            _Category,
		wchar_t const* _Locale
	);


	__declspec(dllimport) _locale_t __cdecl _wcreate_locale(
		int            _Category,
		wchar_t const* _Locale
	);



	__declspec(dllimport) wint_t __cdecl btowc(
		int _Ch
	);

	__declspec(dllimport) size_t __cdecl mbrlen(
		char const* _Ch,
		size_t      _SizeInBytes,
		mbstate_t*  _State
	);

	__declspec(dllimport) size_t __cdecl mbrtowc(
		wchar_t*    _DstCh,
		char const* _SrcCh,
		size_t      _SizeInBytes,
		mbstate_t*  _State
	);


	__declspec(dllimport) errno_t __cdecl mbsrtowcs_s(
		size_t*      _Retval,
		wchar_t*     _Dst,
		size_t       _Size,
		char const** _PSrc,
		size_t       _N,
		mbstate_t*   _State
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl mbsrtowcs_s(size_t* _Retval, wchar_t(&_Dest)[_Size], char const** _PSource, size_t _Count, mbstate_t* _State) throw() { return mbsrtowcs_s(_Retval, _Dest, _Size, _PSource, _Count, _State); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbsrtowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))  __declspec(dllimport) size_t __cdecl mbsrtowcs(wchar_t *_Dest, char const** _PSrc, size_t _Count, mbstate_t* _State);


	__declspec(dllimport) errno_t __cdecl wcrtomb_s(
		size_t*    _Retval,
		char*      _Dst,
		size_t     _SizeInBytes,
		wchar_t    _Ch,
		mbstate_t* _State
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl wcrtomb_s(size_t* _Retval, char(&_Dest)[_Size], wchar_t _Source, mbstate_t* _State) throw() { return wcrtomb_s(_Retval, _Dest, _Size, _Source, _State); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcrtomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcrtomb(char *_Dest, wchar_t _Source, mbstate_t* _State);


	__declspec(dllimport) errno_t __cdecl wcsrtombs_s(
		size_t*         _Retval,
		char*           _Dst,
		size_t          _SizeInBytes,
		wchar_t const** _Src,
		size_t          _Size,
		mbstate_t*      _State
	);

	extern "C++" { template <size_t _Size> inline   errno_t __cdecl wcsrtombs_s(size_t* _Retval, char(&_Dest)[_Size], wchar_t const** _PSrc, size_t _Count, mbstate_t* _State) throw() { return wcsrtombs_s(_Retval, _Dest, _Size, _PSrc, _Count, _State); } }

	__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsrtombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcsrtombs(char *_Dest, wchar_t const** _PSource, size_t _Count, mbstate_t* _State);

	__declspec(dllimport) int __cdecl wctob(
		wint_t _WCh
	);








	errno_t __cdecl wmemcpy_s(
		wchar_t*       _S1,
		rsize_t        _N1,
		wchar_t const* _S2,
		rsize_t        _N
	);


	errno_t __cdecl wmemmove_s(
		wchar_t*       _S1,
		rsize_t        _N1,
		wchar_t const* _S2,
		rsize_t        _N
	);



	__inline int __cdecl fwide(
		FILE* _F,
		int   _M
	)
	{
		(void)_F;
		return (_M);
	}

	__inline int __cdecl mbsinit(
		mbstate_t const* _P
	)
	{
		return _P == 0 || _P->_Wchar == 0;
	}

	__inline wchar_t const* __cdecl wmemchr(
		wchar_t const* _S,
		wchar_t        _C,
		size_t         _N
	)
	{
		for (; 0 < _N; ++_S, --_N)
			if (*_S == _C)
				return (wchar_t const*)_S;

		return 0;
	}

	__inline int __cdecl wmemcmp(
		wchar_t const* _S1,
		wchar_t const* _S2,
		size_t         _N
	)
	{
		for (; 0 < _N; ++_S1, ++_S2, --_N)
			if (*_S1 != *_S2)
				return *_S1 < *_S2 ? -1 : 1;

		return 0;
	}



	__inline
		wchar_t* __cdecl wmemcpy(
			wchar_t*       _S1,
			wchar_t const* _S2,
			size_t         _N
		)
	{
#pragma warning(push)
#pragma warning(disable : 4995 4996 6386)
		return (wchar_t*)memcpy(_S1, _S2, _N * sizeof(wchar_t));
#pragma warning(pop)
	}

	__inline
		wchar_t* __cdecl wmemmove(
			wchar_t*       _S1,
			wchar_t const* _S2,
			size_t         _N
		)
	{
#pragma warning(push)
#pragma warning(disable : 4996 6386)
		return (wchar_t*)memmove(_S1, _S2, _N * sizeof(wchar_t));
#pragma warning(pop)
	}



	__inline wchar_t* __cdecl wmemset(
		wchar_t* _S,
		wchar_t  _C,
		size_t   _N
	)
	{
		wchar_t *_Su = _S;
		for (; 0 < _N; ++_Su, --_N)
		{
			*_Su = _C;
		}
		return _S;
	}



	extern "C++" inline wchar_t* __cdecl wmemchr(
		wchar_t* _S,
		wchar_t  _C,
		size_t   _N
	)
	{
		wchar_t const* const _SC = _S;
		return const_cast<wchar_t*>(wmemchr(_SC, _C, _N));
	}







} __pragma(pack(pop))



typedef mbstate_t _Mbstatet;


namespace std {
	using ::_Mbstatet;

	using ::mbstate_t; using ::size_t; using ::tm; using ::wint_t;

	using ::btowc; using ::fgetwc; using ::fgetws; using ::fputwc;
	using ::fputws; using ::fwide; using ::fwprintf;
	using ::fwscanf; using ::getwc; using ::getwchar;
	using ::mbrlen; using ::mbrtowc; using ::mbsrtowcs;
	using ::mbsinit; using ::putwc; using ::putwchar;
	using ::swprintf; using ::swscanf; using ::ungetwc;
	using ::vfwprintf; using ::vswprintf; using ::vwprintf;
	using ::wcrtomb; using ::wprintf; using ::wscanf;
	using ::wcsrtombs; using ::wcstol; using ::wcscat;
	using ::wcschr; using ::wcscmp; using ::wcscoll;
	using ::wcscpy; using ::wcscspn; using ::wcslen;
	using ::wcsncat; using ::wcsncmp; using ::wcsncpy;
	using ::wcspbrk; using ::wcsrchr; using ::wcsspn;
	using ::wcstod; using ::wcstoul; using ::wcsstr;
	using ::wcstok; using ::wcsxfrm; using ::wctob;
	using ::wmemchr; using ::wmemcmp; using ::wmemcpy;
	using ::wmemmove; using ::wmemset; using ::wcsftime;

	using ::vfwscanf; using ::vswscanf; using ::vwscanf;
	using ::wcstof; using ::wcstold;
	using ::wcstoll; using ::wcstoull;
}



















#pragma once











#pragma once









#pragma once




































































































































































































































































































































extern "C++" {

#pragma pack(push, 8)

#pragma warning(push)
#pragma warning(disable: 4985) 






	namespace std
	{
		struct nothrow_t { };

		extern nothrow_t const nothrow;
	}



	__declspec(allocator) void* __cdecl operator new(
		size_t _Size
		);


	__declspec(allocator) void* __cdecl operator new(
		size_t                _Size,
		std::nothrow_t const&
		) throw();


	__declspec(allocator) void* __cdecl operator new[](
		size_t _Size
		);


	__declspec(allocator) void* __cdecl operator new[](
		size_t                _Size,
		std::nothrow_t const&
		) throw();

	void __cdecl operator delete(
		void* _Block
		) throw();

	void __cdecl operator delete(
		void* _Block,
		std::nothrow_t const&
		) throw();

	void __cdecl operator delete[](
		void* _Block
		) throw();

	void __cdecl operator delete[](
		void* _Block,
		std::nothrow_t const&
		) throw();

	void __cdecl operator delete(
		void*  _Block,
		size_t _Size
		) throw();

	void __cdecl operator delete[](
		void* _Block,
		size_t _Size
		) throw();




	inline void* __cdecl operator new(size_t _Size, void* _Where) throw()
	{
		(void)_Size;
		return _Where;
	}

	inline void __cdecl operator delete(void*, void*) throw()
	{
		return;
	}





	inline void* __cdecl operator new[](size_t _Size, void* _Where) throw()
	{
		(void)_Size;
		return _Where;
	}

		inline void __cdecl operator delete[](void*, void*) throw()
	{
	}




#pragma warning(pop)
#pragma pack(pop)

}




extern "C++" {

#pragma pack(push, 8)







	__declspec(allocator) void* __cdecl operator new(
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
		);


	__declspec(allocator) void* __cdecl operator new[](
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
		);

	void __cdecl operator delete(
		void*       _Block,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
		) throw();

	void __cdecl operator delete[](
		void*       _Block,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
		) throw();





#pragma pack(pop)

}



__pragma(pack(push, 8)) extern "C" {



	typedef void* _HFILE;

























	typedef int(__cdecl* _CRT_REPORT_HOOK)(int, char*, int*);
	typedef int(__cdecl* _CRT_REPORT_HOOKW)(int, wchar_t*, int*);





	typedef int(__cdecl* _CRT_ALLOC_HOOK)(int, void*, size_t, int, long, unsigned char const*, int);























































	typedef void(__cdecl* _CRT_DUMP_CLIENT)(void*, size_t);





	struct _CrtMemBlockHeader;

	typedef struct _CrtMemState
	{
		struct _CrtMemBlockHeader* pBlockHeader;
		size_t lCounts[5];
		size_t lSizes[5];
		size_t lHighWaterCount;
		size_t lTotalCount;
	} _CrtMemState;




























	__declspec(dllimport) int*  __cdecl __p__crtDbgFlag(void);
	__declspec(dllimport) long* __cdecl __p__crtBreakAlloc(void);




	__declspec(dllimport) _CRT_ALLOC_HOOK __cdecl _CrtGetAllocHook(void);

	__declspec(dllimport) _CRT_ALLOC_HOOK __cdecl _CrtSetAllocHook(
		_CRT_ALLOC_HOOK _PfnNewHook
	);

	__declspec(dllimport) _CRT_DUMP_CLIENT __cdecl _CrtGetDumpClient(void);

	__declspec(dllimport) _CRT_DUMP_CLIENT __cdecl _CrtSetDumpClient(
		_CRT_DUMP_CLIENT _PFnNewDump
	);



	__declspec(dllimport) int __cdecl _CrtCheckMemory(void);

	typedef void(__cdecl* _CrtDoForAllClientObjectsCallback)(void*, void*);

	__declspec(dllimport) void __cdecl _CrtDoForAllClientObjects(
		_CrtDoForAllClientObjectsCallback _Callback,
		void*                             _Context
	);

	__declspec(dllimport) int __cdecl _CrtDumpMemoryLeaks(void);

	__declspec(dllimport) int __cdecl _CrtIsMemoryBlock(
		void const*  _Block,
		unsigned int _Size,
		long*        _RequestNumber,
		char**       _FileName,
		int*         _LineNumber
	);


	__declspec(dllimport) int __cdecl _CrtIsValidHeapPointer(
		void const* _Pointer
	);


	__declspec(dllimport) int __cdecl _CrtIsValidPointer(
		void const*  _Pointer,
		unsigned int _Size,
		int          _ReadWrite
	);

	__declspec(dllimport) void __cdecl _CrtMemCheckpoint(
		_CrtMemState* _State
	);

	__declspec(dllimport) int __cdecl _CrtMemDifference(
		_CrtMemState*       _State,
		_CrtMemState const* _OldState,
		_CrtMemState const* _NewState
	);

	__declspec(dllimport) void __cdecl _CrtMemDumpAllObjectsSince(
		_CrtMemState const* _State
	);

	__declspec(dllimport) void __cdecl _CrtMemDumpStatistics(
		_CrtMemState const* _State
	);


	__declspec(dllimport) int __cdecl _CrtReportBlockType(
		void const* _Block
	);

	__declspec(dllimport) long __cdecl _CrtSetBreakAlloc(
		long _NewValue
	);

	__declspec(dllimport) int __cdecl _CrtSetDbgFlag(
		int _NewFlag
	);































































































	__declspec(dllimport) void __cdecl _aligned_free_dbg(
		void* _Block
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _aligned_malloc_dbg(
		size_t      _Size,
		size_t      _Alignment,
		char const* _FileName,
		int         _LineNumber
	);

	__declspec(dllimport) size_t __cdecl _aligned_msize_dbg(
		void*  _Block,
		size_t _Alignment,
		size_t _Offset
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _aligned_offset_malloc_dbg(
		size_t      _Size,
		size_t      _Alignment,
		size_t      _Offset,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _aligned_offset_realloc_dbg(
		void*       _Block,
		size_t      _Size,
		size_t      _Alignment,
		size_t      _Offset,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _aligned_offset_recalloc_dbg(
		void*       _Block,
		size_t      _Count,
		size_t      _Size,
		size_t      _Alignment,
		size_t      _Offset,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _aligned_realloc_dbg(
		void*       _Block,
		size_t      _Size,
		size_t      _Alignment,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _aligned_recalloc_dbg(
		void*       _Block,
		size_t      _Count,
		size_t      _Size,
		size_t      _Alignment,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _calloc_dbg(
		size_t      _Count,
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _expand_dbg(
		void*       _Block,
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
	);

	__declspec(dllimport) void __cdecl _free_dbg(
		void* _Block,
		int   _BlockUse
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _malloc_dbg(
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
	);

	__declspec(dllimport) size_t __cdecl _msize_dbg(
		void* _Block,
		int   _BlockUse
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _realloc_dbg(
		void*       _Block,
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) void* __cdecl _recalloc_dbg(
		void*       _Block,
		size_t      _Count,
		size_t      _Size,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
	);



	__declspec(dllimport) errno_t __cdecl _dupenv_s_dbg(
		char** _PBuffer,
		size_t*     _PBufferSizeInBytes,
		char const* _VarName,
		int          _BlockType,
		char const* _FileName,
		int          _LineNumber
	);



	__declspec(dllimport) __declspec(allocator) char* __cdecl _fullpath_dbg(
		char*       _FullPath,
		char const* _Path,
		size_t      _SizeInBytes,
		int         _BlockType,
		char const* _FileName,
		int         _LineNumber
	);



	__declspec(dllimport) __declspec(allocator) char* __cdecl _getcwd_dbg(
		char*       _DstBuf,
		int         _SizeInBytes,
		int         _BlockType,
		char const* _FileName,
		int         _LineNumber
	);




	__declspec(dllimport) __declspec(allocator) char* __cdecl _getdcwd_dbg(
		int         _Drive,
		char*       _DstBuf,
		int         _SizeInBytes,
		int         _BlockType,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) char* __cdecl _strdup_dbg(
		char const* _String,
		int         _BlockUse,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) char* __cdecl _tempnam_dbg(
		char const* _DirName,
		char const* _FilePrefix,
		int         _BlockType,
		char const* _FileName,
		int         _LineNumber
	);



	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wcsdup_dbg(
		wchar_t const* _String,
		int            _BlockUse,
		char const*    _FileName,
		int            _LineNumber
	);



	__declspec(dllimport) errno_t __cdecl _wdupenv_s_dbg(
		wchar_t** _PBuffer,
		size_t*         _PBufferSizeInWords,
		wchar_t const* _VarName,
		int             _BlockType,
		char const*    _FileName,
		int             _LineNumber
	);



	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wfullpath_dbg(
		wchar_t*       _FullPath,
		wchar_t const* _Path,
		size_t         _SizeInWords,
		int            _BlockType,
		char const*    _FileName,
		int            _LineNumber
	);



	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wgetcwd_dbg(
		wchar_t*    _DstBuf,
		int         _SizeInWords,
		int         _BlockType,
		char const* _FileName,
		int         _LineNumber
	);



	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wgetdcwd_dbg(
		int         _Drive,
		wchar_t*    _DstBuf,
		int         _SizeInWords,
		int         _BlockType,
		char const* _FileName,
		int         _LineNumber
	);


	__declspec(dllimport) __declspec(allocator) wchar_t* __cdecl _wtempnam_dbg(
		wchar_t const* _DirName,
		wchar_t const* _FilePrefix,
		int            _BlockType,
		char const*    _FileName,
		int            _LineNumber
	);




































	__declspec(dllimport) int __cdecl _CrtDbgReport(
		int         _ReportType,
		char const* _FileName,
		int         _Linenumber,
		char const* _ModuleName,
		char const* _Format,
		...);

	__declspec(dllimport) int __cdecl _CrtDbgReportW(
		int            _ReportType,
		wchar_t const* _FileName,
		int            _LineNumber,
		wchar_t const* _ModuleName,
		wchar_t const* _Format,
		...);


	__declspec(dllimport) int __cdecl _VCrtDbgReportA(
		int         _ReportType,
		void*       _ReturnAddress,
		char const* _FileName,
		int         _LineNumber,
		char const* _ModuleName,
		char const* _Format,
		va_list     _ArgList
	);

	__declspec(dllimport) int __cdecl _VCrtDbgReportW(
		int            _ReportType,
		void*          _ReturnAddress,
		wchar_t const* _FileName,
		int            _LineNumber,
		wchar_t const* _ModuleName,
		wchar_t const* _Format,
		va_list        _ArgList
	);

	__declspec(dllimport) size_t __cdecl _CrtSetDebugFillThreshold(
		size_t _NewDebugFillThreshold
	);

	__declspec(dllimport) size_t __cdecl _CrtGetDebugFillThreshold(void);

	__declspec(dllimport) _HFILE __cdecl _CrtSetReportFile(
		int    _ReportType,
		_HFILE _ReportFile
	);

	__declspec(dllimport) int __cdecl _CrtSetReportMode(
		int _ReportType,
		int _ReportMode
	);



	extern long _crtAssertBusy;

	__declspec(dllimport) _CRT_REPORT_HOOK __cdecl _CrtGetReportHook(void);




	__declspec(dllimport) _CRT_REPORT_HOOK __cdecl _CrtSetReportHook(
		_CRT_REPORT_HOOK _PFnNewHook
	);

	__declspec(dllimport) int __cdecl _CrtSetReportHook2(
		int              _Mode,
		_CRT_REPORT_HOOK _PFnNewHook
	);

	__declspec(dllimport) int __cdecl _CrtSetReportHookW2(
		int               _Mode,
		_CRT_REPORT_HOOKW _PFnNewHook
	);































































































































} __pragma(pack(pop))



#pragma pack(push,8)
#pragma warning(push,3)



namespace std {


	typedef _Longlong streamoff;
	typedef _Longlong streamsize;








	extern __declspec(dllimport)  const streamoff _BADOFF;



	template<class _Statetype>
	class fpos
	{
		typedef fpos<_Statetype> _Myt;

	public:
		fpos(streamoff _Off = 0)
			: _Myoff(_Off), _Fpos(0), _Mystate()
		{
		}

		fpos(_Statetype _State, fpos_t _Fileposition)
			: _Myoff(0), _Fpos(_Fileposition), _Mystate(_State)
		{
		}

		_Statetype  state() const
		{
			return (_Mystate);
		}

		void  state(_Statetype _State)
		{
			_Mystate = _State;
		}

		fpos_t  seekpos() const
		{
			return (_Fpos);
		}

		operator streamoff() const
		{
			return ((streamoff)(_Myoff + ((long long)(_Fpos))));
		}

		streamoff  operator-(const _Myt& _Right) const
		{
			return ((streamoff)*this - (streamoff)_Right);
		}

		_Myt&  operator+=(streamoff _Off)
		{
			_Myoff += _Off;
			return (*this);
		}

		_Myt&  operator-=(streamoff _Off)
		{
			_Myoff -= _Off;
			return (*this);
		}

		_Myt  operator+(streamoff _Off) const
		{
			_Myt _Tmp = *this;
			return (_Tmp += _Off);
		}

		_Myt  operator-(streamoff _Off) const
		{
			_Myt _Tmp = *this;
			return (_Tmp -= _Off);
		}

		bool  operator==(const _Myt& _Right) const
		{
			return ((streamoff)*this == (streamoff)_Right);
		}

		bool  operator==(streamoff _Right) const
		{
			return ((streamoff)*this == _Right);
		}

		bool  operator!=(const _Myt& _Right) const
		{
			return (!(*this == _Right));
		}

	private:
		streamoff _Myoff;
		fpos_t _Fpos;
		_Statetype _Mystate;
	};






	typedef fpos<_Mbstatet> streampos;

	typedef streampos wstreampos;


	template<class _Elem,
		class _Int_type>
		struct _Char_traits
	{
		typedef _Elem char_type;
		typedef _Int_type int_type;
		typedef streampos pos_type;
		typedef streamoff off_type;
		typedef _Mbstatet state_type;

		static int __cdecl compare(
			const _Elem *_First1,
			const _Elem *_First2, size_t _Count)
		{
			for (; 0 < _Count; --_Count, ++_First1, ++_First2)
				if (!eq(*_First1, *_First2))
					return (lt(*_First1, *_First2) ? -1 : +1);
			return (0);
		}

		static size_t __cdecl length(const _Elem *_First)
		{
			size_t _Count;
			for (_Count = 0; !eq(*_First, _Elem()); ++_First)
				++_Count;
			return (_Count);
		}

		static _Elem *__cdecl copy(
			_Elem *_First1,
			const _Elem *_First2, size_t _Count)
		{
			_Elem *_Next = _First1;
			for (; 0 < _Count; --_Count, ++_Next, ++_First2)
				assign(*_Next, *_First2);
			return (_First1);
		}

		static _Elem *__cdecl _Copy_s(
			_Elem *_First1, size_t _Dest_size,
			const _Elem *_First2, size_t _Count)
		{
			{ if (!(_Count <= _Dest_size)) { (void)((!!(("_Count <= _Dest_size" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\iosfwd", 173, 0, L"%ls", L"\"_Count <= _Dest_size\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"_Count <= _Dest_size", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\iosfwd", 173, 0); return (0); } };
			return (copy(_First1, _First2, _Count));
		}

		static const _Elem *__cdecl find(
			const _Elem *_First,
			size_t _Count, const _Elem& _Ch)
		{
			for (; 0 < _Count; --_Count, ++_First)
				if (eq(*_First, _Ch))
					return (_First);
			return (0);
		}

		static _Elem *__cdecl move(
			_Elem *_First1,
			const _Elem *_First2, size_t _Count)
		{
			_Elem *_Next = _First1;
			if (_First2 < _Next && _Next < _First2 + _Count)
				for (_Next += _Count, _First2 += _Count; 0 < _Count; --_Count)
					assign(*--_Next, *--_First2);
			else
				for (; 0 < _Count; --_Count, ++_Next, ++_First2)
					assign(*_Next, *_First2);
			return (_First1);
		}

		static _Elem *__cdecl assign(
			_Elem *_First,
			size_t _Count, _Elem _Ch)
		{
			_Elem *_Next = _First;
			for (; 0 < _Count; --_Count, ++_Next)
				assign(*_Next, _Ch);
			return (_First);
		}

		static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{
			_Left = _Right;
		}

		static constexpr bool __cdecl eq(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr bool __cdecl lt(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left < _Right);
		}

		static constexpr _Elem __cdecl to_char_type(
			const int_type& _Meta) noexcept
		{
			return ((_Elem)_Meta);
		}

		static constexpr int_type __cdecl to_int_type(
			const _Elem& _Ch) noexcept
		{
			return ((int_type)_Ch);
		}

		static constexpr bool __cdecl eq_int_type(const int_type& _Left,
			const int_type& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr int_type __cdecl not_eof(
			const int_type& _Meta) noexcept
		{
			return (_Meta != eof() ? (int_type)_Meta : (int_type)!eof());
		}

		static constexpr int_type __cdecl eof() noexcept
		{
			return ((int_type)(-1));
		}
	};


	template<class _Elem>
	struct char_traits
		: public _Char_traits<_Elem, long>
	{
	};


	template<>
	struct char_traits<char16_t>
		: public _Char_traits<char16_t, unsigned short>
	{
	};

	typedef streampos u16streampos;


	template<>
	struct char_traits<char32_t>
		: public _Char_traits<char32_t, unsigned int>
	{
	};

	typedef streampos u32streampos;


	template<>
	struct char_traits<wchar_t>
	{
		typedef wchar_t _Elem;
		typedef _Elem char_type;
		typedef wint_t int_type;
		typedef streampos pos_type;
		typedef streamoff off_type;
		typedef _Mbstatet state_type;

		static int __cdecl compare(const _Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? 0
				: ::wmemcmp(_First1, _First2, _Count));
		}

		static size_t __cdecl length(const _Elem *_First)
		{
			return (*_First == 0 ? 0
				: ::wcslen(_First));
		}

		static _Elem *__cdecl copy(_Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? _First1
				: (_Elem *)::wmemcpy(_First1, _First2, _Count));
		}

		static _Elem *__cdecl _Copy_s(
			_Elem *_First1, size_t _Size_in_words,
			const _Elem *_First2, size_t _Count)
		{
			if (0 < _Count)
				::wmemcpy_s((_First1), (_Size_in_words), (_First2), (_Count));
			return (_First1);
		}

		static const _Elem *__cdecl find(const _Elem *_First, size_t _Count,
			const _Elem& _Ch)
		{
			return (_Count == 0 ? (const _Elem *)0
				: (const _Elem *)::wmemchr(_First, _Ch, _Count));
		}

		static _Elem *__cdecl move(_Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? _First1
				: (_Elem *)::wmemmove(_First1, _First2, _Count));
		}

		static _Elem *__cdecl assign(_Elem *_First, size_t _Count,
			_Elem _Ch)
		{
			return ((_Elem *)::wmemset(_First, _Ch, _Count));
		}

		static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{
			_Left = _Right;
		}

		static constexpr bool __cdecl eq(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr bool __cdecl lt(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left < _Right);
		}

		static constexpr _Elem __cdecl to_char_type(
			const int_type& _Meta) noexcept
		{
			return (_Meta);
		}

		static constexpr int_type __cdecl to_int_type(
			const _Elem& _Ch) noexcept
		{
			return (_Ch);
		}

		static constexpr bool __cdecl eq_int_type(const int_type& _Left,
			const int_type& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr int_type __cdecl not_eof(
			const int_type& _Meta) noexcept
		{
			return (_Meta != eof() ? _Meta : !eof());
		}

		static constexpr int_type __cdecl eof() noexcept
		{
			return (((wint_t)(0xFFFF)));
		}
	};



	template<>
	struct char_traits<unsigned short>
	{
		typedef unsigned short _Elem;
		typedef _Elem char_type;
		typedef wint_t int_type;
		typedef streampos pos_type;
		typedef streamoff off_type;
		typedef _Mbstatet state_type;

		static int __cdecl compare(const _Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? 0
				: ::wmemcmp((const wchar_t *)_First1,
				(const wchar_t *)_First2, _Count));
		}

		static size_t __cdecl length(const _Elem *_First)
		{
			return (*_First == 0 ? 0
				: ::wcslen((const wchar_t *)_First));
		}

		static _Elem *__cdecl copy(_Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? _First1
				: (_Elem *)::wmemcpy((wchar_t *)_First1,
				(const wchar_t *)_First2, _Count));
		}

		static _Elem *__cdecl _Copy_s(
			_Elem *_First1, size_t _Size_in_words,
			const _Elem *_First2, size_t _Count)
		{
			if (0 < _Count)
				::wmemcpy_s(((wchar_t *)_First1), (_Size_in_words), ((const wchar_t *)_First2), (_Count));
			return (_First1);
		}

		static const _Elem *__cdecl find(const _Elem *_First, size_t _Count,
			const _Elem& _Ch)
		{
			return (_Count == 0 ? (const _Elem *)0
				: (const _Elem *)::wmemchr((const wchar_t *)_First,
					_Ch, _Count));
		}

		static _Elem *__cdecl move(_Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? _First1
				: (_Elem *)::wmemmove((wchar_t *)_First1,
				(const wchar_t *)_First2, _Count));
		}

		static _Elem *__cdecl assign(_Elem *_First, size_t _Count,
			_Elem _Ch)
		{
			return ((_Elem *)::wmemset((wchar_t *)_First, _Ch, _Count));
		}

		static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{
			_Left = _Right;
		}

		static constexpr bool __cdecl eq(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr bool __cdecl lt(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left < _Right);
		}

		static constexpr _Elem __cdecl to_char_type(const int_type& _Meta)
			noexcept
		{
			return (_Meta);
		}

		static constexpr int_type __cdecl to_int_type(const _Elem& _Ch)
			noexcept
		{
			return (_Ch);
		}

		static constexpr bool __cdecl eq_int_type(const int_type& _Left,
			const int_type& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr int_type __cdecl not_eof(const int_type& _Meta)
			noexcept
		{
			return (_Meta != eof() ? _Meta : !eof());
		}

		static constexpr int_type __cdecl eof() noexcept
		{
			return (((wint_t)(0xFFFF)));
		}
	};



	template<> struct char_traits<char>
	{
		typedef char _Elem;
		typedef _Elem char_type;
		typedef int int_type;
		typedef streampos pos_type;
		typedef streamoff off_type;
		typedef _Mbstatet state_type;

		static int __cdecl compare(const _Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? 0
				: ::memcmp(_First1, _First2, _Count));
		}

		static size_t __cdecl length(const _Elem *_First)
		{
			return (*_First == 0 ? 0
				: ::strlen(_First));
		}

		static _Elem *__cdecl copy(_Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? _First1
				: (_Elem *)::memcpy(_First1, _First2, _Count));
		}

		static _Elem *__cdecl _Copy_s(
			_Elem *_First1, size_t _Size_in_bytes,
			const _Elem *_First2, size_t _Count)
		{
			if (0 < _Count)
				::memcpy_s((_First1), (_Size_in_bytes), (_First2), (_Count));
			return (_First1);
		}

		static const _Elem *__cdecl find(const _Elem *_First, size_t _Count,
			const _Elem& _Ch)
		{
			return (_Count == 0 ? (const _Elem *)0
				: (const _Elem *)::memchr(_First, _Ch, _Count));
		}

		static _Elem *__cdecl move(_Elem *_First1, const _Elem *_First2,
			size_t _Count)
		{
			return (_Count == 0 ? _First1
				: (_Elem *)::memmove(_First1, _First2, _Count));
		}

		static _Elem *__cdecl assign(_Elem *_First, size_t _Count,
			_Elem _Ch)
		{
			return ((_Elem *)::memset(_First, _Ch, _Count));
		}

		static void __cdecl assign(_Elem& _Left, const _Elem& _Right) noexcept
		{
			_Left = _Right;
		}

		static constexpr bool __cdecl eq(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr bool __cdecl lt(const _Elem& _Left,
			const _Elem& _Right) noexcept
		{
			return ((unsigned char)_Left < (unsigned char)_Right);
		}

		static constexpr _Elem __cdecl to_char_type(
			const int_type& _Meta) noexcept
		{
			return ((_Elem)_Meta);
		}

		static constexpr int_type __cdecl to_int_type(
			const _Elem& _Ch) noexcept
		{
			return ((unsigned char)_Ch);
		}

		static constexpr bool __cdecl eq_int_type(const int_type& _Left,
			const int_type& _Right) noexcept
		{
			return (_Left == _Right);
		}

		static constexpr int_type __cdecl not_eof(
			const int_type& _Meta) noexcept
		{
			return (_Meta != eof() ? _Meta : !eof());
		}

		static constexpr int_type __cdecl eof() noexcept
		{
			return ((-1));
		}
	};


	template<class _Ty>
	class allocator;
	class ios_base;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_ios;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class istreambuf_iterator;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class ostreambuf_iterator;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_streambuf;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_istream;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_ostream;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_iostream;
	template<class _Elem,
		class _Traits = char_traits<_Elem>,
		class _Alloc = allocator<_Elem> >
		class basic_stringbuf;
	template<class _Elem,
		class _Traits = char_traits<_Elem>,
		class _Alloc = allocator<_Elem> >
		class basic_istringstream;
	template<class _Elem,
		class _Traits = char_traits<_Elem>,
		class _Alloc = allocator<_Elem> >
		class basic_ostringstream;
	template<class _Elem,
		class _Traits = char_traits<_Elem>,
		class _Alloc = allocator<_Elem> >
		class basic_stringstream;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_filebuf;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_ifstream;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_ofstream;
	template<class _Elem,
		class _Traits = char_traits<_Elem> >
		class basic_fstream;


	template<class _Elem,
		class _InIt >
		class num_get;
	template<class _Elem,
		class _OutIt >
		class num_put;
	template<class _Elem>
	class collate;



	typedef basic_ios<char, char_traits<char> > ios;
	typedef basic_streambuf<char, char_traits<char> > streambuf;
	typedef basic_istream<char, char_traits<char> > istream;
	typedef basic_ostream<char, char_traits<char> > ostream;
	typedef basic_iostream<char, char_traits<char> > iostream;
	typedef basic_stringbuf<char, char_traits<char>,
		allocator<char> > stringbuf;
	typedef basic_istringstream<char, char_traits<char>,
		allocator<char> > istringstream;
	typedef basic_ostringstream<char, char_traits<char>,
		allocator<char> > ostringstream;
	typedef basic_stringstream<char, char_traits<char>,
		allocator<char> > stringstream;
	typedef basic_filebuf<char, char_traits<char> > filebuf;
	typedef basic_ifstream<char, char_traits<char> > ifstream;
	typedef basic_ofstream<char, char_traits<char> > ofstream;
	typedef basic_fstream<char, char_traits<char> > fstream;


	typedef basic_ios<wchar_t, char_traits<wchar_t> > wios;
	typedef basic_streambuf<wchar_t, char_traits<wchar_t> >
		wstreambuf;
	typedef basic_istream<wchar_t, char_traits<wchar_t> > wistream;
	typedef basic_ostream<wchar_t, char_traits<wchar_t> > wostream;
	typedef basic_iostream<wchar_t, char_traits<wchar_t> > wiostream;
	typedef basic_stringbuf<wchar_t, char_traits<wchar_t>,
		allocator<wchar_t> > wstringbuf;
	typedef basic_istringstream<wchar_t, char_traits<wchar_t>,
		allocator<wchar_t> > wistringstream;
	typedef basic_ostringstream<wchar_t, char_traits<wchar_t>,
		allocator<wchar_t> > wostringstream;
	typedef basic_stringstream<wchar_t, char_traits<wchar_t>,
		allocator<wchar_t> > wstringstream;
	typedef basic_filebuf<wchar_t, char_traits<wchar_t> > wfilebuf;
	typedef basic_ifstream<wchar_t, char_traits<wchar_t> > wifstream;
	typedef basic_ofstream<wchar_t, char_traits<wchar_t> > wofstream;
	typedef basic_fstream<wchar_t, char_traits<wchar_t> > wfstream;
























	typedef num_get<char, istreambuf_iterator<char, char_traits<char> > >
		numget;
	typedef num_get<wchar_t, istreambuf_iterator<wchar_t, char_traits<wchar_t> > >
		wnumget;
	typedef num_put<char, ostreambuf_iterator<char, char_traits<char> > >
		numput;
	typedef num_put<wchar_t, ostreambuf_iterator<wchar_t, char_traits<wchar_t> > >
		wnumput;
	typedef collate<char> ncollate;
	typedef collate<wchar_t> wcollate;

}


#pragma warning(pop)
#pragma pack(pop)










#pragma pack(push,8)
#pragma warning(push,3)



#pragma warning(disable: 4180 4512)

namespace std {

	template<class _FwdIt1,
		class _FwdIt2> inline
		void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right)
	{
		swap(*_Left, *_Right);
	}


	template<class _Ty,
		size_t _Size,
		class> inline
		void swap(_Ty(&_Left)[_Size], _Ty(&_Right)[_Size])
		noexcept(_Is_nothrow_swappable<_Ty>::value)
	{
		if (&_Left != &_Right)
		{
			_Ty *_First1 = _Left;
			_Ty *_Last1 = _First1 + _Size;
			_Ty *_First2 = _Right;
			for (; _First1 != _Last1; ++_First1, ++_First2)
				::std::iter_swap(_First1, _First2);
		}
	}

	template<class _Ty,
		class> inline
		void swap(_Ty& _Left, _Ty& _Right)
		noexcept(is_nothrow_move_constructible<_Ty>::value && is_nothrow_move_assignable<_Ty>::value)
	{
		_Ty _Tmp = ::std::move(_Left);
		_Left = ::std::move(_Right);
		_Right = ::std::move(_Tmp);
	}


	template<class _Ty> inline
		void _Swap_adl(_Ty& _Left, _Ty& _Right)
		noexcept(_Is_nothrow_swappable<_Ty>::value)
	{
		swap(_Left, _Right);
	}


	struct piecewise_construct_t
	{
	};

	constexpr piecewise_construct_t piecewise_construct{};


	template<class...>
	class tuple;

	template<class _Ty1,
		class _Ty2>
		struct pair
	{
		typedef pair<_Ty1, _Ty2> _Myt;
		typedef _Ty1 first_type;
		typedef _Ty2 second_type;

		template<class _Uty1 = _Ty1,
			class _Uty2 = _Ty2,
			class = enable_if_t<is_default_constructible<_Uty1>::value
			&& is_default_constructible<_Uty2>::value> >
			constexpr pair()
			: first(), second()
		{
		}

		template<class _Uty1 = _Ty1,
			class _Uty2 = _Ty2,
			class = enable_if_t<is_copy_constructible<_Uty1>::value
			&& is_copy_constructible<_Uty2>::value>,
			enable_if_t<is_convertible<const _Uty1&, _Uty1>::value
			&& is_convertible<const _Uty2&, _Uty2>::value, int> = 0>
			constexpr pair(const _Ty1& _Val1, const _Ty2& _Val2)
			: first(_Val1), second(_Val2)
		{
		}

		template<class _Uty1 = _Ty1,
			class _Uty2 = _Ty2,
			class = enable_if_t<is_copy_constructible<_Uty1>::value
			&& is_copy_constructible<_Uty2>::value>,
			enable_if_t<!is_convertible<const _Uty1&, _Uty1>::value
			|| !is_convertible<const _Uty2&, _Uty2>::value, int> = 0>
			constexpr explicit pair(const _Ty1& _Val1, const _Ty2& _Val2)
			: first(_Val1), second(_Val2)
		{
		}

		pair(const pair&) = default;
		pair(pair&&) = default;

		template<class _Other1,
			class _Other2,
			class = enable_if_t<is_constructible<_Ty1, const _Other1&>::value
			&& is_constructible<_Ty2, const _Other2&>::value>,
			enable_if_t<is_convertible<const _Other1&, _Ty1>::value
			&& is_convertible<const _Other2&, _Ty2>::value, int> = 0>
			constexpr pair(const pair<_Other1, _Other2>& _Right)
			: first(_Right.first), second(_Right.second)
		{
		}

		template<class _Other1,
			class _Other2,
			class = enable_if_t<is_constructible<_Ty1, const _Other1&>::value
			&& is_constructible<_Ty2, const _Other2&>::value>,
			enable_if_t<!is_convertible<const _Other1&, _Ty1>::value
			|| !is_convertible<const _Other2&, _Ty2>::value, int> = 0>
			constexpr explicit pair(const pair<_Other1, _Other2>& _Right)
			: first(_Right.first), second(_Right.second)
		{
		}

		template<class _Other1,
			class _Other2>
			_Myt& operator=(const pair<_Other1, _Other2>& _Right)
		{
			first = _Right.first;
			second = _Right.second;
			return (*this);
		}

		template<class _Tuple1,
			class _Tuple2,
			size_t... _Indexes1,
			size_t... _Indexes2> inline
			pair(_Tuple1& _Val1,
				_Tuple2& _Val2,
				integer_sequence<size_t, _Indexes1...>,
				integer_sequence<size_t, _Indexes2...>);

		template<class... _Types1,
			class... _Types2> inline
			pair(piecewise_construct_t,
				tuple<_Types1...> _Val1,
				tuple<_Types2...> _Val2);

		template<class _Other1,
			class _Other2,
			class = enable_if_t<is_constructible<_Ty1, _Other1>::value
			&& is_constructible<_Ty2, _Other2>::value>,
			enable_if_t<is_convertible<_Other1, _Ty1>::value
			&& is_convertible<_Other2, _Ty2>::value, int> = 0>
			constexpr pair(_Other1&& _Val1, _Other2&& _Val2)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
			: first(::std::forward<_Other1>(_Val1)),
			second(::std::forward<_Other2>(_Val2))
		{
		}

		template<class _Other1,
			class _Other2,
			class = enable_if_t<is_constructible<_Ty1, _Other1>::value
			&& is_constructible<_Ty2, _Other2>::value>,
			enable_if_t<!is_convertible<_Other1, _Ty1>::value
			|| !is_convertible<_Other2, _Ty2>::value, int> = 0>
			constexpr explicit pair(_Other1&& _Val1, _Other2&& _Val2)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
			: first(::std::forward<_Other1>(_Val1)),
			second(::std::forward<_Other2>(_Val2))
		{
		}

		template<class _Other1,
			class _Other2,
			class = enable_if_t<is_constructible<_Ty1, _Other1>::value
			&& is_constructible<_Ty2, _Other2>::value>,
			enable_if_t<is_convertible<_Other1, _Ty1>::value
			&& is_convertible<_Other2, _Ty2>::value, int> = 0>
			constexpr pair(pair<_Other1, _Other2>&& _Right)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
			: first(::std::forward<_Other1>(_Right.first)),
			second(::std::forward<_Other2>(_Right.second))
		{
		}

		template<class _Other1,
			class _Other2,
			class = enable_if_t<is_constructible<_Ty1, _Other1>::value
			&& is_constructible<_Ty2, _Other2>::value>,
			enable_if_t<!is_convertible<_Other1, _Ty1>::value
			|| !is_convertible<_Other2, _Ty2>::value, int> = 0>
			constexpr explicit pair(pair<_Other1, _Other2>&& _Right)
			noexcept((is_nothrow_constructible<_Ty1, _Other1>::value && is_nothrow_constructible<_Ty2, _Other2>::value))
			: first(::std::forward<_Other1>(_Right.first)),
			second(::std::forward<_Other2>(_Right.second))
		{
		}

		template<class _Other1,
			class _Other2>
			_Myt& operator=(pair<_Other1, _Other2>&& _Right)
		{
			first = ::std::forward<_Other1>(_Right.first);
			second = ::std::forward<_Other2>(_Right.second);
			return (*this);
		}

		_Myt& operator=(_Myt&& _Right)
			noexcept((is_nothrow_move_assignable<_Ty1>::value && is_nothrow_move_assignable<_Ty2>::value))
		{
			first = ::std::forward<_Ty1>(_Right.first);
			second = ::std::forward<_Ty2>(_Right.second);
			return (*this);
		}

		_Myt& operator=(const _Myt& _Right)
		{
			first = _Right.first;
			second = _Right.second;
			return (*this);
		}

		_Ty1 first;
		_Ty2 second;

		void swap(_Myt& _Right)
			noexcept(_Is_nothrow_swappable<_Ty1>::value && _Is_nothrow_swappable<_Ty2>::value)
		{
			if (this != &_Right)
			{
				_Swap_adl(first, _Right.first);
				_Swap_adl(second, _Right.second);
			}
		}
	};



	template<class _Ty1,
		class _Ty2,
		class = enable_if_t<_Is_swappable<_Ty1>::value && _Is_swappable<_Ty2>::value>> inline
		void swap(pair<_Ty1, _Ty2>& _Left, pair<_Ty1, _Ty2>& _Right)
		noexcept(noexcept(_Left.swap(_Right)))
	{
		_Left.swap(_Right);
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr bool operator==(const pair<_Ty1, _Ty2>& _Left,
			const pair<_Ty1, _Ty2>& _Right)
	{
		return (_Left.first == _Right.first && _Left.second == _Right.second);
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr bool operator!=(const pair<_Ty1, _Ty2>& _Left,
			const pair<_Ty1, _Ty2>& _Right)
	{
		return (!(_Left == _Right));
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr bool operator<(const pair<_Ty1, _Ty2>& _Left,
			const pair<_Ty1, _Ty2>& _Right)
	{
		return (_Left.first < _Right.first ||
			(!(_Right.first < _Left.first) && _Left.second < _Right.second));
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr bool operator>(const pair<_Ty1, _Ty2>& _Left,
			const pair<_Ty1, _Ty2>& _Right)
	{
		return (_Right < _Left);
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr bool operator<=(const pair<_Ty1, _Ty2>& _Left,
			const pair<_Ty1, _Ty2>& _Right)
	{
		return (!(_Right < _Left));
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr bool operator>=(const pair<_Ty1, _Ty2>& _Left,
			const pair<_Ty1, _Ty2>& _Right)
	{
		return (!(_Left < _Right));
	}



	template<class _Ty1,
		class _Ty2> inline
		constexpr pair<typename _Unrefwrap<_Ty1>::type,
		typename _Unrefwrap<_Ty2>::type>
		make_pair(_Ty1&& _Val1, _Ty2&& _Val2)
	{
		typedef pair<typename _Unrefwrap<_Ty1>::type,
			typename _Unrefwrap<_Ty2>::type> _Mypair;
		return (_Mypair(::std::forward<_Ty1>(_Val1),
			::std::forward<_Ty2>(_Val2)));
	}


	namespace rel_ops
	{
		template<class _Ty> inline
			bool operator!=(const _Ty& _Left, const _Ty& _Right)
		{
			return (!(_Left == _Right));
		}

		template<class _Ty> inline
			bool operator>(const _Ty& _Left, const _Ty& _Right)
		{
			return (_Right < _Left);
		}

		template<class _Ty> inline
			bool operator<=(const _Ty& _Left, const _Ty& _Right)
		{
			return (!(_Right < _Left));
		}

		template<class _Ty> inline
			bool operator>=(const _Ty& _Left, const _Ty& _Right)
		{
			return (!(_Left < _Right));
		}
	}
}

namespace std {
	template<class _Ty,
		size_t _Size>
		class array;


	template<class _Tuple>
	struct tuple_size;

	template<class _Ty,
		size_t _Size>
		struct tuple_size<array<_Ty, _Size> >
		: integral_constant<size_t, _Size>
	{
	};

	template<class _Ty1,
		class _Ty2>
		struct tuple_size<pair<_Ty1, _Ty2> >
		: integral_constant<size_t, 2>
	{
	};

	template<class... _Types>
	struct tuple_size<tuple<_Types...> >
		: integral_constant<size_t, sizeof...(_Types)>
	{
	};


	template<class _Tuple>
	struct tuple_size<const _Tuple>
		: tuple_size<_Tuple>
	{
	};

	template<class _Tuple>
	struct tuple_size<volatile _Tuple>
		: tuple_size<_Tuple>
	{
	};

	template<class _Tuple>
	struct tuple_size<const volatile _Tuple>
		: tuple_size<_Tuple>
	{
	};


	template<class _Ty>
	constexpr size_t tuple_size_v = tuple_size<_Ty>::value;



	template<size_t _Index,
		class _Tuple>
		struct tuple_element;

	template<size_t _Idx,
		class _Ty,
		size_t _Size>
		struct tuple_element<_Idx, array<_Ty, _Size> >
	{
		static_assert(_Idx < _Size, "array index out of bounds");

		typedef _Ty type;
	};

	template<class _Ty1,
		class _Ty2>
		struct tuple_element<0, pair<_Ty1, _Ty2> >
	{
		typedef _Ty1 type;
	};

	template<class _Ty1,
		class _Ty2>
		struct tuple_element<1, pair<_Ty1, _Ty2> >
	{
		typedef _Ty2 type;
	};

	template<size_t _Index>
	struct tuple_element<_Index, tuple<> >
	{
		static_assert(_Always_false<integral_constant<size_t, _Index> >::value,
			"tuple index out of bounds");
	};

	template<class _This,
		class... _Rest>
		struct tuple_element<0, tuple<_This, _Rest...> >
	{
		typedef _This type;
		typedef tuple<_This, _Rest...> _Ttype;
	};

	template<size_t _Index,
		class _This,
		class... _Rest>
		struct tuple_element<_Index, tuple<_This, _Rest...> >
		: public tuple_element<_Index - 1, tuple<_Rest...> >
	{
	};


	template<size_t _Index,
		class _Tuple>
		struct tuple_element<_Index, const _Tuple>
		: public tuple_element<_Index, _Tuple>
	{
		typedef tuple_element<_Index, _Tuple> _Mybase;
		typedef typename add_const<typename _Mybase::type>::type type;
	};

	template<size_t _Index,
		class _Tuple>
		struct tuple_element<_Index, volatile _Tuple>
		: public tuple_element<_Index, _Tuple>
	{
		typedef tuple_element<_Index, _Tuple> _Mybase;
		typedef typename add_volatile<typename _Mybase::type>::type type;
	};

	template<size_t _Index,
		class _Tuple>
		struct tuple_element<_Index, const volatile _Tuple>
		: public tuple_element<_Index, _Tuple>
	{
		typedef tuple_element<_Index, _Tuple> _Mybase;
		typedef typename add_cv<typename _Mybase::type>::type type;
	};

	template<size_t _Index,
		class _Tuple>
		using tuple_element_t = typename tuple_element<_Index, _Tuple>::type;


	template<class _Ret,
		class _Pair> inline
		constexpr _Ret _Pair_get(_Pair& _Pr,
			integral_constant<size_t, 0>) noexcept
	{
		return (_Pr.first);
	}

	template<class _Ret,
		class _Pair> inline
		constexpr _Ret _Pair_get(_Pair& _Pr,
			integral_constant<size_t, 1>) noexcept
	{
		return (_Pr.second);
	}

	template<size_t _Idx,
		class _Ty1,
		class _Ty2> inline
		constexpr typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&
		get(pair<_Ty1, _Ty2>& _Pr) noexcept
	{
		typedef typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type& _Rtype;
		return (_Pair_get<_Rtype>(_Pr, integral_constant<size_t, _Idx>()));
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr _Ty1& get(pair<_Ty1, _Ty2>& _Pr) noexcept
	{
		return (::std::get<0>(_Pr));
	}

	template<class _Ty2,
		class _Ty1> inline
		constexpr _Ty2& get(pair<_Ty1, _Ty2>& _Pr) noexcept
	{
		return (::std::get<1>(_Pr));
	}

	template<size_t _Idx,
		class _Ty1,
		class _Ty2> inline
		constexpr const typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&
		get(const pair<_Ty1, _Ty2>& _Pr) noexcept
	{
		typedef const typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&
			_Ctype;
		return (_Pair_get<_Ctype>(_Pr, integral_constant<size_t, _Idx>()));
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr const _Ty1& get(const pair<_Ty1, _Ty2>& _Pr) noexcept
	{
		return (::std::get<0>(_Pr));
	}

	template<class _Ty2,
		class _Ty1> inline
		constexpr const _Ty2& get(const pair<_Ty1, _Ty2>& _Pr) noexcept
	{
		return (::std::get<1>(_Pr));
	}

	template<size_t _Idx,
		class _Ty1,
		class _Ty2> inline
		constexpr typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&&
		get(pair<_Ty1, _Ty2>&& _Pr) noexcept
	{
		typedef typename tuple_element<_Idx, pair<_Ty1, _Ty2> >::type&& _RRtype;
		return (::std::forward<_RRtype>(::std::get<_Idx>(_Pr)));
	}

	template<class _Ty1,
		class _Ty2> inline
		constexpr _Ty1&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept
	{
		return (::std::get<0>(::std::move(_Pr)));
	}

	template<class _Ty2,
		class _Ty1> inline
		constexpr _Ty2&& get(pair<_Ty1, _Ty2>&& _Pr) noexcept
	{
		return (::std::get<1>(::std::move(_Pr)));
	}


	template<class _Ty,
		class _Other = _Ty> inline
		_Ty exchange(_Ty& _Val, _Other&& _New_val)
	{
		_Ty _Old_val = ::std::move(_Val);
		_Val = ::std::forward<_Other>(_New_val);
		return (_Old_val);
	}


	template<class _Ty> inline
		constexpr add_const_t<_Ty>& as_const(_Ty& _Val) noexcept
	{
		return (_Val);
	}

	template<class _Ty>
	void as_const(const _Ty&&) = delete;
}


namespace std {
	namespace tr1 {
		using ::std::get;
		using ::std::tuple_element;
		using ::std::tuple_size;
	}
}



#pragma warning(pop)
#pragma pack(pop)









#pragma pack(push,8)
#pragma warning(push,3)



namespace std {









	typedef const wchar_t *_Dbfile_t;
	typedef unsigned int _Dbline_t;

	__declspec(dllimport) void __cdecl _Debug_message(const wchar_t *,
		const wchar_t *, unsigned int);






	struct _Container_proxy;
	struct _Container_base12;
	struct _Iterator_base12;

	struct _Container_base0
	{
		void _Orphan_all()
		{
		}

		void _Swap_all(_Container_base0&)
		{
		}
	};

	struct _Iterator_base0
	{
		void _Adopt(const void *)
		{
		}

		const _Container_base0 *_Getcont() const
		{
			return (0);
		}
	};


	struct _Container_proxy
	{
		_Container_proxy()
			: _Mycont(0), _Myfirstiter(0)
		{
		}

		const _Container_base12 *_Mycont;
		_Iterator_base12 *_Myfirstiter;
	};

	struct _Container_base12
	{
	public:
		_Container_base12()
			: _Myproxy(0)
		{
		}

		_Container_base12(const _Container_base12&)
			: _Myproxy(0)
		{
		}

		_Container_base12& operator=(const _Container_base12&)
		{
			return (*this);
		}

		~_Container_base12() noexcept
		{
			_Orphan_all();
		}

		_Iterator_base12 **_Getpfirst() const
		{
			return (_Myproxy == 0 ? 0 : &_Myproxy->_Myfirstiter);
		}

		void _Orphan_all();
		void _Swap_all(_Container_base12&);

		_Container_proxy *_Myproxy;
	};

	struct _Iterator_base12
	{
	public:
		_Iterator_base12()
			: _Myproxy(0), _Mynextiter(0)
		{
		}

		_Iterator_base12(const _Iterator_base12& _Right)
			: _Myproxy(0), _Mynextiter(0)
		{
			*this = _Right;
		}

		_Iterator_base12& operator=(const _Iterator_base12& _Right)
		{
			if (_Myproxy == _Right._Myproxy)
				;
			else if (_Right._Myproxy != 0)
				_Adopt(_Right._Myproxy->_Mycont);
			else
			{

				_Lockit _Lock(3);
				_Orphan_me();

			}

			return (*this);
		}

		~_Iterator_base12() noexcept
		{

			_Lockit _Lock(3);
			_Orphan_me();

		}

		void _Adopt(const _Container_base12 *_Parent)
		{
			if (_Parent == 0)
			{

				_Lockit _Lock(3);
				_Orphan_me();

			}
			else
			{
				_Container_proxy *_Parent_proxy = _Parent->_Myproxy;


				if (_Myproxy != _Parent_proxy)
				{
					_Lockit _Lock(3);
					_Orphan_me();
					_Mynextiter = _Parent_proxy->_Myfirstiter;
					_Parent_proxy->_Myfirstiter = this;
					_Myproxy = _Parent_proxy;
				}




			}
		}

		void _Clrcont()
		{
			_Myproxy = 0;
		}

		const _Container_base12 *_Getcont() const
		{
			return (_Myproxy == 0 ? 0 : _Myproxy->_Mycont);
		}

		_Iterator_base12 **_Getpnext()
		{
			return (&_Mynextiter);
		}

		void _Orphan_me()
		{

			if (_Myproxy != 0)
			{
				_Iterator_base12 **_Pnext = &_Myproxy->_Myfirstiter;
				while (*_Pnext != 0 && *_Pnext != this)
					_Pnext = &(*_Pnext)->_Mynextiter;

				if (*_Pnext == 0)
					_Debug_message(L"ITERATOR LIST CORRUPTED!", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 202);
				*_Pnext = _Mynextiter;
				_Myproxy = 0;
			}

		}

		_Container_proxy *_Myproxy;
		_Iterator_base12 *_Mynextiter;
	};


	inline void _Container_base12::_Orphan_all()
	{

		if (_Myproxy != 0)
		{
			_Lockit _Lock(3);

			for (_Iterator_base12 **_Pnext = &_Myproxy->_Myfirstiter;
				*_Pnext != 0; *_Pnext = (*_Pnext)->_Mynextiter)
				(*_Pnext)->_Myproxy = 0;
			_Myproxy->_Myfirstiter = 0;
		}

	}

	inline void _Container_base12::_Swap_all(_Container_base12& _Right)
	{

		_Lockit _Lock(3);


		_Container_proxy *_Temp = _Myproxy;
		_Myproxy = _Right._Myproxy;
		_Right._Myproxy = _Temp;

		if (_Myproxy != 0)
			_Myproxy->_Mycont = (_Container_base12 *)this;
		if (_Right._Myproxy != 0)
			_Right._Myproxy->_Mycont = (_Container_base12 *)&_Right;
	}






	typedef _Container_base12 _Container_base;
	typedef _Iterator_base12 _Iterator_base;



	struct _Zero_then_variadic_args_t
	{
	};

	struct _One_then_variadic_args_t
	{
	};

	template<class _Ty1,
		class _Ty2,
		bool = is_empty<_Ty1>::value && !is_final<_Ty1>::value>
		class _Compressed_pair final
		: private _Ty1

	{
	private:
		_Ty2 _Myval2;

		typedef _Ty1 _Mybase;

	public:
		template<class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t,
			_Other2&&... _Val2)
			: _Ty1(), _Myval2(::std::forward<_Other2>(_Val2)...)
		{
		}

		template<class _Other1,
			class... _Other2>
			_Compressed_pair(_One_then_variadic_args_t,
				_Other1&& _Val1, _Other2&&... _Val2)
			: _Ty1(::std::forward<_Other1>(_Val1)),
			_Myval2(::std::forward<_Other2>(_Val2)...)
		{
		}


		_Ty1& _Get_first() noexcept
		{
			return (*this);
		}

		const _Ty1& _Get_first() const noexcept
		{
			return (*this);
		}

		volatile _Ty1& _Get_first() volatile noexcept
		{
			return (*this);
		}

		const volatile _Ty1& _Get_first() const volatile noexcept
		{
			return (*this);
		}

		_Ty2& _Get_second() noexcept
		{
			return (_Myval2);
		}

		const _Ty2& _Get_second() const noexcept
		{
			return (_Myval2);
		}

		volatile _Ty2& _Get_second() volatile noexcept
		{
			return (_Myval2);
		}

		const volatile _Ty2& _Get_second() const volatile noexcept
		{
			return (_Myval2);
		}
	};

	template<class _Ty1,
		class _Ty2>
		class _Compressed_pair<_Ty1, _Ty2, false> final

	{
	private:
		_Ty1 _Myval1;
		_Ty2 _Myval2;

	public:
		template<class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t,
			_Other2&&... _Val2)
			: _Myval1(), _Myval2(::std::forward<_Other2>(_Val2)...)
		{
		}

		template<class _Other1,
			class... _Other2>
			_Compressed_pair(_One_then_variadic_args_t,
				_Other1&& _Val1, _Other2&&... _Val2)
			: _Myval1(::std::forward<_Other1>(_Val1)),
			_Myval2(::std::forward<_Other2>(_Val2)...)
		{
		}


		_Ty1& _Get_first() noexcept
		{
			return (_Myval1);
		}

		const _Ty1& _Get_first() const noexcept
		{
			return (_Myval1);
		}

		volatile _Ty1& _Get_first() volatile noexcept
		{
			return (_Myval1);
		}

		const volatile _Ty1& _Get_first() const volatile noexcept
		{
			return (_Myval1);
		}

		_Ty2& _Get_second() noexcept
		{
			return (_Myval2);
		}

		const _Ty2& _Get_second() const noexcept
		{
			return (_Myval2);
		}

		volatile _Ty2& _Get_second() volatile noexcept
		{
			return (_Myval2);
		}

		const volatile _Ty2& _Get_second() const volatile noexcept
		{
			return (_Myval2);
		}
	};


	template<class _Ty,
		class = void>
		struct _Is_checked_helper
		: false_type
	{
	};

	template<class _Ty>
	struct _Is_checked_helper<_Ty, void_t<
		typename _Ty::_Unchecked_type> >
		: true_type
	{
	};


	template<class _Iter> inline
		typename _Is_checked_helper<_Iter>::type _Is_checked(_Iter)
	{
		return{};
	}


	template<class _Iter> inline
		_Iter _Unchecked(_Iter _Src)
	{
		return (_Src);
	}















	template<class _Iter> inline
		_Iter _Unchecked_idl0(_Iter _Src)
	{
		return (_Src);
	}




	template<class _Iter,
		class _UIter> inline
		_Iter& _Rechecked(_Iter& _Dest, _UIter _Src)
	{
		_Dest = _Src;
		return (_Dest);
	}













































	struct input_iterator_tag
	{
	};

	struct _Mutable_iterator_tag
	{
	};

	struct output_iterator_tag
		: _Mutable_iterator_tag
	{
	};

	struct forward_iterator_tag
		: input_iterator_tag, _Mutable_iterator_tag
	{
	};

	struct bidirectional_iterator_tag
		: forward_iterator_tag
	{
	};

	struct random_access_iterator_tag
		: bidirectional_iterator_tag
	{
	};


	struct _General_ptr_iterator_tag
	{
	};

	struct _Trivially_copyable_ptr_iterator_tag
		: _General_ptr_iterator_tag
	{
	};

	struct _Really_trivial_ptr_iterator_tag
		: _Trivially_copyable_ptr_iterator_tag
	{
	};


	struct _Any_tag
	{
		constexpr _Any_tag() noexcept = default;
		template<class _Ty>
		constexpr _Any_tag(_Ty&&) noexcept {}
	};


	template<class _Category,
		class _Ty,
		class _Diff = ptrdiff_t,
		class _Pointer = _Ty *,
		class _Reference = _Ty&>
		struct iterator
	{
		typedef _Category iterator_category;
		typedef _Ty value_type;
		typedef _Diff difference_type;

		typedef _Pointer pointer;
		typedef _Reference reference;
	};

	template<class _Category,
		class _Ty,
		class _Diff,
		class _Pointer,
		class _Reference,
		class _Base>
		struct _Iterator012
		: public _Base
	{
		typedef _Category iterator_category;
		typedef _Ty value_type;
		typedef _Diff difference_type;

		typedef _Pointer pointer;
		typedef _Reference reference;
	};


	typedef iterator<output_iterator_tag, void, void, void, void> _Outit;


	template<class,
		class = void>
		struct _Iterator_traits_base
	{
	};

	template<class _Iter>
	struct _Iterator_traits_base<_Iter, void_t<
		typename _Iter::iterator_category,
		typename _Iter::value_type,
		typename _Iter::difference_type,
		typename _Iter::pointer,
		typename _Iter::reference
	> >
	{
		typedef typename _Iter::iterator_category iterator_category;
		typedef typename _Iter::value_type value_type;
		typedef typename _Iter::difference_type difference_type;

		typedef typename _Iter::pointer pointer;
		typedef typename _Iter::reference reference;
	};

	template<class _Iter>
	struct iterator_traits
		: _Iterator_traits_base<_Iter>
	{
	};

	template<class _Ty>
	struct iterator_traits<_Ty *>
	{
		typedef random_access_iterator_tag iterator_category;
		typedef _Ty value_type;
		typedef ptrdiff_t difference_type;

		typedef _Ty *pointer;
		typedef _Ty& reference;
	};

	template<class _Ty>
	struct iterator_traits<const _Ty *>
	{
		typedef random_access_iterator_tag iterator_category;
		typedef _Ty value_type;
		typedef ptrdiff_t difference_type;

		typedef const _Ty *pointer;
		typedef const _Ty& reference;
	};


	template<class _Iter>
	using _Iter_value_t = typename iterator_traits<_Iter>::value_type;


	template<class _Iter>
	using _Iter_diff_t = typename iterator_traits<_Iter>::difference_type;


	template<class _Iter>
	using _Iter_cat_t = typename iterator_traits<_Iter>::iterator_category;


	template<class _Ty,
		class = void>
		struct _Is_iterator
		: false_type
	{
	};

	template<class _Ty>
	struct _Is_iterator<_Ty, void_t<
		typename iterator_traits<_Ty>::iterator_category
	> >
		: true_type
	{
	};











	template<class _Iter,
		class _Diff> inline
		auto _Unchecked_n1(_Iter _Src, _Diff, false_type)
	{
		return (_Src);
	}

	template<class _Iter,
		class _Diff> inline
		auto _Unchecked_n1(_Iter _Src, _Diff _Count, true_type)
	{
		if (0 < _Count)
		{
			static_cast<void>((_Src)+(_Count));
		}

		return (_Unchecked(_Src));
	}

	template<class _Iter,
		class _Diff> inline
		auto _Unchecked_n(_Iter _Src, _Diff _Count)
	{
		return (_Unchecked_n1(_Src, _Count, is_base_of<random_access_iterator_tag, _Iter_cat_t<_Iter>>()));
	}




	template<class _Ty1,
		class _Ty2>
		struct _Is_same_size
		: bool_constant<sizeof(_Ty1) == sizeof(_Ty2)>
	{
	};


	template<class _Elem,
		bool _Is_enum = is_enum<_Elem>::value>
		struct _Unwrap_enum
	{
		typedef underlying_type_t<_Elem> type;
	};

	template<class _Elem>
	struct _Unwrap_enum<_Elem, false>
	{
		typedef _Elem type;
	};


	template<class _Ty1,
		class _Ty2>
		struct _Both_or_neither_bool
		: bool_constant<is_same<bool, _Ty1>::value == is_same<bool, _Ty2>::value>
	{
	};


	template<class _Source,
		class _Dest>
		struct _Ptr_cat_helper
	{
		typedef typename _Unwrap_enum<_Source>::type _USource;
		typedef typename _Unwrap_enum<_Dest>::type _UDest;
		typedef conditional_t<
			conjunction<
			_Is_same_size<_USource, _UDest>,
			is_integral<_USource>,
			is_integral<_UDest>,
			_Both_or_neither_bool<_USource, _UDest>,

			negation<is_volatile<_Source>>,
			negation<is_volatile<_Dest>>
			>::value,
			_Really_trivial_ptr_iterator_tag,
			_General_ptr_iterator_tag> type;
	};

	template<class _Elem>
	struct _Ptr_cat_helper<_Elem, _Elem>
	{
		typedef conditional_t<
			is_trivially_copyable<_Elem>::value,
			conditional_t<is_trivial<_Elem>::value,
			_Really_trivial_ptr_iterator_tag,
			_Trivially_copyable_ptr_iterator_tag>,
			_General_ptr_iterator_tag> type;
	};

	template<class _Anything>
	struct _Ptr_cat_helper<_Anything *, const _Anything *>
	{
		typedef _Really_trivial_ptr_iterator_tag type;
	};

	template<class _Source,
		class _Dest> inline
		_General_ptr_iterator_tag _Ptr_copy_cat(const _Source&, const _Dest&)
	{
		return{};
	}

	template<class _Source,
		class _Dest> inline
		conditional_t<is_trivially_assignable<_Dest&, _Source&>::value,
		typename _Ptr_cat_helper<remove_const_t<_Source>, _Dest>::type,
		_General_ptr_iterator_tag>
		_Ptr_copy_cat(_Source * const&, _Dest * const&)
	{
		return{};
	}

	template<class _Source,
		class _Dest> inline
		_General_ptr_iterator_tag _Ptr_move_cat(const _Source&, const _Dest&)
	{
		return{};
	}

	template<class _Source,
		class _Dest> inline
		conditional_t<is_trivially_assignable<_Dest&, _Source>::value,
		typename _Ptr_cat_helper<remove_const_t<_Source>, _Dest>::type,
		_General_ptr_iterator_tag>
		_Ptr_move_cat(_Source * const&, _Dest * const&)
	{
		return{};
	}











































































	template<class _Pr,
		class _Ty1,
		class _Ty2> inline
		constexpr bool _Debug_lt_pred(_Pr&& _Pred,
			_Ty1&& _Left, _Ty2&& _Right,
			_Dbfile_t _File, _Dbline_t _Line)
		noexcept(noexcept(!_Pred(_Left, _Right)) && noexcept(_Pred(_Right, _Left)))
	{
		return (!_Pred(_Left, _Right)
			? false
			: _Pred(_Right, _Left)
			? (_Debug_message(L"invalid comparator", _File, _Line), true)
			: true);
	}


	template<class _Ty1,
		class _Ty2> inline
		constexpr bool _Debug_lt(_Ty1&& _Left, _Ty2&& _Right,
			_Dbfile_t _File, _Dbline_t _Line)
		noexcept(noexcept(!(_Left < _Right)) && noexcept(_Right < _Left))
	{
		return (_Debug_lt_pred(less<>(),
			::std::forward<_Ty1>(_Left), ::std::forward<_Ty2>(_Right), _File, _Line));
	}


	template<class _InIt> inline
		void _Debug_pointer(_InIt&, _Dbfile_t, _Dbline_t)
	{
	}

	template<class _Ty> inline
		void _Debug_pointer(_Ty *_Ptr, _Dbfile_t _File, _Dbline_t _Line)
	{
		if (_Ptr == 0)
			_Debug_message(L"invalid null pointer", _File, _Line);
	}


	template<class _InIt> inline
		void _Debug_pointer_if(bool, _InIt&, _Dbfile_t, _Dbline_t)
	{
	}

	template<class _Ty> inline
		void _Debug_pointer_if(bool _Test, _Ty *_Ptr,
			_Dbfile_t _File, _Dbline_t _Line)
	{
		if (_Test && _Ptr == 0)
			_Debug_message(L"invalid null pointer", _File, _Line);
	}


	template<class _InIt> inline
		void _Debug_range2(_InIt _First, _InIt _Last,
			_Dbfile_t, _Dbline_t, input_iterator_tag)
	{
		static_cast<void>(_First == _Last);
	}

	template<class _RanIt> inline
		void _Debug_range2(_RanIt _First, _RanIt _Last,
			_Dbfile_t _File, _Dbline_t _Line, random_access_iterator_tag)
	{
		if (_First != _Last)
		{
			_Debug_pointer(_First, _File, _Line);
			_Debug_pointer(_Last, _File, _Line);
			if (_Last < _First)
				_Debug_message(L"invalid iterator range", _File, _Line);
		}
	}

	template<class _InIt> inline
		void _Debug_range(_InIt _First, _InIt _Last,
			_Dbfile_t _File, _Dbline_t _Line)
	{
		_Debug_range2(_First, _Last, _File, _Line, _Iter_cat_t<_InIt>());
	}


	template<class _InIt,
		class _Pty> inline
		void _Debug_range_ptr2(_InIt _First, _InIt _Last, _Pty& _Ptr,
			_Dbfile_t _File, _Dbline_t _Line, input_iterator_tag)
	{
		if (_First != _Last)
			_Debug_pointer(_Ptr, _File, _Line);
	}

	template<class _RanIt,
		class _Pty> inline
		void _Debug_range_ptr2(_RanIt _First, _RanIt _Last, _Pty& _Ptr,
			_Dbfile_t _File, _Dbline_t _Line, random_access_iterator_tag)
	{
		if (_First != _Last)
		{
			_Debug_pointer(_First, _File, _Line);
			_Debug_pointer(_Last, _File, _Line);
			if (_Last < _First)
				_Debug_message(L"invalid iterator range", _File, _Line);
			_Debug_pointer(_Ptr, _File, _Line);
		}
	}

	template<class _InIt,
		class _Pty> inline
		void _Debug_range_ptr(_InIt _First, _InIt _Last, _Pty& _Ptr,
			_Dbfile_t _File, _Dbline_t _Line)
	{
		_Debug_range_ptr2(_First, _Last, _Ptr, _File, _Line, _Iter_cat_t<_InIt>());
	}


	template<class _InIt,
		class _Pr> inline
		void _Debug_order2(_InIt, _InIt, _Pr&,
			_Dbfile_t, _Dbline_t, input_iterator_tag)
	{
	}

	template<class _FwdIt,
		class _Pr> inline
		void _Debug_order2(_FwdIt _First, _FwdIt _Last, _Pr& _Pred,
			_Dbfile_t _File, _Dbline_t _Line, forward_iterator_tag)
	{
		for (_FwdIt _Next = _First; _First != _Last && ++_Next != _Last; ++_First)
			if (_Debug_lt_pred(_Pred, *_Next, *_First, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1017))
				_Debug_message(L"sequence not ordered", _File, _Line);
	}

	template<class _InIt,
		class _Pr> inline
		void _Debug_order(_InIt _First, _InIt _Last, _Pr&& _Pred,
			_Dbfile_t _File, _Dbline_t _Line)
	{
		_Debug_range_ptr(_First, _Last, _Pred, _File, _Line);
		_Debug_order2(_First, _Last, _Pred, _File, _Line, _Iter_cat_t<_InIt>());
	}














	template<class _Ty,
		size_t _Actual,
		class _Diff> inline
		void _Debug_array_size2(_Ty(&)[_Actual], _Diff _Desired,
			_Dbfile_t _File, _Dbline_t _Line)
	{
		if (_Actual < _Desired)
			_Debug_message(L"array too small", _File, _Line);
	}





	template<class _InIt,
		class _Diff> inline
		void _Advance1(_InIt& _Where, _Diff _Off, input_iterator_tag)
	{

		if (_Off < 0)
			_Debug_message(L"negative offset in advance", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1063);


		for (; 0 < _Off; --_Off)
			++_Where;
	}

	template<class _BidIt,
		class _Diff> inline
		void _Advance1(_BidIt& _Where, _Diff _Off, bidirectional_iterator_tag)
	{
		for (; 0 < _Off; --_Off)
			++_Where;
		for (; _Off < 0; ++_Off)
			--_Where;
	}

	template<class _RanIt,
		class _Diff> inline
		void _Advance1(_RanIt& _Where, _Diff _Off, random_access_iterator_tag)
	{
		_Where += _Off;
	}

	template<class _InIt,
		class _Diff> inline
		void advance(_InIt& _Where, _Diff _Off)
	{

		_Advance1(_Where, _Off, _Iter_cat_t<remove_const_t<_InIt>>());
	}


	template<class _InIt> inline
		_Iter_diff_t<_InIt>
		_Distance1(_InIt _First, _InIt _Last, input_iterator_tag)
	{
		_Iter_diff_t<_InIt> _Off = 0;
		for (; _First != _Last; ++_First)
			++_Off;

		return (_Off);
	}

	template<class _RanIt> inline
		_Iter_diff_t<_RanIt>
		_Distance1(_RanIt _First, _RanIt _Last, random_access_iterator_tag)
	{

		if (_First != _Last)
		{
			_Debug_pointer(_First, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1114);
			_Debug_pointer(_Last, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1115);
		}


		return (_Last - _First);
	}

	template<class _InIt> inline
		_Iter_diff_t<_InIt>
		distance(_InIt _First, _InIt _Last)
	{
		return (_Distance1(_First, _Last, _Iter_cat_t<_InIt>()));
	}


	template<class _InIt> inline
		_InIt next(_InIt _First, _Iter_diff_t<_InIt> _Off = 1)
	{
		static_assert(is_base_of<input_iterator_tag,
			typename iterator_traits<_InIt>::iterator_category>::value,
			"next requires input iterator");

		::std::advance(_First, _Off);
		return (_First);
	}


	template<class _BidIt> inline
		_BidIt prev(_BidIt _First, _Iter_diff_t<_BidIt> _Off = 1)
	{
		static_assert(is_base_of<bidirectional_iterator_tag,
			typename iterator_traits<_BidIt>::iterator_category>::value,
			"prev requires bidirectional iterator");

		::std::advance(_First, -_Off);
		return (_First);
	}


	template<class _Ty>
	struct pointer_traits;

	template<class _RanIt>
	class reverse_iterator
		: public iterator<
		typename iterator_traits<_RanIt>::iterator_category,
		typename iterator_traits<_RanIt>::value_type,
		typename iterator_traits<_RanIt>::difference_type,
		typename iterator_traits<_RanIt>::pointer,
		typename iterator_traits<_RanIt>::reference>
	{
		typedef reverse_iterator<_RanIt> _Myt;

	public:
		typedef typename iterator_traits<_RanIt>::difference_type difference_type;
		typedef typename iterator_traits<_RanIt>::pointer pointer;
		typedef typename iterator_traits<_RanIt>::reference reference;
		typedef _RanIt iterator_type;

		reverse_iterator()
			: current()
		{
		}

		explicit reverse_iterator(_RanIt _Right)
			: current(_Right)
		{
		}

		template<class _Other>
		reverse_iterator(const reverse_iterator<_Other>& _Right)
			: current(_Right.base())
		{
		}

		template<class _Other>
		_Myt& operator=(const reverse_iterator<_Other>& _Right)
		{
			current = _Right.base();
			return (*this);
		}

		_RanIt base() const
		{
			return (current);
		}

		reference operator*() const
		{
			_RanIt _Tmp = current;
			return (*--_Tmp);
		}

		pointer operator->() const
		{
			return (pointer_traits<pointer>::pointer_to(**this));
		}

		_Myt& operator++()
		{
			--current;
			return (*this);
		}

		_Myt operator++(int)
		{
			_Myt _Tmp = *this;
			--current;
			return (_Tmp);
		}

		_Myt& operator--()
		{
			++current;
			return (*this);
		}

		_Myt operator--(int)
		{
			_Myt _Tmp = *this;
			++current;
			return (_Tmp);
		}



		_Myt& operator+=(difference_type _Off)
		{
			current -= _Off;
			return (*this);
		}

		_Myt operator+(difference_type _Off) const
		{
			return (_Myt(current - _Off));
		}

		_Myt& operator-=(difference_type _Off)
		{
			current += _Off;
			return (*this);
		}

		_Myt operator-(difference_type _Off) const
		{
			return (_Myt(current + _Off));
		}

		reference operator[](difference_type _Off) const
		{
			return (*(*this + _Off));
		}

	protected:
		_RanIt current;
	};

	template<class _RanIt>
	struct _Is_checked_helper<reverse_iterator<_RanIt> >
		: public _Is_checked_helper<_RanIt>
	{
	};


	template<class _RanIt> inline
		reverse_iterator<_RanIt> operator+(
			typename reverse_iterator<_RanIt>::difference_type _Off,
			const reverse_iterator<_RanIt>& _Right)
	{
		return (_Right + _Off);
	}

	template<class _RanIt1,
		class _RanIt2>
		auto inline operator-(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
		-> decltype(_Right.base() - _Left.base())
	{
		return (_Right.base() - _Left.base());
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator==(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
	{
		return (_Left.base() == _Right.base());
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator!=(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
	{
		return (!(_Left == _Right));
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator<(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
	{
		return (_Right.base() < _Left.base());
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator>(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
	{
		return (_Right < _Left);
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator<=(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
	{
		return (!(_Right < _Left));
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator>=(const reverse_iterator<_RanIt1>& _Left,
			const reverse_iterator<_RanIt2>& _Right)
	{
		return (!(_Left < _Right));
	}


	template<class _RanIt> inline
		reverse_iterator<_RanIt> make_reverse_iterator(_RanIt _Iter)
	{
		return (reverse_iterator<_RanIt>(_Iter));
	}



	template<class _Container>
	auto inline begin(_Container& _Cont) -> decltype(_Cont.begin())
	{
		return (_Cont.begin());
	}

	template<class _Container>
	auto inline begin(const _Container& _Cont) -> decltype(_Cont.begin())
	{
		return (_Cont.begin());
	}

	template<class _Container>
	auto inline end(_Container& _Cont) -> decltype(_Cont.end())
	{
		return (_Cont.end());
	}

	template<class _Container>
	auto inline end(const _Container& _Cont) -> decltype(_Cont.end())
	{
		return (_Cont.end());
	}

	template<class _Ty,
		size_t _Size> inline
		constexpr _Ty *begin(_Ty(&_Array)[_Size]) noexcept
	{
		return (_Array);
	}

	template<class _Ty,
		size_t _Size> inline
		constexpr _Ty *end(_Ty(&_Array)[_Size]) noexcept
	{
		return (_Array + _Size);
	}


	template<class _Container>
	constexpr auto inline cbegin(const _Container& _Cont)
		noexcept(noexcept(::std::begin(_Cont)))
		-> decltype(::std::begin(_Cont))
	{
		return (::std::begin(_Cont));
	}

	template<class _Container>
	constexpr auto inline cend(const _Container& _Cont)
		noexcept(noexcept(::std::end(_Cont)))
		-> decltype(::std::end(_Cont))
	{
		return (::std::end(_Cont));
	}


	template<class _Container>
	auto inline rbegin(_Container& _Cont) -> decltype(_Cont.rbegin())
	{
		return (_Cont.rbegin());
	}

	template<class _Container>
	auto inline rbegin(const _Container& _Cont) -> decltype(_Cont.rbegin())
	{
		return (_Cont.rbegin());
	}

	template<class _Container>
	auto inline rend(_Container& _Cont) -> decltype(_Cont.rend())
	{
		return (_Cont.rend());
	}

	template<class _Container>
	auto inline rend(const _Container& _Cont) -> decltype(_Cont.rend())
	{
		return (_Cont.rend());
	}

	template<class _Ty,
		size_t _Size> inline
		reverse_iterator<_Ty *> rbegin(_Ty(&_Array)[_Size])
	{
		return (reverse_iterator<_Ty *>(_Array + _Size));
	}

	template<class _Ty,
		size_t _Size> inline
		reverse_iterator<_Ty *> rend(_Ty(&_Array)[_Size])
	{
		return (reverse_iterator<_Ty *>(_Array));
	}

	template<class _Elem> inline
		reverse_iterator<const _Elem *>
		rbegin(::std::initializer_list<_Elem> _Ilist)
	{
		return (reverse_iterator<const _Elem *>(_Ilist.end()));
	}

	template<class _Elem> inline
		reverse_iterator<const _Elem *>
		rend(::std::initializer_list<_Elem> _Ilist)
	{
		return (reverse_iterator<const _Elem *>(_Ilist.begin()));
	}


	template<class _Container>
	auto inline crbegin(const _Container& _Cont)
		-> decltype(::std::rbegin(_Cont))
	{
		return (::std::rbegin(_Cont));
	}

	template<class _Container>
	auto inline crend(const _Container& _Cont)
		-> decltype(::std::rend(_Cont))
	{
		return (::std::rend(_Cont));
	}


	template<class _Container>
	constexpr auto inline size(const _Container& _Cont)
		-> decltype(_Cont.size())
	{
		return (_Cont.size());
	}

	template<class _Ty,
		size_t _Size> inline
		constexpr size_t size(const _Ty(&)[_Size]) noexcept
	{
		return (_Size);
	}

	template<class _Container>
	constexpr auto inline empty(const _Container& _Cont)
		-> decltype(_Cont.empty())
	{
		return (_Cont.empty());
	}

	template<class _Ty,
		size_t _Size> inline
		constexpr bool empty(const _Ty(&)[_Size]) noexcept
	{
		return (false);
	}

	template<class _Elem> inline
		constexpr bool empty(
			::std::initializer_list<_Elem> _Ilist) noexcept
	{
		return (_Ilist.size() == 0);
	}

	template<class _Container>
	constexpr auto inline data(_Container& _Cont)
		-> decltype(_Cont.data())
	{
		return (_Cont.data());
	}

	template<class _Container>
	constexpr auto inline data(const _Container& _Cont)
		-> decltype(_Cont.data())
	{
		return (_Cont.data());
	}

	template<class _Ty,
		size_t _Size> inline
		constexpr _Ty *data(_Ty(&_Array)[_Size]) noexcept
	{
		return (_Array);
	}

	template<class _Elem> inline
		constexpr const _Elem *data(
			::std::initializer_list<_Elem> _Ilist) noexcept
	{
		return (_Ilist.begin());
	}


	template<class _Ty,
		size_t _Size>
		class _Array_const_iterator
		: public _Iterator012<random_access_iterator_tag,
		_Ty,
		ptrdiff_t,
		const _Ty *,
		const _Ty&,
		_Iterator_base>
	{
	public:
		typedef _Array_const_iterator<_Ty, _Size> _Myiter;
		typedef random_access_iterator_tag iterator_category;

		typedef _Ty value_type;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;
		typedef const _Ty *pointer;
		typedef const _Ty& reference;
		enum { _EEN_SIZE = _Size };






























































































































		_Array_const_iterator()
			: _Ptr(),
			_Idx(0)
		{
		}

		explicit _Array_const_iterator(pointer _Parg, size_t _Off = 0)
			: _Ptr(_Parg),
			_Idx(_Off)
		{
		}

		typedef pointer _Unchecked_type;

		_Myiter& _Rechecked(_Unchecked_type _Right)
		{
			_Idx = _Right - _Ptr;
			return (*this);
		}

		_Unchecked_type _Unchecked() const
		{
			return (_Ptr + _Idx);
		}

		reference operator*() const
		{

			if (_Ptr == 0
				|| _Size <= _Idx)
			{
				_Debug_message(L"array iterator not dereferencable", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1718);
				{ (void)((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1719, 0, L"%ls", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1719, 0); };
			}






			;

			return (_Ptr[_Idx]);
		}

		pointer operator->() const
		{
			return (pointer_traits<pointer>::pointer_to(**this));
		}

		_Myiter& operator++()
		{

			if (_Ptr == 0
				|| _Size <= _Idx)
			{
				_Debug_message(L"array iterator not incrementable", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1743);
				{ (void)((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1744, 0, L"%ls", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1744, 0); };
			}






			++_Idx;
			return (*this);
		}

		_Myiter operator++(int)
		{
			_Myiter _Tmp = *this;
			++*this;
			return (_Tmp);
		}

		_Myiter& operator--()
		{

			if (_Ptr == 0
				|| _Idx <= 0)
			{
				_Debug_message(L"array iterator not decrementable", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1769);
				{ (void)((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1770, 0, L"%ls", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1770, 0); };
			}






			--_Idx;
			return (*this);
		}

		_Myiter operator--(int)
		{
			_Myiter _Tmp = *this;
			--*this;
			return (_Tmp);
		}

		_Myiter& operator+=(difference_type _Off)
		{

			if (_Size < _Idx + _Off)
			{
				_Debug_message(L"array iterator + offset out of range", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1794);
				{ (void)((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1795, 0, L"%ls", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1795, 0); };
			}





			_Idx += _Off;
			return (*this);
		}

		_Myiter operator+(difference_type _Off) const
		{
			_Myiter _Tmp = *this;
			return (_Tmp += _Off);
		}

		_Myiter& operator-=(difference_type _Off)
		{
			return (*this += -_Off);
		}

		_Myiter operator-(difference_type _Off) const
		{
			_Myiter _Tmp = *this;
			return (_Tmp -= _Off);
		}

		difference_type operator-(const _Myiter& _Right) const
		{
			_Compat(_Right);
			return (_Idx < _Right._Idx
				? -(difference_type)(_Right._Idx - _Idx)
				: (difference_type)_Idx - _Right._Idx);
		}

		reference operator[](difference_type _Off) const
		{
			return (*(*this + _Off));
		}

		bool operator==(const _Myiter& _Right) const
		{
			_Compat(_Right);
			return (_Idx == _Right._Idx);
		}

		bool operator!=(const _Myiter& _Right) const
		{
			return (!(*this == _Right));
		}

		bool operator<(const _Myiter& _Right) const
		{
			_Compat(_Right);
			return (_Idx < _Right._Idx);
		}

		bool operator>(const _Myiter& _Right) const
		{
			return (_Right < *this);
		}

		bool operator<=(const _Myiter& _Right) const
		{
			return (!(_Right < *this));
		}

		bool operator>=(const _Myiter& _Right) const
		{
			return (!(*this < _Right));
		}


		void _Compat(const _Myiter& _Right) const
		{
			if (_Ptr != _Right._Ptr)
			{
				_Debug_message(L"array iterators incompatible", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1873);
				{ (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1874, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 1874, 0); };
			}
		}








		pointer _Ptr;
		size_t _Idx;

	};

	template<class _Ty,
		size_t _Size> inline
		typename _Array_const_iterator<_Ty, _Size>::_Unchecked_type
		_Unchecked(_Array_const_iterator<_Ty, _Size> _Iter)
	{
		return (_Iter._Unchecked());
	}

	template<class _Ty,
		size_t _Size> inline
		_Array_const_iterator<_Ty, _Size>&
		_Rechecked(_Array_const_iterator<_Ty, _Size>& _Iter,
			typename _Array_const_iterator<_Ty, _Size>
			::_Unchecked_type _Right)
	{
		return (_Iter._Rechecked(_Right));
	}

	template<class _Ty,
		size_t _Size> inline
		_Array_const_iterator<_Ty, _Size> operator+(
			typename _Array_const_iterator<_Ty, _Size>::difference_type _Off,
			_Array_const_iterator<_Ty, _Size> _Next)
	{
		return (_Next += _Off);
	}


	template<class _Ty,
		size_t _Size>
		class _Array_iterator
		: public _Array_const_iterator<_Ty, _Size>
	{
	public:
		typedef _Array_iterator<_Ty, _Size> _Myiter;
		typedef _Array_const_iterator<_Ty, _Size> _Mybase;
		typedef random_access_iterator_tag iterator_category;

		typedef _Ty value_type;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;
		typedef _Ty *pointer;
		typedef _Ty& reference;

		_Array_iterator()
		{
		}

		explicit _Array_iterator(pointer _Parg, size_t _Off = 0)
			: _Mybase(_Parg, _Off)
		{
		}
		enum { _EEN_SIZE = _Size };
		typedef pointer _Unchecked_type;

		_Myiter& _Rechecked(_Unchecked_type _Right)
		{
			((_Mybase *)this)->_Rechecked(_Right);
			return (*this);
		}

		_Unchecked_type _Unchecked() const
		{
			return ((pointer)((_Mybase *)this)->_Unchecked());
		}

		reference operator*() const
		{
			return ((reference)**(_Mybase *)this);
		}

		pointer operator->() const
		{
			return (pointer_traits<pointer>::pointer_to(**this));
		}

		_Myiter& operator++()
		{
			++*(_Mybase *)this;
			return (*this);
		}

		_Myiter operator++(int)
		{
			_Myiter _Tmp = *this;
			++*this;
			return (_Tmp);
		}

		_Myiter& operator--()
		{
			--*(_Mybase *)this;
			return (*this);
		}

		_Myiter operator--(int)
		{
			_Myiter _Tmp = *this;
			--*this;
			return (_Tmp);
		}

		_Myiter& operator+=(difference_type _Off)
		{
			*(_Mybase *)this += _Off;
			return (*this);
		}

		_Myiter operator+(difference_type _Off) const
		{
			_Myiter _Tmp = *this;
			return (_Tmp += _Off);
		}

		_Myiter& operator-=(difference_type _Off)
		{
			return (*this += -_Off);
		}

		_Myiter operator-(difference_type _Off) const
		{
			_Myiter _Tmp = *this;
			return (_Tmp -= _Off);
		}

		difference_type operator-(const _Mybase& _Right) const
		{
			return (*(_Mybase *)this - _Right);
		}

		reference operator[](difference_type _Off) const
		{
			return (*(*this + _Off));
		}
	};

	template<class _Ty,
		size_t _Size> inline
		typename _Array_iterator<_Ty, _Size>::_Unchecked_type
		_Unchecked(_Array_iterator<_Ty, _Size> _Iter)
	{
		return (_Iter._Unchecked());
	}

	template<class _Ty,
		size_t _Size> inline
		_Array_iterator<_Ty, _Size>&
		_Rechecked(_Array_iterator<_Ty, _Size>& _Iter,
			typename _Array_iterator<_Ty, _Size>
			::_Unchecked_type _Right)
	{
		return (_Iter._Rechecked(_Right));
	}

	template<class _Ty,
		size_t _Size> inline
		_Array_iterator<_Ty, _Size> operator+(
			typename _Array_iterator<_Ty, _Size>::difference_type _Off,
			_Array_iterator<_Ty, _Size> _Next)
	{
		return (_Next += _Off);
	}


	template<class _RanIt>
	class move_iterator
	{
	public:
		typedef move_iterator<_RanIt> _Myt;
		typedef typename iterator_traits<_RanIt>::iterator_category
			iterator_category;
		typedef typename iterator_traits<_RanIt>::value_type
			value_type;
		typedef typename iterator_traits<_RanIt>::difference_type
			difference_type;
		typedef _RanIt pointer;
		typedef typename iterator_traits<_RanIt>::reference _Ref0;
		typedef conditional_t<is_reference<_Ref0>::value,
			remove_reference_t<_Ref0>&&, _Ref0> reference;
		typedef _RanIt iterator_type;

		move_iterator()
			: current()
		{
		}

		explicit move_iterator(iterator_type _Right)
			: current(_Right)
		{
		}

		template<class _RanIt2>
		move_iterator(const move_iterator<_RanIt2>& _Right)
			: current(_Right.base())
		{
		}

		template<class _RanIt2>
		_Myt& operator=(const move_iterator<_RanIt2>& _Right)
		{
			current = _Right.base();
			return (*this);
		}

		_RanIt base() const
		{
			return (current);
		}

		reference operator*() const
		{
			return (static_cast<reference>(*current));
		}

		pointer operator->() const
		{
			return (current);
		}

		_Myt& operator++()
		{
			++current;
			return (*this);
		}

		_Myt operator++(int)
		{
			_Myt _Tmp = *this;
			++current;
			return (_Tmp);
		}

		_Myt& operator--()
		{
			--current;
			return (*this);
		}

		_Myt operator--(int)
		{
			_Myt _Tmp = *this;
			--current;
			return (_Tmp);
		}

		template<class _RanIt2>
		bool _Equal(const move_iterator<_RanIt2>& _Right) const
		{
			return (current == _Right.base());
		}



		_Myt& operator+=(difference_type _Off)
		{
			current += _Off;
			return (*this);
		}

		_Myt operator+(difference_type _Off) const
		{
			return (_Myt(current + _Off));
		}

		_Myt& operator-=(difference_type _Off)
		{
			current -= _Off;
			return (*this);
		}

		_Myt operator-(difference_type _Off) const
		{
			return (_Myt(current - _Off));
		}

		reference operator[](difference_type _Off) const
		{
			return (::std::move(current[_Off]));
		}

		template<class _RanIt2>
		bool _Less(const move_iterator<_RanIt2>& _Right) const
		{
			return (current < _Right.base());
		}

		difference_type operator-(const _Myt& _Right) const
		{
			return (current - _Right.base());
		}

	protected:
		iterator_type current;
	};

	template<class _RanIt>
	struct _Is_checked_helper<move_iterator<_RanIt> >
		: public _Is_checked_helper<_RanIt>
	{
	};


	template<class _RanIt,
		class _Diff> inline
		move_iterator<_RanIt>
		operator+(_Diff _Off,
			const move_iterator<_RanIt>& _Right)
	{
		return (_Right + _Off);
	}

	template<class _RanIt1,
		class _RanIt2>
		auto inline operator-(
			move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
		-> decltype(_Left.base() - _Right.base())
	{
		return (_Left.base() - _Right.base());
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator==(
			const move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
	{
		return (_Left._Equal(_Right));
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator!=(
			const move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
	{
		return (!(_Left == _Right));
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator<(
			const move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
	{
		return (_Left._Less(_Right));
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator>(
			const move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
	{
		return (_Right < _Left);
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator<=(
			const move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
	{
		return (!(_Right < _Left));
	}

	template<class _RanIt1,
		class _RanIt2> inline
		bool operator>=(
			const move_iterator<_RanIt1>& _Left,
			const move_iterator<_RanIt2>& _Right)
	{
		return (!(_Left < _Right));
	}


	template<class _RanIt> inline
		move_iterator<_RanIt> make_move_iterator(_RanIt _Iter)
	{
		return (move_iterator<_RanIt>(_Iter));
	}


	template<class _Traits>
	struct _Char_traits_eq
	{
		typedef typename _Traits::char_type _Elem;

		bool operator()(_Elem _Left, _Elem _Right) const
		{
			return (_Traits::eq(_Left, _Right));
		}
	};


	template<class _Traits>
	struct _Char_traits_lt
	{
		typedef typename _Traits::char_type _Elem;

		bool operator()(_Elem _Left, _Elem _Right) const
		{
			return (_Traits::lt(_Left, _Right));
		}
	};


	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_memmove(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{
		const char * const _First_ch = reinterpret_cast<const char *>(_First);
		const char * const _Last_ch = reinterpret_cast<const char *>(_Last);
		char * const _Dest_ch = reinterpret_cast<char *>(_Dest);
		const size_t _Count = _Last_ch - _First_ch;
		::memmove(_Dest_ch, _First_ch, _Count);
		return (reinterpret_cast<_OutIt>(_Dest_ch + _Count));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_unchecked1(_InIt _First, _InIt _Last,
			_OutIt _Dest, _General_ptr_iterator_tag)
	{
		for (; _First != _Last; ++_Dest, (void)++_First)
			*_Dest = *_First;
		return (_Dest);
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_unchecked1(_InIt _First, _InIt _Last,
			_OutIt _Dest, _Trivially_copyable_ptr_iterator_tag)
	{
		return (_Copy_memmove(_First, _Last, _Dest));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_unchecked(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{

		return (_Copy_unchecked1(_First, _Last,
			_Dest, _Ptr_copy_cat(_First, _Dest)));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_no_deprecate1(_InIt _First, _InIt _Last,
			_OutIt _Dest, input_iterator_tag, _Any_tag)
	{
		return (_Rechecked(_Dest,
			_Copy_unchecked(_First, _Last, _Unchecked_idl0(_Dest))));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_no_deprecate1(_InIt _First, _InIt _Last,
			_OutIt _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{
		static_cast<void>((_Dest)+((_Last)-(_First)));
		return (_Rechecked(_Dest,
			_Copy_unchecked(_First, _Last, _Unchecked(_Dest))));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Copy_no_deprecate(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{
		_Debug_range_ptr(_First, _Last, _Dest, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2362);
		return (_Copy_no_deprecate1(_Unchecked(_First), _Unchecked(_Last),
			_Dest, _Iter_cat_t<_InIt>(), _Iter_cat_t<_OutIt>()));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt copy(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{
		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "copy" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
		return (_Copy_no_deprecate(_First, _Last, _Dest));
	}


	template<class _InIt,
		class _OutTy,
		size_t _OutSize> inline
		_OutTy *copy(_InIt _First, _InIt _Last,
			_OutTy(&_Dest)[_OutSize])
	{
		return (_Unchecked(
			_Copy_no_deprecate(_First, _Last,
				_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}



	template<class _InIt,
		class _Diff,
		class _OutIt> inline
		_OutIt _Copy_n_unchecked2(_InIt _First, _Diff _Count,
			_OutIt _Dest, input_iterator_tag)
	{
		if (0 < _Count)
		{
			*_Dest = *_First;
			while (0 < --_Count)
				*++_Dest = *++_First;
			return (++_Dest);
		}

		return (_Dest);
	}

	template<class _InIt,
		class _Diff,
		class _OutIt> inline
		_OutIt _Copy_n_unchecked2(_InIt _First, _Diff _Count,
			_OutIt _Dest, forward_iterator_tag)
	{
		for (; 0 < _Count; --_Count, (void)++_Dest, ++_First)
			*_Dest = *_First;
		return (_Dest);
	}

	template<class _InIt,
		class _Diff,
		class _OutIt> inline
		_OutIt _Copy_n_unchecked1(_InIt _First, _Diff _Count,
			_OutIt _Dest, _General_ptr_iterator_tag)
	{


		return (_Copy_n_unchecked2(_First, _Count,
			_Dest, _Iter_cat_t<_InIt>()));
	}

	template<class _InIt,
		class _Diff,
		class _OutIt> inline
		_OutIt _Copy_n_unchecked1(_InIt _First, _Diff _Count,
			_OutIt _Dest, _Trivially_copyable_ptr_iterator_tag)
	{
		if (0 < _Count)
			return (_Copy_memmove(_First, _First + _Count, _Dest));
		return (_Dest);
	}

	template<class _InIt,
		class _Diff,
		class _OutIt> inline
		_OutIt _Copy_n_unchecked(_InIt _First, _Diff _Count,
			_OutIt _Dest)
	{
		return (_Copy_n_unchecked1(_First, _Count,
			_Dest, _Ptr_copy_cat(_First, _Dest)));
	}

	template<class _InIt,
		class _Diff,
		class _OutIt> inline
		_OutIt copy_n(_InIt _First, _Diff _Count,
			_OutIt _Dest)
	{

		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "copy_n" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
		return (_Rechecked(_Dest,
			_Copy_n_unchecked(_Unchecked_n(_First, _Count), _Count, _Unchecked_n(_Dest, _Count))));
	}


	template<class _InTy,
		size_t _InSize,
		class _Diff,
		class _OutIt> inline
		_OutIt copy_n(_InTy(&_First)[_InSize], _Diff _Count,
			_OutIt _Dest)
	{

		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "copy_n" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
		_Debug_array_size2(_First, _Count, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2473);
		return (_Rechecked(_Dest,
			_Copy_n_unchecked(_First, _Count, _Unchecked_n(_Dest, _Count))));
	}

	template<class _InIt,
		class _Diff,
		class _OutTy,
		size_t _OutSize> inline
		_OutTy *copy_n(_InIt _First, _Diff _Count,
			_OutTy(&_Dest)[_OutSize])
	{
		_Debug_array_size2(_Dest, _Count, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2485);
		return (_Copy_n_unchecked(_Unchecked_n(_First, _Count), _Count, _Dest));
	}

	template<class _InTy,
		size_t _InSize,
		class _Diff,
		class _OutTy,
		size_t _OutSize> inline
		_OutTy *copy_n(_InTy(&_First)[_InSize], _Diff _Count,
			_OutTy(&_Dest)[_OutSize])
	{
		_Debug_array_size2(_First, _Count, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2497);
		_Debug_array_size2(_Dest, _Count, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2498);
		return (_Copy_n_unchecked(_First, _Count, _Dest));
	}



	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Copy_backward_memmove(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest)
	{
		const char * const _First_ch = reinterpret_cast<const char *>(_First);
		const char * const _Last_ch = reinterpret_cast<const char *>(_Last);
		char * const _Dest_ch = reinterpret_cast<char *>(_Dest);
		const size_t _Count = _Last_ch - _First_ch;
		return (static_cast<_BidIt2>(
			::memmove(_Dest_ch - _Count, _First_ch, _Count)));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Copy_backward_unchecked1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, _General_ptr_iterator_tag)
	{
		while (_First != _Last)
			*--_Dest = *--_Last;
		return (_Dest);
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Copy_backward_unchecked1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, _Trivially_copyable_ptr_iterator_tag)
	{
		return (_Copy_backward_memmove(_First, _Last, _Dest));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Copy_backward_unchecked(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest)
	{
		return (_Copy_backward_unchecked1(_First, _Last,
			_Dest, _Ptr_copy_cat(_First, _Dest)));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Copy_backward1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, input_iterator_tag, _Any_tag)
	{
		return (_Rechecked(_Dest,
			_Copy_backward_unchecked(_First, _Last, _Unchecked_idl0(_Dest))));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Copy_backward1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{
		static_cast<void>((_Dest)-((_Last)-(_First)));
		return (_Rechecked(_Dest,
			_Copy_backward_unchecked(_First, _Last, _Unchecked(_Dest))));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 copy_backward(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest)
	{
		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "copy_backward" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
		_Debug_range_ptr(_First, _Last, _Dest, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2569);
		return (_Copy_backward1(_Unchecked(_First), _Unchecked(_Last),
			_Dest, _Iter_cat_t<_BidIt1>(), _Iter_cat_t<_BidIt2>()));
	}


	template<class _InIt,
		class _OutIt> inline
		_OutIt _Move_unchecked1(_InIt _First, _InIt _Last,
			_OutIt _Dest, _General_ptr_iterator_tag)
	{
		for (; _First != _Last; ++_Dest, (void)++_First)
			*_Dest = ::std::move(*_First);
		return (_Dest);
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Move_unchecked1(_InIt _First, _InIt _Last,
			_OutIt _Dest, _Trivially_copyable_ptr_iterator_tag)
	{
		return (_Copy_memmove(_First, _Last, _Dest));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Move_unchecked(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{
		return (_Move_unchecked1(_First, _Last,
			_Dest, _Ptr_move_cat(_First, _Dest)));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Move_no_deprecate1(_InIt _First, _InIt _Last,
			_OutIt _Dest, input_iterator_tag, _Any_tag)
	{
		return (_Rechecked(_Dest,
			_Move_unchecked(_First, _Last, _Unchecked_idl0(_Dest))));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Move_no_deprecate1(_InIt _First, _InIt _Last,
			_OutIt _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{
		static_cast<void>((_Dest)+((_Last)-(_First)));
		return (_Rechecked(_Dest,
			_Move_unchecked(_First, _Last, _Unchecked(_Dest))));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt _Move_no_deprecate(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{
		_Debug_range_ptr(_First, _Last, _Dest, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2626);
		return (_Move_no_deprecate1(_Unchecked(_First), _Unchecked(_Last),
			_Dest, _Iter_cat_t<_InIt>(), _Iter_cat_t<_OutIt>()));
	}

	template<class _InIt,
		class _OutIt> inline
		_OutIt move(_InIt _First, _InIt _Last,
			_OutIt _Dest)
	{
		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "move" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
		return (_Move_no_deprecate(_First, _Last, _Dest));
	}


	template<class _InIt,
		class _OutTy,
		size_t _OutSize> inline
		_OutTy *move(_InIt _First, _InIt _Last,
			_OutTy(&_Dest)[_OutSize])
	{
		return (_Unchecked(
			_Move_no_deprecate(_First, _Last,
				_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}



	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Move_backward_unchecked1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, _General_ptr_iterator_tag)
	{
		while (_First != _Last)
			*--_Dest = ::std::move(*--_Last);
		return (_Dest);
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Move_backward_unchecked1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, _Trivially_copyable_ptr_iterator_tag)
	{
		return (_Copy_backward_memmove(_First, _Last, _Dest));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Move_backward_unchecked(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest)
	{
		return (_Move_backward_unchecked1(_First, _Last,
			_Dest, _Ptr_move_cat(_First, _Dest)));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Move_backward1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, input_iterator_tag, _Any_tag)
	{
		return (_Rechecked(_Dest,
			_Move_backward_unchecked(_First, _Last, _Unchecked_idl0(_Dest))));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 _Move_backward1(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{
		static_cast<void>((_Dest)-((_Last)-(_First)));
		return (_Rechecked(_Dest,
			_Move_backward_unchecked(_First, _Last, _Unchecked(_Dest))));
	}

	template<class _BidIt1,
		class _BidIt2> inline
		_BidIt2 move_backward(_BidIt1 _First, _BidIt1 _Last,
			_BidIt2 _Dest)
	{
		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "move_backward" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_Dest)));
		_Debug_range_ptr(_First, _Last, _Dest, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2706);
		return (_Move_backward1(_Unchecked(_First), _Unchecked(_Last),
			_Dest, _Iter_cat_t<_BidIt1>(), _Iter_cat_t<_BidIt2>()));
	}


	template<class _Ty>
	struct _Is_character
		: false_type
	{
	};

	template<>
	struct _Is_character<char>
		: true_type
	{
	};

	template<>
	struct _Is_character<signed char>
		: true_type
	{
	};

	template<>
	struct _Is_character<unsigned char>
		: true_type
	{
	};

	template<class _FwdIt,
		class _Ty>
		struct _Fill_memset_is_safe_helper
	{
		typedef _Iter_value_t<_FwdIt> _Value_type;
		typedef typename conjunction<
			is_pointer<_FwdIt>,
			disjunction<
			conjunction<
			_Is_character<_Ty>,
			_Is_character<_Value_type>>,
			conjunction<
			is_same<bool, _Ty>,
			is_same<bool, _Value_type>>
			>>::type type;
	};

	template<class _FwdIt,
		class _Ty> inline
		typename _Fill_memset_is_safe_helper<_FwdIt, _Ty>::type
		_Fill_memset_is_safe(const _FwdIt&, const _Ty&)
	{
		return{};
	}

	template<class _FwdIt,
		class _Ty> inline
		void _Fill_unchecked1(_FwdIt _First, _FwdIt _Last, const _Ty& _Val, false_type)
	{
		for (; _First != _Last; ++_First)
			*_First = _Val;
	}

	template<class _FwdIt,
		class _Ty> inline
		void _Fill_unchecked1(_FwdIt _First, _FwdIt _Last, const _Ty& _Val, true_type)
	{
		::memset(_First, _Val, _Last - _First);
	}

	template<class _FwdIt,
		class _Ty> inline
		void _Fill_unchecked(_FwdIt _First, _FwdIt _Last, const _Ty& _Val)
	{
		_Fill_unchecked1(_First, _Last, _Val, _Fill_memset_is_safe(_First, _Val));
	}

	template<class _FwdIt,
		class _Ty> inline
		void fill(_FwdIt _First, _FwdIt _Last, const _Ty& _Val)
	{
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2787);
		_Fill_unchecked(_Unchecked(_First), _Unchecked(_Last), _Val);
	}


	template<class _OutIt,
		class _Diff,
		class _Ty> inline
		_OutIt _Fill_n_unchecked1(_OutIt _Dest, _Diff _Count, const _Ty& _Val, false_type)
	{
		for (; 0 < _Count; --_Count, (void)++_Dest)
			*_Dest = _Val;
		return (_Dest);
	}

	template<class _OutIt,
		class _Diff,
		class _Ty> inline
		_OutIt _Fill_n_unchecked1(_OutIt _Dest, _Diff _Count, const _Ty& _Val, true_type)
	{
		if (0 < _Count)
		{
			::memset(_Dest, _Val, _Count);
			return (_Dest + _Count);
		}

		return (_Dest);
	}

	template<class _OutIt,
		class _Diff,
		class _Ty> inline
		_OutIt _Fill_n_unchecked(_OutIt _Dest, _Diff _Count, const _Ty& _Val)
	{

		return (_Fill_n_unchecked1(_Dest, _Count, _Val, _Fill_memset_is_safe(_Dest, _Val)));
	}

	template<class _OutIt,
		class _Diff,
		class _Ty> inline
		_OutIt fill_n(_OutIt _Dest, _Diff _Count, const _Ty& _Val)
	{
		return (_Rechecked(_Dest,
			_Fill_n_unchecked(_Unchecked_n(_Dest, _Count), _Count, _Val)));
	}


	template<class _Elem1,
		class _Elem2>
		struct _Value_equality_is_bitwise_equality
		: bool_constant<static_cast<_Elem1>(-1) == static_cast<_Elem2>(-1)>
	{



	};

	template<class _Elem1,
		class _Elem2,
		class _Pr>
		struct _Equal_memcmp_is_safe_helper
		: false_type
	{

	};

	template<class _Elem1,
		class _Elem2>
		struct _Equal_memcmp_is_safe_helper<_Elem1, _Elem2, equal_to<>>
		: conjunction<
		_Is_same_size<_Elem1, _Elem2>,
		is_integral<_Elem1>,
		is_integral<_Elem2>,
		negation<is_same<bool, _Elem1>>,
		negation<is_same<bool, _Elem2>>,
		negation<is_volatile<_Elem1>>,
		negation<is_volatile<_Elem2>>,


		_Value_equality_is_bitwise_equality<_Elem1, _Elem2>
		>::type
	{
	};

	template<class _Elem1,
		class _Elem2>
		struct _Equal_memcmp_is_safe_helper<_Elem1 *, _Elem2 *, equal_to<>>
		: is_same<remove_cv_t<_Elem1>, remove_cv_t<_Elem2>>::type
	{
	};

	template<class _Elem>
	struct _Equal_memcmp_is_safe_helper<_Elem, _Elem, _Char_traits_eq<char_traits<_Elem>>>
		: _Equal_memcmp_is_safe_helper<_Elem, _Elem, equal_to<>>::type
	{
	};

	template<class _Elem>
	struct _Equal_memcmp_is_safe_helper<_Elem, _Elem, equal_to<_Elem>>
		: _Equal_memcmp_is_safe_helper<_Elem, _Elem, equal_to<>>::type
	{

	};

	template<class _Iter1,
		class _Iter2,
		class _Pr> inline
		false_type _Equal_memcmp_is_safe(const _Iter1&, const _Iter2&, const _Pr&)
	{
		return{};
	}

	template<class _Obj1,
		class _Obj2,
		class _Pr> inline
		typename _Equal_memcmp_is_safe_helper<
		remove_const_t<_Obj1>,
		remove_const_t<_Obj2>,
		_Pr>::type
		_Equal_memcmp_is_safe(_Obj1 * const&, _Obj2 * const&, const _Pr&)
	{
		return{};
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_unchecked1(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr& _Pred, false_type)
	{
		for (; _First1 != _Last1; ++_First1, (void)++_First2)
			if (!_Pred(*_First1, *_First2))
				return (false);
		return (true);
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_unchecked1(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr&, true_type)
	{
		const char * const _First1_ch = reinterpret_cast<const char *>(_First1);
		const char * const _First2_ch = reinterpret_cast<const char *>(_First2);
		const size_t _Count = reinterpret_cast<const char *>(_Last1) - _First1_ch;
		return (::memcmp(_First1_ch, _First2_ch, _Count) == 0);
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_unchecked(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr& _Pred)
	{
		return (_Equal_unchecked1(_First1, _Last1, _First2, _Pred,
			_Equal_memcmp_is_safe(_First1, _First2, _Pred)));
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_no_deprecate1(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr& _Pred, input_iterator_tag, input_iterator_tag)
	{
		return (_Equal_unchecked(_First1, _Last1, _Unchecked_idl0(_First2), _Pred));
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_no_deprecate1(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr& _Pred, random_access_iterator_tag, random_access_iterator_tag)
	{
		static_cast<void>((_First2)+((_Last1)-(_First1)));
		return (_Equal_unchecked(_First1, _Last1, _Unchecked(_First2), _Pred));
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_no_deprecate(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr& _Pred)
	{
		_Debug_range_ptr(_First1, _Last1, _First2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2971);
		_Debug_pointer_if(_First1 != _Last1, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 2972);
		return (_Equal_no_deprecate1(_Unchecked(_First1), _Unchecked(_Last1),
			_First2, _Pred, _Iter_cat_t<_InIt1>(), _Iter_cat_t<_InIt2>()));
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool equal(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _Pr _Pred)
	{
		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "equal" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_First2)));
		return (_Equal_no_deprecate(_First1, _Last1, _First2, _Pred));
	}


	template<class _InIt1,
		class _InTy,
		size_t _InSize,
		class _Pr,
		class = enable_if_t<!is_same<_InTy *, _Pr>::value>> inline
		bool equal(_InIt1 _First1, _InIt1 _Last1,
			_InTy(&_First2)[_InSize], _Pr _Pred)
	{
		return (_Equal_no_deprecate(_First1, _Last1,
			_Array_iterator<_InTy, _InSize>(_First2), _Pred));
	}



	template<class _InIt1,
		class _InIt2> inline
		bool equal(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2)
	{
		return (::std::equal(_First1, _Last1, _First2,
			equal_to<>()));
	}


	template<class _InIt1,
		class _InTy,
		size_t _InSize> inline
		bool equal(_InIt1 _First1, _InIt1 _Last1,
			_InTy(&_First2)[_InSize])
	{
		return (::std::equal(_First1, _Last1, _First2,
			equal_to<>()));
	}



	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_unchecked(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred,
			input_iterator_tag, input_iterator_tag)
	{

		_Debug_pointer_if(_First1 != _Last1 && _First2 != _Last2, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3032);
		for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, (void)++_First2)
			if (!_Pred(*_First1, *_First2))
				return (false);
		return (_First1 == _Last1 && _First2 == _Last2);
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Equal_unchecked(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred,
			random_access_iterator_tag, random_access_iterator_tag)
	{

		if (_Last1 - _First1 != _Last2 - _First2)
			return (false);
		_Debug_pointer_if(_First1 != _Last1, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3049);
		return (_Equal_unchecked(_First1, _Last1, _First2, _Pred));
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool equal(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr _Pred)
	{
		_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3059);
		_Debug_range(_First2, _Last2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3060);
		return (_Equal_unchecked(_Unchecked(_First1), _Unchecked(_Last1),
			_Unchecked(_First2), _Unchecked(_Last2), _Pred,
			_Iter_cat_t<_InIt1>(), _Iter_cat_t<_InIt2>()));
	}


	template<class _InIt1,
		class _InIt2> inline
		bool equal(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2)
	{
		return (::std::equal(_First1, _Last1, _First2, _Last2,
			equal_to<>()));
	}


	template<class _Elem1,
		class _Elem2,
		class _FTy>
		struct _Lex_compare_check_element_types_helper
		: conjunction<
		_Is_character<_Elem1>,
		_Is_character<_Elem2>,
		_Is_character<_FTy>,
		is_unsigned<_FTy>
		>::type
	{
	};

	template<class _Elem1,
		class _Elem2>
		struct _Lex_compare_check_element_types_helper<_Elem1, _Elem2, void>
		: conjunction<
		_Is_character<_Elem1>,
		_Is_character<_Elem2>,
		is_unsigned<_Elem1>,
		is_unsigned<_Elem2>
		>::type
	{
	};

	template<class _Memcmp_pr>
	struct _Lex_compare_optimize
	{
	};

	template<class _Memcmp_pr,
		class _Obj1,
		class _Obj2,
		class _FTy>
		using _Lex_compare_check_element_types = _Lex_compare_optimize<conditional_t<
		_Lex_compare_check_element_types_helper<remove_const_t<_Obj1>, remove_const_t<_Obj2>, _FTy>::value,
		_Memcmp_pr, void>>;

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		_Lex_compare_optimize<void> _Lex_compare_memcmp_classify(const _InIt1&, const _InIt2&, const _Pr&)
	{

		return{};
	}

	template<class _Obj1,
		class _Obj2,
		class _FTy> inline
		_Lex_compare_check_element_types<less<int>, _Obj1, _Obj2, _FTy>
		_Lex_compare_memcmp_classify(_Obj1 * const&, _Obj2 * const&, const less<_FTy>&)
	{
		return{};
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Lex_compare_unchecked1(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred, _Lex_compare_optimize<void>)
	{
		for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, (void)++_First2)
		{
			if (_Debug_lt_pred(_Pred, *_First1, *_First2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3141))
				return (true);
			else if (_Pred(*_First2, *_First1))
				return (false);
		}

		return (_First1 == _Last1 && _First2 != _Last2);
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr,
		class _Memcmp_pr> inline
		bool _Lex_compare_unchecked1(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr&, _Lex_compare_optimize<_Memcmp_pr>)
	{
		const size_t _Num1 = _Last1 - _First1;
		const size_t _Num2 = _Last2 - _First2;
		const int _Ans = ::memcmp(_First1, _First2, _Num1 < _Num2 ? _Num1 : _Num2);
		return (_Memcmp_pr{}(_Ans, 0) || _Ans == 0 && _Num1 < _Num2);
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool _Lex_compare_unchecked(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr& _Pred)
	{
		return (_Lex_compare_unchecked1(_First1, _Last1, _First2, _Last2, _Pred,
			_Lex_compare_memcmp_classify(_First1, _First2, _Pred)));
	}

	template<class _InIt1,
		class _InIt2,
		class _Pr> inline
		bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2, _Pr _Pred)
	{
		_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3179);
		_Debug_range(_First2, _Last2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3180);
		_Debug_pointer_if(_First1 != _Last1 && _First2 != _Last2, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3181);
		return (_Lex_compare_unchecked(_Unchecked(_First1), _Unchecked(_Last1),
			_Unchecked(_First2), _Unchecked(_Last2), _Pred));
	}


	template<class _InIt1,
		class _InIt2> inline
		bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
			_InIt2 _First2, _InIt2 _Last2)
	{
		return (::std::lexicographical_compare(_First1, _Last1,
			_First2, _Last2, less<>()));
	}


	template<class _Ty> inline
		bool _Within_limits(const _Ty& _Val, true_type, true_type, _Any_tag)
	{
		return ((-128) <= _Val && _Val <= 127);
	}

	template<class _Ty> inline
		bool _Within_limits(const _Ty& _Val, true_type, false_type, true_type)
	{
		return (_Val <= 127 || static_cast<_Ty>((-128)) <= _Val);
	}

	template<class _Ty> inline
		bool _Within_limits(const _Ty& _Val, true_type, false_type, false_type)
	{
		return (_Val <= 127);
	}

	template<class _Ty> inline
		bool _Within_limits(const _Ty& _Val, false_type, true_type, _Any_tag)
	{
		return (0 <= _Val && _Val <= 0xff);
	}

	template<class _Ty> inline
		bool _Within_limits(const _Ty& _Val, false_type, false_type, _Any_tag)
	{
		return (_Val <= 0xff);
	}

	template<class _InIt,
		class _Ty> inline
		bool _Within_limits(_InIt, const _Ty& _Val)
	{
		typedef typename remove_pointer<_InIt>::type _Elem;
		return (_Within_limits(_Val, is_signed<_Elem>(), is_signed<_Ty>(),
			integral_constant<bool, -1 == static_cast<_Ty>(-1)>()));
	}

	template<class _InIt> inline
		bool _Within_limits(_InIt, const bool&)
	{
		return (true);
	}

	template<class _InIt,
		class _Ty> inline
		_InIt _Find_unchecked1(_InIt _First, _InIt _Last, const _Ty& _Val, true_type)
	{
		if (!_Within_limits(_First, _Val))
			return (_Last);
		_First = static_cast<_InIt>(::memchr(
			_First, static_cast<unsigned char>(_Val), _Last - _First));
		return (_First ? _First : _Last);
	}

	template<class _InIt,
		class _Ty> inline
		_InIt _Find_unchecked1(_InIt _First, _InIt _Last, const _Ty& _Val, false_type)
	{
		for (; _First != _Last; ++_First)
			if (*_First == _Val)
				break;
		return (_First);
	}

	template<class _InIt,
		class _Ty> inline
		_InIt _Find_unchecked(_InIt _First, _InIt _Last, const _Ty& _Val)
	{

		typedef integral_constant<bool,
			(is_same<_InIt, char *>::value
				|| is_same<_InIt, signed char *>::value
				|| is_same<_InIt, unsigned char *>::value
				|| is_same<_InIt, const char *>::value
				|| is_same<_InIt, const signed char *>::value
				|| is_same<_InIt, const unsigned char *>::value)
			&& is_integral<_Ty>::value
		> _Memchr_opt;
		return (_Find_unchecked1(_First, _Last, _Val, _Memchr_opt()));
	}

	template<class _InIt,
		class _Ty> inline
		_InIt find(_InIt _First, _InIt _Last, const _Ty& _Val)
	{
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3284);
		return (_Rechecked(_First,
			_Find_unchecked(_Unchecked(_First), _Unchecked(_Last), _Val)));
	}


	template<class _InIt,
		class _Ty,
		class _Pr> inline
		_InIt _Find_pr(_InIt _First, _InIt _Last, const _Ty& _Val, _Pr& _Pred)
	{
		for (; _First != _Last; ++_First)
			if (_Pred(*_First, _Val))
				break;
		return (_First);
	}


	template<class _InIt,
		class _Ty> inline
		_Iter_diff_t<_InIt>
		_Count_unchecked(_InIt _First, _InIt _Last, const _Ty& _Val)
	{
		_Iter_diff_t<_InIt> _Count = 0;

		for (; _First != _Last; ++_First)
			if (*_First == _Val)
				++_Count;
		return (_Count);
	}

	template<class _InIt,
		class _Ty> inline
		_Iter_diff_t<_InIt>
		count(_InIt _First, _InIt _Last, const _Ty& _Val)
	{
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3320);
		return (_Count_unchecked(_Unchecked(_First), _Unchecked(_Last), _Val));
	}


	template<class _InIt,
		class _Ty,
		class _Pr> inline
		_Iter_diff_t<_InIt>
		_Count_pr(_InIt _First, _InIt _Last, const _Ty& _Val, _Pr& _Pred)
	{
		_Iter_diff_t<_InIt> _Count = 0;

		for (; _First != _Last; ++_First)
			if (_Pred(*_First, _Val))
				++_Count;
		return (_Count);
	}


	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		void _Trim_matching_suffixes(_FwdIt1&, _FwdIt2&, _Pr&,
			forward_iterator_tag, forward_iterator_tag)
	{
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		void _Trim_matching_suffixes(_FwdIt1& _Last1, _FwdIt2& _Last2, _Pr& _Pred,
			bidirectional_iterator_tag, bidirectional_iterator_tag)
	{

		while (_Pred(*--_Last1, *--_Last2))
			;
		++_Last1;
		++_Last2;
	}


	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Check_match_counts(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _FwdIt2 _Last2, _Pr& _Pred)
	{
		_Trim_matching_suffixes(_Last1, _Last2, _Pred,
			_Iter_cat_t<_FwdIt1>(), _Iter_cat_t<_FwdIt2>());
		for (_FwdIt1 _Next1 = _First1; _Next1 != _Last1; ++_Next1)
			if (_Next1 == _Find_pr(_First1, _Next1, *_Next1, _Pred))
			{
				_Iter_diff_t<_FwdIt2> _Count2 = _Count_pr(_First2, _Last2, *_Next1, _Pred);
				if (_Count2 == 0)
					return (false);
				_FwdIt1 _Skip1 = ::std::next(_Next1);
				_Iter_diff_t<_FwdIt1> _Count1 = _Count_pr(_Skip1, _Last1, *_Next1, _Pred) + 1;
				if (_Count2 != _Count1)
					return (false);
			}

		return (true);
	}


	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Is_permutation_unchecked(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _Pr& _Pred)
	{
		for (; _First1 != _Last1; ++_First1, (void)++_First2)
			if (!_Pred(*_First1, *_First2))
			{
				_FwdIt2 _Last2 = ::std::next(_First2,
					::std::distance(_First1, _Last1));
				return (_Check_match_counts(_First1, _Last1,
					_First2, _Last2, _Pred));
			}

		return (true);
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Is_permutation_no_deprecate1(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _Pr& _Pred, forward_iterator_tag, forward_iterator_tag)
	{
		return (_Is_permutation_unchecked(_First1, _Last1, _Unchecked_idl0(_First2), _Pred));
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Is_permutation_no_deprecate1(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _Pr& _Pred, random_access_iterator_tag, random_access_iterator_tag)
	{
		static_cast<void>((_First2)+((_Last1)-(_First1)));
		return (_Is_permutation_unchecked(_First1, _Last1, _Unchecked(_First2), _Pred));
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Is_permutation_no_deprecate(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _Pr& _Pred)
	{
		_Debug_range_ptr(_First1, _Last1, _First2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3429);
		_Debug_pointer_if(_First1 != _Last1, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3430);
		return (_Is_permutation_no_deprecate1(_Unchecked(_First1), _Unchecked(_Last1),
			_First2, _Pred, _Iter_cat_t<_FwdIt1>(), _Iter_cat_t<_FwdIt2>()));
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _Pr _Pred)
	{
		struct _Unchecked_iterators { static void __declspec(deprecated("Call to 'std::" "is_permutation" "' with parameters that may be unsafe - " "this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. " "See documentation on how to use Visual C++ 'Checked Iterators'")) _Deprecate(false_type) { } static void _Deprecate(true_type) { } }; (_Unchecked_iterators::_Deprecate(_Is_checked(_First2)));
		return (_Is_permutation_no_deprecate(_First1, _Last1, _First2, _Pred));
	}


	template<class _FwdIt1,
		class _InTy,
		size_t _InSize,
		class _Pr,
		class = enable_if_t<!is_same<_InTy *, _Pr>::value>> inline
		bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
			_InTy(&_First2)[_InSize], _Pr _Pred)
	{
		return (_Is_permutation_no_deprecate(_First1, _Last1,
			_Array_iterator<_InTy, _InSize>(_First2), _Pred));
	}



	template<class _FwdIt1,
		class _FwdIt2> inline
		bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2)
	{
		return (::std::is_permutation(_First1, _Last1,
			_First2, equal_to<>()));
	}



	template<class _FwdIt1,
		class _InTy,
		size_t _InSize> inline
		bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
			_InTy(&_First2)[_InSize])
	{
		return (::std::is_permutation(_First1, _Last1, _First2, equal_to<>()));
	}



	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Is_permutation_unchecked(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _FwdIt2 _Last2, _Pr& _Pred,
			forward_iterator_tag, forward_iterator_tag)
	{

		_Debug_pointer_if(_First1 != _Last1 && _First2 != _Last2, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3490);
		for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, (void)++_First2)
			if (!_Pred(*_First1, *_First2))
			{
				if (::std::distance(_First1, _Last1)
					!= ::std::distance(_First2, _Last2))
					return (false);
				else
					return (_Check_match_counts(_First1, _Last1,
						_First2, _Last2, _Pred));
			}

		return (_First1 == _Last1 && _First2 == _Last2);
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool _Is_permutation_unchecked(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _FwdIt2 _Last2, _Pr& _Pred,
			random_access_iterator_tag, random_access_iterator_tag)
	{

		if (_Last1 - _First1 != _Last2 - _First2)
			return (false);
		_Debug_pointer_if(_First1 != _Last1, _Pred, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3515);
		return (_Is_permutation_unchecked(_First1, _Last1, _First2, _Pred));
	}

	template<class _FwdIt1,
		class _FwdIt2,
		class _Pr> inline
		bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _FwdIt2 _Last2, _Pr _Pred)
	{

		_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3526);
		_Debug_range(_First2, _Last2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3527);
		return (_Is_permutation_unchecked(_Unchecked(_First1), _Unchecked(_Last1),
			_Unchecked(_First2), _Unchecked(_Last2), _Pred,
			_Iter_cat_t<_FwdIt1>(), _Iter_cat_t<_FwdIt2>()));
	}


	template<class _FwdIt1,
		class _FwdIt2> inline
		bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
			_FwdIt2 _First2, _FwdIt2 _Last2)
	{
		return (::std::is_permutation(_First1, _Last1,
			_First2, _Last2, equal_to<>()));
	}


	template<class _BidIt> inline
		void _Reverse_unchecked(_BidIt _First, _BidIt _Last)
	{
		for (; _First != _Last && _First != --_Last; ++_First)
			::std::iter_swap(_First, _Last);
	}

	template<class _BidIt> inline
		void reverse(_BidIt _First, _BidIt _Last)
	{
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3554);
		_Reverse_unchecked(_Unchecked(_First), _Unchecked(_Last));
	}


	template<class _FwdIt> inline
		_FwdIt _Rotate_unchecked1(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last,
			forward_iterator_tag)
	{
		for (_FwdIt _Next = _Mid, _Res = _Last; ; )
		{
			::std::iter_swap(_First, _Next);
			if (++_First == _Mid)
			{
				if (++_Next == _Last)
					return (_Res == _Last ? _Mid : _Res);
				else
					_Mid = _Next;
			}
			else if (++_Next == _Last)
			{
				if (_Res == _Last)
					_Res = _First;
				_Next = _Mid;
			}
		}
	}

	template<class _BidIt> inline
		pair<_BidIt, _BidIt> _Reverse_until_sentinel_unchecked(
			_BidIt _First, _BidIt _Sentinel, _BidIt _Last)
	{
		while (_First != _Sentinel && _Last != _Sentinel)
			::std::iter_swap(_First++, --_Last);
		return (::std::make_pair(_First, _Last));
	}

	template<class _BidIt> inline
		_BidIt _Rotate_unchecked1(_BidIt _First, _BidIt _Mid, _BidIt _Last,
			bidirectional_iterator_tag)
	{
		_Reverse_unchecked(_First, _Mid);
		_Reverse_unchecked(_Mid, _Last);
		pair<_BidIt, _BidIt> _Tmp = _Reverse_until_sentinel_unchecked(_First, _Mid, _Last);
		_Reverse_unchecked(_Tmp.first, _Tmp.second);
		return (_Mid != _Tmp.first ? _Tmp.first : _Tmp.second);
	}

	template<class _RanIt> inline
		_RanIt _Rotate_unchecked1(_RanIt _First, _RanIt _Mid, _RanIt _Last,
			random_access_iterator_tag)
	{
		_Reverse_unchecked(_First, _Mid);
		_Reverse_unchecked(_Mid, _Last);
		_Reverse_unchecked(_First, _Last);
		return (_First + (_Last - _Mid));
	}

	template<class _FwdIt> inline
		_FwdIt _Rotate_unchecked(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last)
	{
		if (_First == _Mid)
			return (_Last);
		if (_Mid == _Last)
			return (_First);
		return (_Rotate_unchecked1(_First, _Mid, _Last, _Iter_cat_t<_FwdIt>()));
	}

	template<class _FwdIt> inline
		_FwdIt rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last)
	{
		_Debug_range(_First, _Mid, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3625);
		_Debug_range(_Mid, _Last, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3626);
		return (_Rechecked(_First,
			_Rotate_unchecked(_Unchecked(_First), _Unchecked(_Mid),
				_Unchecked(_Last))));
	}


	template<class _Diff,
		class _Urng>
		class _Rng_from_urng
	{
	public:
		typedef typename make_unsigned<_Diff>::type _Ty0;
		typedef typename _Urng::result_type _Ty1;

		typedef typename _If < sizeof(_Ty1) < sizeof(_Ty0),
			_Ty0, _Ty1 > ::type _Udiff;


		explicit _Rng_from_urng(_Urng& _Func)
			: _Ref(_Func), _Bits(8 * sizeof(_Udiff)), _Bmask(_Udiff(-1))
		{
			for (; (_Urng::max)() - (_Urng::min)() < _Bmask; _Bmask >>= 1)
				--_Bits;
		}

		_Diff operator()(_Diff _Index)
		{
			for (; ; )
			{
				_Udiff _Ret = 0;
				_Udiff _Mask = 0;

				while (_Mask < _Udiff(_Index - 1))
				{
					_Ret <<= _Bits - 1;
					_Ret <<= 1;
					_Ret |= _Get_bits();
					_Mask <<= _Bits - 1;
					_Mask <<= 1;
					_Mask |= _Bmask;
				}


				if (_Ret / _Index < _Mask / _Index
					|| _Mask % _Index == _Udiff(_Index - 1))
					return (_Ret % _Index);
			}
		}

		_Udiff _Get_all_bits()
		{
			_Udiff _Ret = 0;

			for (size_t _Num = 0; _Num < 8 * sizeof(_Udiff);
				_Num += _Bits)
			{
				_Ret <<= _Bits - 1;
				_Ret <<= 1;
				_Ret |= _Get_bits();
			}

			return (_Ret);
		}

		_Rng_from_urng(const _Rng_from_urng&) = delete;
		_Rng_from_urng& operator=(const _Rng_from_urng&) = delete;

	private:
		_Udiff _Get_bits()
		{
			for (; ; )
			{
				_Udiff _Val = _Ref() - (_Urng::min)();

				if (_Val <= _Bmask)
					return (_Val);
			}
		}

		_Urng& _Ref;
		size_t _Bits;
		_Udiff _Bmask;
	};


	template<class _Elem>
	class __declspec(dllimport) _Yarn
	{
	public:
		typedef _Yarn<_Elem> _Myt;

		_Yarn()
			: _Myptr(0), _Nul(0)
		{
		}

		_Yarn(const _Myt& _Right)
			: _Myptr(0), _Nul(0)
		{
			*this = _Right;
		}

		_Yarn(const _Elem *_Right)
			: _Myptr(0), _Nul(0)
		{
			*this = _Right;
		}

		_Myt&  operator=(const _Myt& _Right)
		{
			return (*this = _Right._Myptr);
		}

		_Myt&  operator=(const _Elem *_Right)
		{
			if (_Myptr != _Right)
			{
				_Tidy();

				if (_Right != 0)
				{
					const _Elem *_Ptr = _Right;
					while (*_Ptr != (_Elem)0)
						++_Ptr;
					size_t _Count = ((const char *)++_Ptr - (const char *)_Right);


					_Myptr = (_Elem *)_malloc_dbg(_Count, 2,
						"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xutility", 3755);





					if (_Myptr != 0)
						::memcpy(_Myptr, _Right, _Count);
				}
			}

			return (*this);
		}

		~_Yarn() noexcept
		{
			_Tidy();
		}

		bool  empty() const
		{
			return (_Myptr == 0);
		}

		const _Elem * c_str() const
		{
			return (_Myptr != 0 ? _Myptr : &_Nul);
		}

		bool  _Empty() const
		{
			return (_Myptr == 0);
		}

		const _Elem * _C_str() const
		{
			return (_Myptr != 0 ? _Myptr : &_Nul);
		}

	private:
		void  _Tidy()
		{
			if (_Myptr != 0)


				_free_dbg(_Myptr, 2);





			_Myptr = 0;
		}

		_Elem *_Myptr;
		_Elem _Nul;
	};


	template<class _Ty,
		class _Alloc>
		struct _Has_allocator_type
	{
		template<class _Uty>
		static auto _Fn(int)
			->is_convertible<_Alloc,
			typename _Uty::allocator_type>;
		template<class _Uty>
		static auto _Fn(_Wrap_int)
			->false_type;

		typedef decltype(_Fn<_Ty>(0)) type;
	};


	struct allocator_arg_t
	{
	};

	constexpr allocator_arg_t allocator_arg{};

	[[noreturn]] __declspec(dllimport) void __cdecl _Xbad_alloc();
	[[noreturn]] __declspec(dllimport) void __cdecl _Xinvalid_argument(const char *);
	[[noreturn]] __declspec(dllimport) void __cdecl _Xlength_error(const char *);
	[[noreturn]] __declspec(dllimport) void __cdecl _Xout_of_range(const char *);
	[[noreturn]] __declspec(dllimport) void __cdecl _Xoverflow_error(const char *);
	[[noreturn]] __declspec(dllimport) void __cdecl _Xruntime_error(const char *);
}

namespace std {

	template<class _Ty,
		class _Alloc>
		struct uses_allocator
		: _Has_allocator_type<_Ty, _Alloc>::type
	{
	};


	template<class _Ty,
		class _Alloc>
		constexpr bool uses_allocator_v = uses_allocator<_Ty, _Alloc>::value;

}

#pragma warning(pop)
#pragma pack(pop)










#pragma pack(push,8)
#pragma warning(push,3)



#pragma warning (disable: 4100 4390 4793 6326)











































































































































namespace std {

	typedef unsigned char _Uint1_t;
	typedef unsigned short _Uint2_t;

	typedef unsigned long long _Uint8_t;























	inline memory_order _Memory_order_upper_bound(memory_order _Order1,
		memory_order _Order2)
	{














		static const memory_order _Upper[6][6] = {
			{ memory_order_relaxed, memory_order_consume, memory_order_acquire,
			memory_order_release, memory_order_acq_rel, memory_order_seq_cst },
			{ memory_order_consume, memory_order_consume, memory_order_acquire,
			memory_order_acq_rel, memory_order_acq_rel, memory_order_seq_cst },
			{ memory_order_acquire, memory_order_acquire, memory_order_acquire,
			memory_order_acq_rel, memory_order_acq_rel, memory_order_seq_cst },
			{ memory_order_release, memory_order_acq_rel, memory_order_acq_rel,
			memory_order_release, memory_order_acq_rel, memory_order_seq_cst },
			{ memory_order_acq_rel, memory_order_acq_rel, memory_order_acq_rel,
			memory_order_acq_rel, memory_order_acq_rel, memory_order_seq_cst },
			{ memory_order_seq_cst, memory_order_seq_cst, memory_order_seq_cst,
			memory_order_seq_cst, memory_order_seq_cst, memory_order_seq_cst
			}
		};

		if ((_Order1 < 0) || (6 <= _Order1)
			|| (_Order2 < 0) || (6 <= _Order2))
		{
			{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 224); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 224, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 224, 0); }};
			return (memory_order_seq_cst);
		}
		return (_Upper[_Order1][_Order2]);
	}

	inline void _Validate_compare_exchange_memory_order(
		memory_order _Success, memory_order _Failure)
	{


		switch (_Failure)
		{
		case memory_order_relaxed:
			break;

		case memory_order_seq_cst:
			if (_Success != memory_order_seq_cst)
			{
				_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 242); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 242, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 242, 0); }
			};
			break;

		case memory_order_acquire:
			if ((_Success == memory_order_consume) ||
				(_Success == memory_order_relaxed))
			{
				_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 248); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 248, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 248, 0); }
			};
			break;

		case memory_order_consume:
			if (_Success == memory_order_relaxed)
			{
				_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 253); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 253, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 253, 0); }
			};
			break;

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 257); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 257, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 257, 0); }};
		break;
		}
	}



	inline void _Store_relaxed_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{





		*_Tgt = _Value;

	}

	inline void _Store_release_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{






		_ReadWriteBarrier();
		*_Tgt = _Value;

	}

	inline void _Store_seq_cst_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{








		_InterlockedExchange8((volatile char *)_Tgt, _Value);

	}

	inline void _Atomic_store_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			_Store_relaxed_1(_Tgt, _Value);
			break;

		case memory_order_release:
			_Store_release_1(_Tgt, _Value);
			break;

		case memory_order_seq_cst:
			_Store_seq_cst_1(_Tgt, _Value);
			break;

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 320); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 320, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 320, 0); }};
		break;
		}
	}


	inline _Uint1_t _Load_seq_cst_1(volatile _Uint1_t *_Tgt)
	{

		_Uint1_t _Value;






		_Value = *_Tgt;
		_ReadWriteBarrier();


		return (_Value);
	}

	inline _Uint1_t _Load_relaxed_1(volatile _Uint1_t *_Tgt)
	{

		_Uint1_t _Value;





		_Value = *_Tgt;


		return (_Value);
	}

	inline _Uint1_t _Load_acquire_1(volatile _Uint1_t *_Tgt)
	{


		return (_Load_seq_cst_1(_Tgt));
	}

	inline _Uint1_t _Atomic_load_1(
		volatile _Uint1_t *_Tgt, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Load_relaxed_1(_Tgt));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Load_acquire_1(_Tgt));

		case memory_order_seq_cst:
			return (_Load_seq_cst_1(_Tgt));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 381); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 381, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 381, 0); }};
		return (0);
		}
	}


	inline _Uint1_t _Exchange_seq_cst_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchange8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Exchange_relaxed_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchange8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Exchange_acquire_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchange8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Exchange_release_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchange8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Atomic_exchange_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Exchange_relaxed_1(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Exchange_acquire_1(_Tgt, _Value));

		case memory_order_release:
			return (_Exchange_release_1(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Exchange_seq_cst_1(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 435); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 435, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 435, 0); }};
		return (0);
		}
	}


	inline int _Compare_exchange_seq_cst_1(volatile _Uint1_t *_Tgt,
		_Uint1_t *_Exp, _Uint1_t _Value)
	{

		_Uint1_t _Old_exp = *_Exp;

		_Uint1_t _Prev = _InterlockedCompareExchange8((volatile char *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_relaxed_1(volatile _Uint1_t *_Tgt,
		_Uint1_t *_Exp, _Uint1_t _Value)
	{

		_Uint1_t _Old_exp = *_Exp;

		_Uint1_t _Prev = _InterlockedCompareExchange8((volatile char *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_acquire_1(volatile _Uint1_t *_Tgt,
		_Uint1_t *_Exp, _Uint1_t _Value)
	{

		_Uint1_t _Old_exp = *_Exp;

		_Uint1_t _Prev = _InterlockedCompareExchange8((volatile char *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_release_1(volatile _Uint1_t *_Tgt,
		_Uint1_t *_Exp, _Uint1_t _Value)
	{

		_Uint1_t _Old_exp = *_Exp;

		_Uint1_t _Prev = _InterlockedCompareExchange8((volatile char *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Atomic_compare_exchange_strong_1(
		volatile _Uint1_t *_Tgt, _Uint1_t *_Exp, _Uint1_t _Value,
		memory_order _Order1, memory_order _Order2)
	{
		_Validate_compare_exchange_memory_order(_Order1, _Order2);

		switch (_Memory_order_upper_bound(_Order1, _Order2))
		{
		case memory_order_relaxed:
			return (_Compare_exchange_relaxed_1(_Tgt, _Exp, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Compare_exchange_acquire_1(_Tgt, _Exp, _Value));

		case memory_order_release:
			return (_Compare_exchange_release_1(_Tgt, _Exp, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Compare_exchange_seq_cst_1(_Tgt, _Exp, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 536); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 536, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 536, 0); }};
		return (0);
		}
	}

	inline int _Atomic_compare_exchange_weak_1(
		volatile _Uint1_t *_Tgt, _Uint1_t *_Exp, _Uint1_t _Value,
		memory_order _Order1, memory_order _Order2)
	{


		return (_Atomic_compare_exchange_strong_1(_Tgt, _Exp, _Value,
			_Order1, _Order2));
	}


	inline _Uint1_t _Fetch_add_seq_cst_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchangeAdd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_add_relaxed_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchangeAdd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_add_acquire_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchangeAdd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_add_release_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedExchangeAdd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Atomic_fetch_add_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_add_relaxed_1(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_add_acquire_1(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_add_release_1(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_add_seq_cst_1(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 600); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 600, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 600, 0); }};
		return (0);
		}
	}

	inline _Uint1_t _Atomic_fetch_sub_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		return (_Atomic_fetch_add_1(_Tgt, 0 - _Value, _Order));
	}


	inline _Uint1_t _Fetch_and_seq_cst_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedAnd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_and_relaxed_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedAnd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_and_acquire_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedAnd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_and_release_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedAnd8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Atomic_fetch_and_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_and_relaxed_1(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_and_acquire_1(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_and_release_1(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_and_seq_cst_1(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 660); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 660, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 660, 0); }};
		return (0);
		}
	}


	inline _Uint1_t _Fetch_or_seq_cst_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedOr8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_or_relaxed_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedOr8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_or_acquire_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedOr8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_or_release_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedOr8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Atomic_fetch_or_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_or_relaxed_1(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_or_acquire_1(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_or_release_1(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_or_seq_cst_1(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 714); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 714, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 714, 0); }};
		return (0);
		}
	}


	inline _Uint1_t _Fetch_xor_seq_cst_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedXor8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_xor_relaxed_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedXor8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_xor_acquire_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedXor8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Fetch_xor_release_1(volatile _Uint1_t *_Tgt, _Uint1_t _Value)
	{


		return (_InterlockedXor8((volatile char *)_Tgt, _Value));
	}

	inline _Uint1_t _Atomic_fetch_xor_1(
		volatile _Uint1_t *_Tgt, _Uint1_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_xor_relaxed_1(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_xor_acquire_1(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_xor_release_1(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_xor_seq_cst_1(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 768); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 768, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 768, 0); }};
		return (0);
		}
	}


	inline void _Store_relaxed_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{





		*_Tgt = _Value;

	}

	inline void _Store_release_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{






		_ReadWriteBarrier();
		*_Tgt = _Value;

	}

	inline void _Store_seq_cst_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{








		_InterlockedExchange16((volatile short *)_Tgt, _Value);

	}

	inline void _Atomic_store_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			_Store_relaxed_2(_Tgt, _Value);
			break;

		case memory_order_release:
			_Store_release_2(_Tgt, _Value);
			break;

		case memory_order_seq_cst:
			_Store_seq_cst_2(_Tgt, _Value);
			break;

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 830); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 830, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 830, 0); }};
		break;
		}
	}


	inline _Uint2_t _Load_seq_cst_2(volatile _Uint2_t *_Tgt)
	{

		_Uint2_t _Value;






		_Value = *_Tgt;
		_ReadWriteBarrier();


		return (_Value);
	}

	inline _Uint2_t _Load_relaxed_2(volatile _Uint2_t *_Tgt)
	{

		_Uint2_t _Value;





		_Value = *_Tgt;


		return (_Value);
	}

	inline _Uint2_t _Load_acquire_2(volatile _Uint2_t *_Tgt)
	{


		return (_Load_seq_cst_2(_Tgt));
	}

	inline _Uint2_t _Atomic_load_2(
		volatile _Uint2_t *_Tgt, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Load_relaxed_2(_Tgt));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Load_acquire_2(_Tgt));

		case memory_order_seq_cst:
			return (_Load_seq_cst_2(_Tgt));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 891); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 891, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 891, 0); }};
		return (0);
		}
	}


	inline _Uint2_t _Exchange_seq_cst_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchange16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Exchange_relaxed_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchange16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Exchange_acquire_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchange16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Exchange_release_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchange16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Atomic_exchange_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Exchange_relaxed_2(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Exchange_acquire_2(_Tgt, _Value));

		case memory_order_release:
			return (_Exchange_release_2(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Exchange_seq_cst_2(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 945); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 945, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 945, 0); }};
		return (0);
		}
	}


	inline int _Compare_exchange_seq_cst_2(volatile _Uint2_t *_Tgt,
		_Uint2_t *_Exp, _Uint2_t _Value)
	{

		_Uint2_t _Old_exp = *_Exp;

		_Uint2_t _Prev = _InterlockedCompareExchange16((volatile short *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_relaxed_2(volatile _Uint2_t *_Tgt,
		_Uint2_t *_Exp, _Uint2_t _Value)
	{

		_Uint2_t _Old_exp = *_Exp;

		_Uint2_t _Prev = _InterlockedCompareExchange16((volatile short *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_acquire_2(volatile _Uint2_t *_Tgt,
		_Uint2_t *_Exp, _Uint2_t _Value)
	{

		_Uint2_t _Old_exp = *_Exp;

		_Uint2_t _Prev = _InterlockedCompareExchange16((volatile short *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_release_2(volatile _Uint2_t *_Tgt,
		_Uint2_t *_Exp, _Uint2_t _Value)
	{

		_Uint2_t _Old_exp = *_Exp;

		_Uint2_t _Prev = _InterlockedCompareExchange16((volatile short *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Atomic_compare_exchange_strong_2(
		volatile _Uint2_t *_Tgt, _Uint2_t *_Exp, _Uint2_t _Value,
		memory_order _Order1, memory_order _Order2)
	{
		_Validate_compare_exchange_memory_order(_Order1, _Order2);

		switch (_Memory_order_upper_bound(_Order1, _Order2))
		{
		case memory_order_relaxed:
			return (_Compare_exchange_relaxed_2(_Tgt, _Exp, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Compare_exchange_acquire_2(_Tgt, _Exp, _Value));

		case memory_order_release:
			return (_Compare_exchange_release_2(_Tgt, _Exp, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Compare_exchange_seq_cst_2(_Tgt, _Exp, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1046); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1046, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1046, 0); }};
		return (0);
		}
	}

	inline int _Atomic_compare_exchange_weak_2(
		volatile _Uint2_t *_Tgt, _Uint2_t *_Exp, _Uint2_t _Value,
		memory_order _Order1, memory_order _Order2)
	{


		return (_Atomic_compare_exchange_strong_2(_Tgt, _Exp, _Value,
			_Order1, _Order2));
	}


	inline _Uint2_t _Fetch_add_seq_cst_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchangeAdd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_add_relaxed_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchangeAdd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_add_acquire_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchangeAdd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_add_release_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedExchangeAdd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Atomic_fetch_add_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_add_relaxed_2(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_add_acquire_2(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_add_release_2(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_add_seq_cst_2(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1110); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1110, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1110, 0); }};
		return (0);
		}
	}

	inline _Uint2_t _Atomic_fetch_sub_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		return (_Atomic_fetch_add_2(_Tgt, 0 - _Value, _Order));
	}


	inline _Uint2_t _Fetch_and_seq_cst_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedAnd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_and_relaxed_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedAnd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_and_acquire_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedAnd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_and_release_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedAnd16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Atomic_fetch_and_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_and_relaxed_2(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_and_acquire_2(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_and_release_2(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_and_seq_cst_2(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1170); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1170, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1170, 0); }};
		return (0);
		}
	}


	inline _Uint2_t _Fetch_or_seq_cst_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedOr16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_or_relaxed_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedOr16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_or_acquire_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedOr16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_or_release_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedOr16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Atomic_fetch_or_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_or_relaxed_2(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_or_acquire_2(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_or_release_2(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_or_seq_cst_2(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1224); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1224, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1224, 0); }};
		return (0);
		}
	}


	inline _Uint2_t _Fetch_xor_seq_cst_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedXor16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_xor_relaxed_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedXor16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_xor_acquire_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedXor16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Fetch_xor_release_2(volatile _Uint2_t *_Tgt, _Uint2_t _Value)
	{


		return (_InterlockedXor16((volatile short *)_Tgt, _Value));
	}

	inline _Uint2_t _Atomic_fetch_xor_2(
		volatile _Uint2_t *_Tgt, _Uint2_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_xor_relaxed_2(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_xor_acquire_2(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_xor_release_2(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_xor_seq_cst_2(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1278); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1278, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1278, 0); }};
		return (0);
		}
	}


	inline void _Store_relaxed_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{





		*_Tgt = _Value;

	}

	inline void _Store_release_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{






		_ReadWriteBarrier();
		*_Tgt = _Value;

	}

	inline void _Store_seq_cst_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{








		_InterlockedExchange((volatile long *)_Tgt, _Value);

	}

	inline void _Atomic_store_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			_Store_relaxed_4(_Tgt, _Value);
			break;

		case memory_order_release:
			_Store_release_4(_Tgt, _Value);
			break;

		case memory_order_seq_cst:
			_Store_seq_cst_4(_Tgt, _Value);
			break;

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1340); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1340, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1340, 0); }};
		break;
		}
	}


	inline _Uint4_t _Load_seq_cst_4(volatile _Uint4_t *_Tgt)
	{

		_Uint4_t _Value;






		_Value = *_Tgt;
		_ReadWriteBarrier();


		return (_Value);
	}

	inline _Uint4_t _Load_relaxed_4(volatile _Uint4_t *_Tgt)
	{

		_Uint4_t _Value;





		_Value = *_Tgt;


		return (_Value);
	}

	inline _Uint4_t _Load_acquire_4(volatile _Uint4_t *_Tgt)
	{


		return (_Load_seq_cst_4(_Tgt));
	}

	inline _Uint4_t _Atomic_load_4(
		volatile _Uint4_t *_Tgt, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Load_relaxed_4(_Tgt));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Load_acquire_4(_Tgt));

		case memory_order_seq_cst:
			return (_Load_seq_cst_4(_Tgt));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1401); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1401, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1401, 0); }};
		return (0);
		}
	}


	inline _Uint4_t _Exchange_seq_cst_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchange((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Exchange_relaxed_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchange((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Exchange_acquire_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchange((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Exchange_release_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchange((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Atomic_exchange_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Exchange_relaxed_4(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Exchange_acquire_4(_Tgt, _Value));

		case memory_order_release:
			return (_Exchange_release_4(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Exchange_seq_cst_4(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1455); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1455, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1455, 0); }};
		return (0);
		}
	}


	inline int _Compare_exchange_seq_cst_4(volatile _Uint4_t *_Tgt,
		_Uint4_t *_Exp, _Uint4_t _Value)
	{

		_Uint4_t _Old_exp = *_Exp;

		_Uint4_t _Prev = _InterlockedCompareExchange((volatile long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_relaxed_4(volatile _Uint4_t *_Tgt,
		_Uint4_t *_Exp, _Uint4_t _Value)
	{

		_Uint4_t _Old_exp = *_Exp;

		_Uint4_t _Prev = _InterlockedCompareExchange((volatile long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_acquire_4(volatile _Uint4_t *_Tgt,
		_Uint4_t *_Exp, _Uint4_t _Value)
	{

		_Uint4_t _Old_exp = *_Exp;

		_Uint4_t _Prev = _InterlockedCompareExchange((volatile long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_release_4(volatile _Uint4_t *_Tgt,
		_Uint4_t *_Exp, _Uint4_t _Value)
	{

		_Uint4_t _Old_exp = *_Exp;

		_Uint4_t _Prev = _InterlockedCompareExchange((volatile long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Atomic_compare_exchange_strong_4(
		volatile _Uint4_t *_Tgt, _Uint4_t *_Exp, _Uint4_t _Value,
		memory_order _Order1, memory_order _Order2)
	{
		_Validate_compare_exchange_memory_order(_Order1, _Order2);

		switch (_Memory_order_upper_bound(_Order1, _Order2))
		{
		case memory_order_relaxed:
			return (_Compare_exchange_relaxed_4(_Tgt, _Exp, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Compare_exchange_acquire_4(_Tgt, _Exp, _Value));

		case memory_order_release:
			return (_Compare_exchange_release_4(_Tgt, _Exp, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Compare_exchange_seq_cst_4(_Tgt, _Exp, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1556); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1556, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1556, 0); }};
		return (0);
		}
	}

	inline int _Atomic_compare_exchange_weak_4(
		volatile _Uint4_t *_Tgt, _Uint4_t *_Exp, _Uint4_t _Value,
		memory_order _Order1, memory_order _Order2)
	{


		return (_Atomic_compare_exchange_strong_4(_Tgt, _Exp, _Value,
			_Order1, _Order2));
	}


	inline _Uint4_t _Fetch_add_seq_cst_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchangeAdd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_add_relaxed_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchangeAdd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_add_acquire_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchangeAdd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_add_release_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedExchangeAdd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Atomic_fetch_add_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_add_relaxed_4(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_add_acquire_4(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_add_release_4(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_add_seq_cst_4(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1620); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1620, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1620, 0); }};
		return (0);
		}
	}

	inline _Uint4_t _Atomic_fetch_sub_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		return (_Atomic_fetch_add_4(_Tgt, 0 - _Value, _Order));
	}


	inline _Uint4_t _Fetch_and_seq_cst_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedAnd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_and_relaxed_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedAnd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_and_acquire_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedAnd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_and_release_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedAnd((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Atomic_fetch_and_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_and_relaxed_4(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_and_acquire_4(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_and_release_4(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_and_seq_cst_4(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1680); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1680, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1680, 0); }};
		return (0);
		}
	}


	inline _Uint4_t _Fetch_or_seq_cst_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedOr((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_or_relaxed_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedOr((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_or_acquire_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedOr((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_or_release_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedOr((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Atomic_fetch_or_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_or_relaxed_4(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_or_acquire_4(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_or_release_4(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_or_seq_cst_4(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1734); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1734, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1734, 0); }};
		return (0);
		}
	}


	inline _Uint4_t _Fetch_xor_seq_cst_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedXor((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_xor_relaxed_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedXor((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_xor_acquire_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedXor((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Fetch_xor_release_4(volatile _Uint4_t *_Tgt, _Uint4_t _Value)
	{


		return (_InterlockedXor((volatile long *)_Tgt, _Value));
	}

	inline _Uint4_t _Atomic_fetch_xor_4(
		volatile _Uint4_t *_Tgt, _Uint4_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_xor_relaxed_4(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_xor_acquire_4(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_xor_release_4(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_xor_seq_cst_4(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1788); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1788, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1788, 0); }};
		return (0);
		}
	}


	inline void _Store_relaxed_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		*_Tgt = _Value;







	}

	inline void _Store_release_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		_ReadWriteBarrier();
		*_Tgt = _Value;








	}

	inline void _Store_seq_cst_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{








		_InterlockedExchange64((volatile long long *)_Tgt, _Value);

	}

	inline void _Atomic_store_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			_Store_relaxed_8(_Tgt, _Value);
			break;

		case memory_order_release:
			_Store_release_8(_Tgt, _Value);
			break;

		case memory_order_seq_cst:
			_Store_seq_cst_8(_Tgt, _Value);
			break;

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1856); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1856, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1856, 0); }};
		break;
		}
	}


	inline _Uint8_t _Load_seq_cst_8(volatile _Uint8_t *_Tgt)
	{

		_Uint8_t _Value;


		_Value = *_Tgt;
		_ReadWriteBarrier();













		return (_Value);
	}

	inline _Uint8_t _Load_relaxed_8(volatile _Uint8_t *_Tgt)
	{

		_Uint8_t _Value;


		_Value = *_Tgt;











		return (_Value);
	}

	inline _Uint8_t _Load_acquire_8(volatile _Uint8_t *_Tgt)
	{


		return (_Load_seq_cst_8(_Tgt));
	}

	inline _Uint8_t _Atomic_load_8(
		volatile _Uint8_t *_Tgt, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Load_relaxed_8(_Tgt));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Load_acquire_8(_Tgt));

		case memory_order_seq_cst:
			return (_Load_seq_cst_8(_Tgt));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1930); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1930, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1930, 0); }};
		return (0);
		}
	}


	inline _Uint8_t _Exchange_seq_cst_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchange64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Exchange_relaxed_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchange64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Exchange_acquire_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchange64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Exchange_release_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchange64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Atomic_exchange_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Exchange_relaxed_8(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Exchange_acquire_8(_Tgt, _Value));

		case memory_order_release:
			return (_Exchange_release_8(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Exchange_seq_cst_8(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1984); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1984, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 1984, 0); }};
		return (0);
		}
	}


	inline int _Compare_exchange_seq_cst_8(volatile _Uint8_t *_Tgt,
		_Uint8_t *_Exp, _Uint8_t _Value)
	{

		_Uint8_t _Old_exp = *_Exp;

		_Uint8_t _Prev = _InterlockedCompareExchange64((volatile long long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_relaxed_8(volatile _Uint8_t *_Tgt,
		_Uint8_t *_Exp, _Uint8_t _Value)
	{

		_Uint8_t _Old_exp = *_Exp;

		_Uint8_t _Prev = _InterlockedCompareExchange64((volatile long long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_acquire_8(volatile _Uint8_t *_Tgt,
		_Uint8_t *_Exp, _Uint8_t _Value)
	{

		_Uint8_t _Old_exp = *_Exp;

		_Uint8_t _Prev = _InterlockedCompareExchange64((volatile long long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Compare_exchange_release_8(volatile _Uint8_t *_Tgt,
		_Uint8_t *_Exp, _Uint8_t _Value)
	{

		_Uint8_t _Old_exp = *_Exp;

		_Uint8_t _Prev = _InterlockedCompareExchange64((volatile long long *)_Tgt,
			_Value, _Old_exp);

		if (_Prev == _Old_exp)
			return (1);
		else
		{
			*_Exp = _Prev;
			return (0);
		}
	}

	inline int _Atomic_compare_exchange_strong_8(
		volatile _Uint8_t *_Tgt, _Uint8_t *_Exp, _Uint8_t _Value,
		memory_order _Order1, memory_order _Order2)
	{
		_Validate_compare_exchange_memory_order(_Order1, _Order2);

		switch (_Memory_order_upper_bound(_Order1, _Order2))
		{
		case memory_order_relaxed:
			return (_Compare_exchange_relaxed_8(_Tgt, _Exp, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Compare_exchange_acquire_8(_Tgt, _Exp, _Value));

		case memory_order_release:
			return (_Compare_exchange_release_8(_Tgt, _Exp, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Compare_exchange_seq_cst_8(_Tgt, _Exp, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2085); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2085, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2085, 0); }};
		return (0);
		}
	}

	inline int _Atomic_compare_exchange_weak_8(
		volatile _Uint8_t *_Tgt, _Uint8_t *_Exp, _Uint8_t _Value,
		memory_order _Order1, memory_order _Order2)
	{


		return (_Atomic_compare_exchange_strong_8(_Tgt, _Exp, _Value,
			_Order1, _Order2));
	}


	inline _Uint8_t _Fetch_add_seq_cst_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchangeAdd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_add_relaxed_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchangeAdd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_add_acquire_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchangeAdd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_add_release_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedExchangeAdd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Atomic_fetch_add_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_add_relaxed_8(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_add_acquire_8(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_add_release_8(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_add_seq_cst_8(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2149); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2149, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2149, 0); }};
		return (0);
		}
	}

	inline _Uint8_t _Atomic_fetch_sub_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		return (_Atomic_fetch_add_8(_Tgt, 0 - _Value, _Order));
	}


	inline _Uint8_t _Fetch_and_seq_cst_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedAnd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_and_relaxed_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedAnd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_and_acquire_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedAnd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_and_release_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedAnd64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Atomic_fetch_and_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_and_relaxed_8(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_and_acquire_8(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_and_release_8(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_and_seq_cst_8(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2209); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2209, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2209, 0); }};
		return (0);
		}
	}


	inline _Uint8_t _Fetch_or_seq_cst_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedOr64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_or_relaxed_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedOr64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_or_acquire_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedOr64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_or_release_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedOr64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Atomic_fetch_or_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_or_relaxed_8(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_or_acquire_8(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_or_release_8(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_or_seq_cst_8(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2263); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2263, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2263, 0); }};
		return (0);
		}
	}


	inline _Uint8_t _Fetch_xor_seq_cst_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedXor64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_xor_relaxed_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedXor64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_xor_acquire_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedXor64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Fetch_xor_release_8(volatile _Uint8_t *_Tgt, _Uint8_t _Value)
	{


		return (_InterlockedXor64((volatile long long *)_Tgt, _Value));
	}

	inline _Uint8_t _Atomic_fetch_xor_8(
		volatile _Uint8_t *_Tgt, _Uint8_t _Value, memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_Fetch_xor_relaxed_8(_Tgt, _Value));

		case memory_order_consume:
		case memory_order_acquire:
			return (_Fetch_xor_acquire_8(_Tgt, _Value));

		case memory_order_release:
			return (_Fetch_xor_release_8(_Tgt, _Value));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_Fetch_xor_seq_cst_8(_Tgt, _Value));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2317); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2317, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2317, 0); }};
		return (0);
		}
	}

	inline int _Atomic_flag_test_and_set(volatile _Atomic_flag_t *_Flag,
		memory_order _Order)
	{
		switch (_Order)
		{
		case memory_order_relaxed:
			return (_interlockedbittestandset(_Flag, 0));

		case memory_order_consume:
		case memory_order_acquire:
			return (_interlockedbittestandset(_Flag, 0));

		case memory_order_release:
			return (_interlockedbittestandset(_Flag, 0));

		case memory_order_acq_rel:
		case memory_order_seq_cst:
			return (_interlockedbittestandset(_Flag, 0));

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2342); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2342, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2342, 0); }};
		return (0);
		}
	}

	inline void _Atomic_flag_clear(volatile _Atomic_flag_t *_Flag,
		memory_order _Order)
	{
		static_assert(sizeof(_Atomic_flag_t) == sizeof(_Uint4_t),
			"Unexpected _Atomic_flag_t size");

		switch (_Order)
		{
		case memory_order_relaxed:
		case memory_order_release:
		case memory_order_seq_cst:
			_Atomic_store_4((volatile _Uint4_t *)_Flag, 0, _Order);
			break;

		default:
		{_Debug_message(L"Invalid memory_order", L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2362); { (void)((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2362, 0, L"%ls", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX(__FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 14.0\\vc\\include\\xatomic.h", 2362, 0); }};
		break;
		}
	}

	inline void _Atomic_thread_fence(memory_order _Order)
	{







		_ReadWriteBarrier();
		if (_Order == memory_order_seq_cst)
		{
			static _Uint4_t _Guard;
			_Atomic_exchange_4(&_Guard, 0, memory_order_seq_cst);
			_ReadWriteBarrier();
		}

	}

	inline void _Atomic_signal_fence(memory_order _Order)
	{
		_ReadWriteBarrier();
	}













	inline void _Lock_spin_lock(
		volatile _Atomic_flag_t *_Flag)
	{
		while (_Atomic_flag_test_and_set(_Flag, memory_order_acquire))
			;
	}

	inline void _Unlock_spin_lock(
		volatile _Atomic_flag_t *_Flag)
	{
		_Atomic_flag_clear(_Flag, memory_order_release);
	}



	inline void _Atomic_copy(
		volatile _Atomic_flag_t *_Flag, size_t _Size,
		volatile void *_Tgt, volatile const void *_Src,
		memory_order _Order)
	{
		_Lock_spin_lock(_Flag);
		::memcpy((void *)_Tgt, (void *)_Src, _Size);
		_Unlock_spin_lock(_Flag);
	}

	inline void _Atomic_exchange(
		volatile _Atomic_flag_t *_Flag, size_t _Size,
		volatile void *_Tgt, volatile void *_Src,
		memory_order _Order)
	{
		unsigned char *_Left = (unsigned char *)_Tgt;
		unsigned char *_Right = (unsigned char *)_Src;

		_Lock_spin_lock(_Flag);
		for (; 0 < _Size; --_Size)
		{
			unsigned char _Tmp = *_Left;
			*_Left++ = *_Right;
			*_Right++ = _Tmp;
		}
		_Unlock_spin_lock(_Flag);
	}

	inline int _Atomic_compare_exchange_weak(
		volatile _Atomic_flag_t *_Flag, size_t _Size,
		volatile void *_Tgt, volatile void *_Exp, const volatile void *_Src,
		memory_order _Order1, memory_order _Order2)
	{
		int _Result;

		_Lock_spin_lock(_Flag);
		_Result = ::memcmp((const void *)_Tgt, (const void *)_Exp, _Size) == 0;
		if (_Result != 0)
			::memcpy((void *)_Tgt, (void *)_Src, _Size);
		else
			::memcpy((void *)_Exp, (void *)_Tgt, _Size);
		_Unlock_spin_lock(_Flag);
		return (_Result);
	}

	inline int _Atomic_compare_exchange_strong(
		volatile _Atomic_flag_t *_Flag, size_t _Size,
		volatile void *_Tgt, volatile void *_Exp, const volatile void *_Src,
		memory_order _Order1, memory_order _Order2)
	{
		return (_Atomic_compare_exchange_weak(_Flag, _Size, _Tgt, _Exp, _Src,
			_Order1, _Order2));
	}


	inline int _Atomic_is_lock_free_1(void)
	{
		return (1 <= 8);
	}

	inline int _Atomic_is_lock_free_2(void)
	{
		return (2 <= 8);
	}

	inline int _Atomic_is_lock_free_4(void)
	{
		return (4 <= 8);
	}

	inline int _Atomic_is_lock_free_8(void)
	{
		return (8 <= 8);
	}





















































}










#pragma warning(pop)
#pragma pack(pop)










#pragma pack(push,8)
#pragma warning(push,3)



#pragma warning(disable: 4522 4800)











namespace std {
	inline memory_order _Get_memory_order(memory_order _Order)
	{

		return (_Order == memory_order_acq_rel ? memory_order_acquire
			: _Order == memory_order_release ? memory_order_relaxed
			: _Order);
	}


	template<class _Ty>
	_Ty kill_dependency(_Ty _Arg) noexcept
	{
		return (_Arg);
	}


	template <class _Ty>
	struct atomic;
	template <class _Ty>
	bool atomic_is_lock_free(const volatile atomic<_Ty> *) noexcept;
	template <class _Ty>
	bool atomic_is_lock_free(const atomic<_Ty> *) noexcept;
	template <class _Ty>
	void atomic_init(volatile atomic<_Ty> *, _Ty) noexcept;
	template <class _Ty>
	void atomic_init(atomic<_Ty> *, _Ty) noexcept;
	template <class _Ty>
	void atomic_store(volatile atomic<_Ty> *, _Ty) noexcept;
	template <class _Ty>
	void atomic_store(atomic<_Ty> *, _Ty) noexcept;
	template <class _Ty>
	void atomic_store_explicit(volatile atomic<_Ty> *, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	void atomic_store_explicit(atomic<_Ty> *, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_load(const volatile atomic<_Ty> *) noexcept;
	template <class _Ty>
	_Ty atomic_load(const atomic<_Ty> *) noexcept;
	template <class _Ty>
	_Ty atomic_load_explicit(const volatile atomic<_Ty> *,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_load_explicit(const atomic<_Ty> *,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_exchange(volatile atomic<_Ty> *, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_exchange(atomic<_Ty> *, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_exchange_explicit(volatile atomic<_Ty> *, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_exchange_explicit(atomic<_Ty> *, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_weak(volatile atomic<_Ty> *,
		_Ty *, _Ty) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_weak(atomic<_Ty> *,
		_Ty *, _Ty) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_weak_explicit(
		volatile atomic<_Ty> *, _Ty *, _Ty,
		memory_order, memory_order) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_weak_explicit(
		atomic<_Ty> *, _Ty *, _Ty,
		memory_order, memory_order) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_strong(volatile atomic<_Ty> *,
		_Ty *, _Ty) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_strong(atomic<_Ty> *,
		_Ty *, _Ty) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_strong_explicit(
		volatile atomic<_Ty> *, _Ty *, _Ty,
		memory_order, memory_order) noexcept;
	template <class _Ty>
	bool atomic_compare_exchange_strong_explicit(
		atomic<_Ty> *, _Ty *, _Ty,
		memory_order, memory_order) noexcept;


	template <class _Ty>
	_Ty atomic_fetch_add(volatile atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_add(atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_add_explicit(volatile atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_add_explicit(atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_sub(volatile atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_sub(atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_sub_explicit(volatile atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_sub_explicit(atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_and(volatile atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_and(atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_and_explicit(volatile atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_and_explicit(atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_or(volatile atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_or(atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_or_explicit(volatile atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_or_explicit(atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_xor(volatile atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_xor(atomic<_Ty>*, _Ty) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_xor_explicit(volatile atomic<_Ty>*, _Ty,
		memory_order) noexcept;
	template <class _Ty>
	_Ty atomic_fetch_xor_explicit(atomic<_Ty>*, _Ty,
		memory_order) noexcept;



	typedef struct atomic_flag
	{
		bool test_and_set(memory_order _Order = memory_order_seq_cst)
			volatile noexcept;
		bool test_and_set(memory_order _Order = memory_order_seq_cst) noexcept;
		void clear(memory_order _Order = memory_order_seq_cst)
			volatile noexcept;
		void clear(memory_order _Order = memory_order_seq_cst) noexcept;

		_Atomic_flag_t _My_flag;

		atomic_flag() noexcept = default;
		atomic_flag(const atomic_flag&) = delete;
		atomic_flag& operator=(const atomic_flag&) = delete;
		atomic_flag& operator=(const atomic_flag&) volatile = delete;
	} atomic_flag;

	inline bool atomic_flag::test_and_set(memory_order _Order)
		volatile noexcept
	{
		return (_Atomic_flag_test_and_set(&_My_flag, _Order));
	}

	inline bool atomic_flag::test_and_set(memory_order _Order) noexcept
	{
		return (_Atomic_flag_test_and_set(&_My_flag, _Order));
	}

	inline void atomic_flag::clear(memory_order _Order)
		volatile noexcept
	{
		_Atomic_flag_clear(&_My_flag, _Order);
	}

	inline void atomic_flag::clear(memory_order _Order) noexcept
	{
		_Atomic_flag_clear(&_My_flag, _Order);
	}

	inline bool atomic_flag_test_and_set(volatile atomic_flag *_Flag) noexcept
	{
		return (_Atomic_flag_test_and_set(&_Flag->_My_flag, memory_order_seq_cst));
	}

	inline bool atomic_flag_test_and_set(atomic_flag *_Flag) noexcept
	{
		return (_Atomic_flag_test_and_set(&_Flag->_My_flag, memory_order_seq_cst));
	}

	inline bool atomic_flag_test_and_set_explicit(
		volatile atomic_flag *_Flag, memory_order _Order) noexcept
	{
		return (_Atomic_flag_test_and_set(&_Flag->_My_flag, _Order));
	}

	inline bool atomic_flag_test_and_set_explicit(
		atomic_flag *_Flag, memory_order _Order) noexcept
	{
		return (_Atomic_flag_test_and_set(&_Flag->_My_flag, _Order));
	}

	inline void atomic_flag_clear(volatile atomic_flag *_Flag) noexcept
	{
		_Atomic_flag_clear(&_Flag->_My_flag, memory_order_seq_cst);
	}

	inline void atomic_flag_clear(atomic_flag *_Flag) noexcept
	{
		_Atomic_flag_clear(&_Flag->_My_flag, memory_order_seq_cst);
	}

	inline void atomic_flag_clear_explicit(
		volatile atomic_flag *_Flag, memory_order _Order) noexcept
	{
		_Atomic_flag_clear(&_Flag->_My_flag, _Order);
	}

	inline void atomic_flag_clear_explicit(
		atomic_flag *_Flag, memory_order _Order) noexcept
	{
		_Atomic_flag_clear(&_Flag->_My_flag, _Order);
	}


	template<unsigned _Bytes>
	struct _Atomic_impl
	{
		typedef _Uint1_t _My_int;

		constexpr _Atomic_impl() noexcept
			: _My_flag(0)
		{
		}

		bool _Is_lock_free() const volatile
		{
			return (false);
		}

		void _Store(void *_Tgt, const void *_Src, memory_order _Order) volatile
		{
			_Atomic_copy(&_My_flag, _Bytes, _Tgt, _Src, _Order);
		}

		void _Load(void *_Tgt, const void *_Src,
			memory_order _Order) const volatile
		{
			_Atomic_copy(&_My_flag, _Bytes, _Tgt, _Src, _Order);
		}

		void _Exchange(void *_Left, void *_Right, memory_order _Order) volatile
		{
			_Atomic_exchange(&_My_flag, _Bytes, _Left, _Right, _Order);
		}

		bool _Compare_exchange_weak(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_weak(
				&_My_flag, _Bytes, _Tgt, _Exp, _Value, _Order1, _Order2));
		}

		bool _Compare_exchange_strong(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_strong(
				&_My_flag, _Bytes, _Tgt, _Exp, _Value, _Order1, _Order2));
		}

	private:
		mutable _Atomic_flag_t _My_flag;
	};



	template<>
	struct _Atomic_impl<1U>
	{
		typedef _Uint1_t _My_int;

		bool _Is_lock_free() const volatile
		{
			return (_Atomic_is_lock_free_1());
		}

		void _Store(void *_Tgt, const void *_Src, memory_order _Order) volatile
		{
			_Atomic_store_1((_My_int*)_Tgt, *(_My_int*)_Src, _Order);
		}

		void _Load(void *_Tgt, const void *_Src,
			memory_order _Order) const volatile
		{
			*(_My_int*)_Tgt = _Atomic_load_1((_My_int*)_Src, _Order);
		}

		void _Exchange(void *_Left, void *_Right, memory_order _Order) volatile
		{
			*(_My_int*)_Right =
				_Atomic_exchange_1((_My_int*)_Left, *(_My_int*)_Right, _Order);
		}

		bool _Compare_exchange_weak(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_weak_1(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}

		bool _Compare_exchange_strong(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_strong_1(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}
	};

	template<>
	struct _Atomic_impl<2U>
	{
		typedef _Uint2_t _My_int;

		bool _Is_lock_free() const volatile
		{
			return (_Atomic_is_lock_free_2());
		}

		void _Store(void *_Tgt, const void *_Src, memory_order _Order) volatile
		{
			_Atomic_store_2((_My_int*)_Tgt, *(_My_int*)_Src, _Order);
		}

		void _Load(void *_Tgt, const void *_Src,
			memory_order _Order) const volatile
		{
			*(_My_int*)_Tgt = _Atomic_load_2((_My_int*)_Src, _Order);
		}

		void _Exchange(void *_Left, void *_Right, memory_order _Order) volatile
		{
			*(_My_int*)_Right =
				_Atomic_exchange_2((_My_int*)_Left, *(_My_int*)_Right, _Order);
		}

		bool _Compare_exchange_weak(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_weak_2(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}

		bool _Compare_exchange_strong(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_strong_2(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}
	};

	template<>
	struct _Atomic_impl<4U>
	{
		typedef _Uint4_t _My_int;

		bool _Is_lock_free() const volatile
		{
			return (_Atomic_is_lock_free_4());
		}

		void _Store(void *_Tgt, const void *_Src, memory_order _Order) volatile
		{
			_Atomic_store_4((_My_int*)_Tgt, *(_My_int*)_Src, _Order);
		}

		void _Load(void *_Tgt, const void *_Src,
			memory_order _Order) const volatile
		{
			*(_My_int*)_Tgt = _Atomic_load_4((_My_int*)_Src, _Order);
		}

		void _Exchange(void *_Left, void *_Right, memory_order _Order) volatile
		{
			*(_My_int*)_Right =
				_Atomic_exchange_4((_My_int*)_Left, *(_My_int*)_Right, _Order);
		}

		bool _Compare_exchange_weak(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_weak_4(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}

		bool _Compare_exchange_strong(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_strong_4(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}
	};

	template<>
	struct _Atomic_impl<8U>
	{
		typedef _Uint8_t _My_int;

		bool _Is_lock_free() const volatile
		{
			return (_Atomic_is_lock_free_8());
		}

		void _Store(void *_Tgt, const void *_Src, memory_order _Order) volatile
		{
			_Atomic_store_8((_My_int*)_Tgt, *(_My_int*)_Src, _Order);
		}

		void _Load(void *_Tgt, const void *_Src,
			memory_order _Order) const volatile
		{
			*(_My_int*)_Tgt = _Atomic_load_8((_My_int*)_Src, _Order);
		}

		void _Exchange(void *_Left, void *_Right, memory_order _Order) volatile
		{
			*(_My_int*)_Right =
				_Atomic_exchange_8((_My_int*)_Left, *(_My_int*)_Right, _Order);
		}

		bool _Compare_exchange_weak(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_weak_8(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}

		bool _Compare_exchange_strong(
			void *_Tgt, void *_Exp, const void *_Value,
			memory_order _Order1, memory_order _Order2) volatile
		{
			return (_Atomic_compare_exchange_strong_8(
				(_My_int*)_Tgt, (_My_int*)_Exp, *(_My_int*)_Value,
				_Order1, _Order2));
		}
	};


	template<class _Ty,
		unsigned _Bytes>
		struct _Atomic_base
		: _Atomic_impl<_Bytes>
	{
		typedef _Atomic_impl<_Bytes> _Mybase;
		typedef typename _Mybase::_My_int _My_int;

		constexpr _Atomic_base(_Ty _Val) noexcept
			: _My_val(_Val)
		{
		}

		_Atomic_base() noexcept = default;
		_Atomic_base(const _Atomic_base&) = delete;
		_Atomic_base& operator=(const _Atomic_base&) = delete;
		_Atomic_base& operator=(const _Atomic_base&) volatile = delete;

		_Ty operator=(_Ty _Right) volatile noexcept
		{
			this->_Store((void *)&_My_val, &_Right, memory_order_seq_cst);
			return (_Right);
		}

		_Ty operator=(_Ty _Right) noexcept
		{
			this->_Store((void *)&_My_val, &_Right, memory_order_seq_cst);
			return (_Right);
		}

		bool is_lock_free() const volatile noexcept
		{
			return (this->_Is_lock_free());
		}

		bool is_lock_free() const noexcept
		{
			return (this->_Is_lock_free());
		}

		void store(_Ty _Value,
			memory_order _Order = memory_order_seq_cst) volatile noexcept
		{
			this->_Store((void *)&_My_val, &_Value, _Order);
		}

		void store(_Ty _Value,
			memory_order _Order = memory_order_seq_cst) noexcept
		{
			this->_Store((void *)&_My_val, &_Value, _Order);
		}

		_Ty load(memory_order _Order = memory_order_seq_cst)
			const volatile noexcept
		{
			_Ty _Result;
			this->_Load((void *)&_Result, (const void *)&_My_val, _Order);
			return (_Result);
		}

		_Ty load(memory_order _Order = memory_order_seq_cst)
			const noexcept
		{
			_Ty _Result;
			this->_Load((void *)&_Result, (const void *)&_My_val, _Order);
			return (_Result);
		}

		operator _Ty() const volatile noexcept
		{
			return (load());
		}

		operator _Ty() const noexcept
		{
			return (load());
		}

		_Ty exchange(_Ty _Value,
			memory_order _Order = memory_order_seq_cst) volatile noexcept
		{
			this->_Exchange((void *)&_My_val, (void *)&_Value, _Order);
			return (_Value);
		}

		_Ty exchange(_Ty _Value,
			memory_order _Order = memory_order_seq_cst) noexcept
		{
			this->_Exchange((void *)&_My_val, (void *)&_Value, _Order);
			return (_Value);
		}

		bool compare_exchange_weak(_Ty& _Exp, _Ty _Value,
			memory_order _Order1, memory_order _Order2) volatile noexcept
		{
			return (this->_Compare_exchange_weak(
				(void *)&_My_val, (void *)&_Exp, (const void *)&_Value,
				_Order1, _Order2));
		}

		bool compare_exchange_weak(_Ty& _Exp, _Ty _Value,
			memory_order _Order1, memory_order _Order2) noexcept
		{
			return (this->_Compare_exchange_weak(
				(void *)&_My_val, (void *)&_Exp, (const void *)&_Value,
				_Order1, _Order2));
		}

		bool compare_exchange_weak(_Ty& _Exp, _Ty _Value,
			memory_order _Order = memory_order_seq_cst) volatile noexcept
		{
			return (compare_exchange_weak(
				_Exp, _Value, _Order, _Get_memory_order(_Order)));
		}

		bool compare_exchange_weak(_Ty& _Exp, _Ty _Value,
			memory_order _Order = memory_order_seq_cst) noexcept
		{
			return (compare_exchange_weak(
				_Exp, _Value, _Order, _Get_memory_order(_Order)));
		}

		bool compare_exchange_strong(_Ty& _Exp, _Ty _Value,
			memory_order _Order1, memory_order _Order2) volatile noexcept
		{
			return (this->_Compare_exchange_strong(
				(void *)&_My_val, (void *)&_Exp, (const void *)&_Value,
				_Order1, _Order2));
		}

		bool compare_exchange_strong(_Ty& _Exp, _Ty _Value,
			memory_order _Order1, memory_order _Order2) noexcept
		{
			return (this->_Compare_exchange_strong(
				(void *)&_My_val, (void *)&_Exp, (void *)&_Value,
				_Order1, _Order2));
		}

		bool compare_exchange_strong(_Ty& _Exp, _Ty _Value,
			memory_order _Order = memory_order_seq_cst) volatile noexcept
		{
			return (compare_exchange_strong(
				_Exp, _Value, _Order, _Get_memory_order(_Order)));
		}

		bool compare_exchange_strong(_Ty& _Exp, _Ty _Value,
			memory_order _Order = memory_order_seq_cst) noexcept
		{
			return (compare_exchange_strong(
				_Exp, _Value, _Order, _Get_memory_order(_Order)));
		}


		static_assert(alignof(_Ty) >= sizeof(_My_int),
			"You've instantiated std::atomic<T> with sizeof(T) equal to 2/4/8 and alignof(T) < sizeof(T). "
			"Before VS 2015 Update 2, this would have misbehaved at runtime. "
			"VS 2015 Update 2 was fixed to handle this correctly, "
			"but the fix inherently changes layout and breaks binary compatibility. "
			"Please define _ENABLE_ATOMIC_ALIGNMENT_FIX to acknowledge that you understand this, "
			"and that everything you're linking has been compiled with VS 2015 Update 2 (or later).");


		alignas(sizeof(_My_int)) alignas(_Ty)_Ty _My_val;
	};


	template<class _Ty>
	struct atomic
		: _Atomic_base<_Ty, sizeof(_Ty)>
	{
		static_assert(is_trivially_copyable<_Ty>::value,
			"atomic<T> requires T to be trivially copyable.");

		typedef _Atomic_base<_Ty, sizeof(_Ty)> _My_base;

		atomic() noexcept = default;
		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;

		constexpr atomic(_Ty _Val) noexcept
			: _My_base(_Val)
		{
		}

		_Ty operator=(_Ty _Right) volatile noexcept
		{
			return (_My_base::operator=(_Right));
		}

		_Ty operator=(_Ty _Right) noexcept
		{
			return (_My_base::operator=(_Right));
		}
	};















	static_assert(1 == sizeof(bool),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_bool
	{
		bool operator=(bool) volatile noexcept;
		bool operator=(bool) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(bool, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(bool, memory_order = memory_order_seq_cst)
			noexcept;
		bool load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		bool load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator bool() const volatile noexcept;
		operator bool() const noexcept;
		bool exchange(bool,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool exchange(bool,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(bool&, bool,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(bool&, bool,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(bool&, bool,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(bool&, bool,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(bool&, bool,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(bool&, bool,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(bool&, bool,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(bool&, bool,
			memory_order = memory_order_seq_cst) noexcept;






























































		alignas(sizeof(_Uint1_t)) _Uint1_t _My_val;




	} _Atomic_bool;



	template<>
	struct atomic<bool>
		: _Atomic_bool
	{

		atomic() noexcept = default;

		constexpr atomic(bool _Val) noexcept
			: _Atomic_bool{ (_Uint1_t)_Val }
		{
		}

		bool operator=(bool _Val) volatile noexcept
		{
			return (_Atomic_bool::operator=(_Val));
		}

		bool operator=(bool _Val) noexcept
		{
			return (_Atomic_bool::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_bool *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const _Atomic_bool *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}


	inline bool atomic_is_lock_free(const volatile atomic<bool> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const atomic<bool> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}



	inline void atomic_init(volatile _Atomic_bool *_Atom,
		bool _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(_Atomic_bool *_Atom,
		bool _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_init(volatile atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_bool *_Atom, bool _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_bool *_Atom, bool _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_bool *_Atom,
		bool _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_bool *_Atom,
		bool _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline bool atomic_load_explicit(
		const volatile _Atomic_bool *_Atom, memory_order _Order) noexcept
	{
		return ((bool)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline bool atomic_load_explicit(
		const _Atomic_bool *_Atom, memory_order _Order) noexcept
	{
		return ((bool)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline bool atomic_load(
		const volatile _Atomic_bool *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline bool atomic_load(
		const _Atomic_bool *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline bool atomic_exchange_explicit(
		volatile _Atomic_bool *_Atom, bool _Value,
		memory_order _Order) noexcept
	{
		return ((bool)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline bool atomic_exchange_explicit(
		_Atomic_bool *_Atom, bool _Value,
		memory_order _Order) noexcept
	{
		return ((bool)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline bool atomic_exchange(volatile _Atomic_bool *_Atom,
		bool _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_exchange(_Atomic_bool *_Atom,
		bool _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_bool *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_bool *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_bool *_Atom, bool *_Exp,
		bool _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_bool *_Atom, bool *_Exp,
		bool _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_bool *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_bool *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_bool *_Atom, bool *_Exp, bool _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_bool *_Atom, bool *_Exp, bool _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline bool _Atomic_bool::operator=(bool _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_bool::operator=(bool _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_bool::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_bool::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_bool::store(bool _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_bool::store(bool _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline bool _Atomic_bool::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline bool _Atomic_bool::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_bool::operator bool() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_bool::operator bool() const noexcept
	{
		return (atomic_load(this));
	}

	inline bool _Atomic_bool::exchange(
		bool _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_bool::exchange(
		bool _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_bool::compare_exchange_weak(
		bool& _Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_bool::compare_exchange_weak(
		bool& _Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_bool::compare_exchange_weak(
		bool& _Exp, bool _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_bool::compare_exchange_weak(
		bool& _Exp, bool _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_bool::compare_exchange_strong(
		bool& _Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_bool::compare_exchange_strong(
		bool& _Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_bool::compare_exchange_strong(
		bool& _Exp, bool _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_bool::compare_exchange_strong(
		bool& _Exp, bool _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<bool> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_bool *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<bool> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_bool *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_bool *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_bool *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_bool *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_bool *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<bool> *_Atom,
		bool _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_bool *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<bool> *_Atom,
		bool _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_bool *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline bool atomic_load(const volatile atomic<bool> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_bool *>(_Atom)));
	}

	template<>
	inline bool atomic_load(const atomic<bool> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_bool *>(_Atom)));
	}

	template<>
	inline bool atomic_load_explicit(
		const volatile atomic<bool> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_bool *>(_Atom), _Order));
	}

	template<>
	inline bool atomic_load_explicit(
		const atomic<bool> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_bool *>(_Atom), _Order));
	}

	template<>
	inline bool atomic_exchange(
		volatile atomic<bool> *_Atom, bool _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_bool *>(_Atom), _Value));
	}

	template<>
	inline bool atomic_exchange(atomic<bool> *_Atom,
		bool _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_bool *>(_Atom), _Value));
	}

	template<>
	inline bool atomic_exchange_explicit(
		volatile atomic<bool> *_Atom,
		bool _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_bool *>(_Atom), _Value, _Order));
	}

	template<>
	inline bool atomic_exchange_explicit(atomic<bool> *_Atom,
		bool _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_bool *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<bool> *_Atom, bool *_Exp,
		bool _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_bool *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<bool> *_Atom, bool *_Exp,
		bool _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_bool *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<bool> *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_bool *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<bool> *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_bool *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<bool> *_Atom, bool *_Exp,
		bool _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_bool *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<bool> *_Atom, bool *_Exp,
		bool _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_bool *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<bool> *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_bool *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<bool> *_Atom, bool *_Exp, bool _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_bool *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}
























































































































































































































































































































































































































































































































































































































	static_assert(1 == sizeof(char),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_char
	{
		char operator=(char) volatile noexcept;
		char operator=(char) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(char, memory_order = memory_order_seq_cst)
			noexcept;
		char load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		char load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator char() const volatile noexcept;
		operator char() const noexcept;
		char exchange(char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		char exchange(char,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(char&, char,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(char&, char,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(char&, char,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(char&, char,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(char&, char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(char&, char,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(char&, char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(char&, char,
			memory_order = memory_order_seq_cst) noexcept;


		char operator++(int) volatile noexcept;
		char operator++(int) noexcept;
		char operator--(int) volatile noexcept;
		char operator--(int) noexcept;
		char operator++() volatile noexcept;
		char operator++() noexcept;
		char operator--() volatile noexcept;
		char operator--() noexcept;
		char operator+=(char) volatile noexcept;
		char operator+=(char) noexcept;
		char operator-=(char) volatile noexcept;
		char operator-=(char) noexcept;
		char operator&=(char) volatile noexcept;
		char operator&=(char) noexcept;
		char operator|=(char) volatile noexcept;
		char operator|=(char) noexcept;
		char operator^=(char) volatile noexcept;
		char operator^=(char) noexcept;

		char fetch_add(char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char fetch_add(char, memory_order = memory_order_seq_cst) noexcept;
		char fetch_sub(char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char fetch_sub(char, memory_order = memory_order_seq_cst) noexcept;
		char fetch_and(char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char fetch_and(char, memory_order = memory_order_seq_cst) noexcept;
		char fetch_or(char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char fetch_or(char, memory_order = memory_order_seq_cst) noexcept;
		char fetch_xor(char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char fetch_xor(char, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint1_t)) _Uint1_t _My_val;




	} _Atomic_char;



	template<>
	struct atomic<char>
		: _Atomic_char
	{

		atomic() noexcept = default;

		constexpr atomic(char _Val) noexcept
			: _Atomic_char{ (_Uint1_t)_Val }
		{
		}

		char operator=(char _Val) volatile noexcept
		{
			return (_Atomic_char::operator=(_Val));
		}

		char operator=(char _Val) noexcept
		{
			return (_Atomic_char::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_char *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const _Atomic_char *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}


	inline bool atomic_is_lock_free(const volatile atomic<char> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const atomic<char> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}



	inline void atomic_init(volatile _Atomic_char *_Atom,
		char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(_Atomic_char *_Atom,
		char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_init(volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(atomic<char> *_Atom,
		char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_char *_Atom,
		char _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_char *_Atom,
		char _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline char atomic_load_explicit(
		const volatile _Atomic_char *_Atom, memory_order _Order) noexcept
	{
		return ((char)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline char atomic_load_explicit(
		const _Atomic_char *_Atom, memory_order _Order) noexcept
	{
		return ((char)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline char atomic_load(
		const volatile _Atomic_char *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline char atomic_load(
		const _Atomic_char *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline char atomic_exchange_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_exchange_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_exchange(volatile _Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_exchange(_Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_char *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_char *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_char *_Atom, char *_Exp,
		char _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_char *_Atom, char *_Exp,
		char _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_char *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_char *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_char *_Atom, char *_Exp, char _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_char *_Atom, char *_Exp, char _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline char _Atomic_char::operator=(char _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline char _Atomic_char::operator=(char _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_char::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_char::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_char::store(char _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_char::store(char _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline char _Atomic_char::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline char _Atomic_char::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_char::operator char() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_char::operator char() const noexcept
	{
		return (atomic_load(this));
	}

	inline char _Atomic_char::exchange(
		char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::exchange(
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_char::compare_exchange_weak(
		char& _Exp, char _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char::compare_exchange_weak(
		char& _Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char::compare_exchange_weak(
		char& _Exp, char _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char::compare_exchange_weak(
		char& _Exp, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char::compare_exchange_strong(
		char& _Exp, char _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char::compare_exchange_strong(
		char& _Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char::compare_exchange_strong(
		char& _Exp, char _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char::compare_exchange_strong(
		char& _Exp, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<char> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_char *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<char> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_char *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_char *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<char> *_Atom,
		char _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_char *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_char *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<char> *_Atom,
		char _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_char *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<char> *_Atom,
		char _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_char *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<char> *_Atom,
		char _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_char *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline char atomic_load(const volatile atomic<char> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_char *>(_Atom)));
	}

	template<>
	inline char atomic_load(const atomic<char> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_char *>(_Atom)));
	}

	template<>
	inline char atomic_load_explicit(
		const volatile atomic<char> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_char *>(_Atom), _Order));
	}

	template<>
	inline char atomic_load_explicit(
		const atomic<char> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_char *>(_Atom), _Order));
	}

	template<>
	inline char atomic_exchange(
		volatile atomic<char> *_Atom, char _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_exchange(atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_exchange_explicit(
		volatile atomic<char> *_Atom,
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_exchange_explicit(atomic<char> *_Atom,
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_char *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<char> *_Atom, char *_Exp,
		char _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_char *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<char> *_Atom, char *_Exp,
		char _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_char *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<char> *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<char> *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_char *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<char> *_Atom, char *_Exp,
		char _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_char *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<char> *_Atom, char *_Exp,
		char _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_char *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<char> *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<char> *_Atom, char *_Exp, char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_char *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline char atomic_fetch_add_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_add_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_add_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_add_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_add(volatile _Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_add(_Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_sub_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_sub_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_sub_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_sub_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_sub(volatile _Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_sub(_Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_and_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_and_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_and_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_and_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_and(volatile _Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_and(_Atomic_char *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_or_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_or_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_or_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_or_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_or(
		volatile _Atomic_char *_Atom, char _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_or(
		_Atomic_char *_Atom, char _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_xor_explicit(
		volatile _Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_xor_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_xor_explicit(
		_Atomic_char *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return ((char)_Atomic_fetch_xor_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline char atomic_fetch_xor(
		volatile _Atomic_char *_Atom, char _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char atomic_fetch_xor(
		_Atomic_char *_Atom, char _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline char _Atomic_char::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline char _Atomic_char::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline char _Atomic_char::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline char _Atomic_char::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline char _Atomic_char::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline char _Atomic_char::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline char _Atomic_char::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline char _Atomic_char::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline char _Atomic_char::operator+=(char _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline char _Atomic_char::operator+=(char _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline char _Atomic_char::operator-=(char _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline char _Atomic_char::operator-=(char _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline char _Atomic_char::operator&=(char _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline char _Atomic_char::operator&=(char _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline char _Atomic_char::operator|=(char _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline char _Atomic_char::operator|=(char _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline char _Atomic_char::operator^=(char _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline char _Atomic_char::operator^=(char _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline char _Atomic_char::fetch_add(
		char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_add(
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_sub(
		char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_sub(
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_and(
		char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_and(
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_or(
		char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_or(
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_xor(
		char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline char _Atomic_char::fetch_xor(
		char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline char atomic_fetch_add(
		volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_add(atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_add_explicit(
		volatile atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_add_explicit(
		atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_sub(
		volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_sub(atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_sub_explicit(
		volatile atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_sub_explicit(
		atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_and(
		volatile atomic<char> *_Atom, char _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_and(
		atomic<char> *_Atom, char _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_and_explicit(
		volatile atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_and_explicit(
		atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_or(volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_or(atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_or_explicit(
		volatile atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_or_explicit(
		atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_xor(volatile atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_xor(atomic<char> *_Atom,
		char _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_char *>(_Atom), _Value));
	}

	template<>
	inline char atomic_fetch_xor_explicit(
		volatile atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_char *>(_Atom), _Value, _Order));
	}

	template<>
	inline char atomic_fetch_xor_explicit(
		atomic<char> *_Atom, char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_char *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(1 == sizeof(signed char),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_schar
	{
		signed char operator=(signed char) volatile noexcept;
		signed char operator=(signed char) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(signed char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(signed char, memory_order = memory_order_seq_cst)
			noexcept;
		signed char load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		signed char load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator signed char() const volatile noexcept;
		operator signed char() const noexcept;
		signed char exchange(signed char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		signed char exchange(signed char,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(signed char&, signed char,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(signed char&, signed char,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(signed char&, signed char,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(signed char&, signed char,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(signed char&, signed char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(signed char&, signed char,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(signed char&, signed char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(signed char&, signed char,
			memory_order = memory_order_seq_cst) noexcept;


		signed char operator++(int) volatile noexcept;
		signed char operator++(int) noexcept;
		signed char operator--(int) volatile noexcept;
		signed char operator--(int) noexcept;
		signed char operator++() volatile noexcept;
		signed char operator++() noexcept;
		signed char operator--() volatile noexcept;
		signed char operator--() noexcept;
		signed char operator+=(signed char) volatile noexcept;
		signed char operator+=(signed char) noexcept;
		signed char operator-=(signed char) volatile noexcept;
		signed char operator-=(signed char) noexcept;
		signed char operator&=(signed char) volatile noexcept;
		signed char operator&=(signed char) noexcept;
		signed char operator|=(signed char) volatile noexcept;
		signed char operator|=(signed char) noexcept;
		signed char operator^=(signed char) volatile noexcept;
		signed char operator^=(signed char) noexcept;

		signed char fetch_add(signed char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		signed char fetch_add(signed char, memory_order = memory_order_seq_cst) noexcept;
		signed char fetch_sub(signed char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		signed char fetch_sub(signed char, memory_order = memory_order_seq_cst) noexcept;
		signed char fetch_and(signed char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		signed char fetch_and(signed char, memory_order = memory_order_seq_cst) noexcept;
		signed char fetch_or(signed char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		signed char fetch_or(signed char, memory_order = memory_order_seq_cst) noexcept;
		signed char fetch_xor(signed char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		signed char fetch_xor(signed char, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint1_t)) _Uint1_t _My_val;




	} _Atomic_schar;



	template<>
	struct atomic<signed char>
		: _Atomic_schar
	{

		atomic() noexcept = default;

		constexpr atomic(signed char _Val) noexcept
			: _Atomic_schar{ (_Uint1_t)_Val }
		{
		}

		signed char operator=(signed char _Val) volatile noexcept
		{
			return (_Atomic_schar::operator=(_Val));
		}

		signed char operator=(signed char _Val) noexcept
		{
			return (_Atomic_schar::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_schar *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const _Atomic_schar *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}


	inline bool atomic_is_lock_free(const volatile atomic<signed char> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const atomic<signed char> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}



	inline void atomic_init(volatile _Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(_Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_init(volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline signed char atomic_load_explicit(
		const volatile _Atomic_schar *_Atom, memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline signed char atomic_load_explicit(
		const _Atomic_schar *_Atom, memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline signed char atomic_load(
		const volatile _Atomic_schar *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline signed char atomic_load(
		const _Atomic_schar *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline signed char atomic_exchange_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_exchange_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_exchange(volatile _Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_exchange(_Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_schar *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_schar *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_schar *_Atom, signed char *_Exp,
		signed char _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_schar *_Atom, signed char *_Exp,
		signed char _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_schar *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_schar *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_schar *_Atom, signed char *_Exp, signed char _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_schar *_Atom, signed char *_Exp, signed char _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline signed char _Atomic_schar::operator=(signed char _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline signed char _Atomic_schar::operator=(signed char _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_schar::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_schar::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_schar::store(signed char _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_schar::store(signed char _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline signed char _Atomic_schar::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline signed char _Atomic_schar::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_schar::operator signed char() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_schar::operator signed char() const noexcept
	{
		return (atomic_load(this));
	}

	inline signed char _Atomic_schar::exchange(
		signed char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::exchange(
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_schar::compare_exchange_weak(
		signed char& _Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_schar::compare_exchange_weak(
		signed char& _Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_schar::compare_exchange_weak(
		signed char& _Exp, signed char _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_schar::compare_exchange_weak(
		signed char& _Exp, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_schar::compare_exchange_strong(
		signed char& _Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_schar::compare_exchange_strong(
		signed char& _Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_schar::compare_exchange_strong(
		signed char& _Exp, signed char _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_schar::compare_exchange_strong(
		signed char& _Exp, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<signed char> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_schar *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<signed char> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_schar *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_schar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_schar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_schar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_schar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<signed char> *_Atom,
		signed char _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_schar *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<signed char> *_Atom,
		signed char _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_schar *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline signed char atomic_load(const volatile atomic<signed char> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_schar *>(_Atom)));
	}

	template<>
	inline signed char atomic_load(const atomic<signed char> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_schar *>(_Atom)));
	}

	template<>
	inline signed char atomic_load_explicit(
		const volatile atomic<signed char> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_schar *>(_Atom), _Order));
	}

	template<>
	inline signed char atomic_load_explicit(
		const atomic<signed char> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_schar *>(_Atom), _Order));
	}

	template<>
	inline signed char atomic_exchange(
		volatile atomic<signed char> *_Atom, signed char _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_exchange(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_exchange_explicit(
		volatile atomic<signed char> *_Atom,
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_exchange_explicit(atomic<signed char> *_Atom,
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_schar *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<signed char> *_Atom, signed char *_Exp,
		signed char _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_schar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<signed char> *_Atom, signed char *_Exp,
		signed char _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_schar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<signed char> *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<signed char> *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<signed char> *_Atom, signed char *_Exp,
		signed char _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_schar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<signed char> *_Atom, signed char *_Exp,
		signed char _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_schar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<signed char> *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<signed char> *_Atom, signed char *_Exp, signed char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline signed char atomic_fetch_add_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_add_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_add_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_add_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_add(volatile _Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_add(_Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_sub_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_sub_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_sub_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_sub_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_sub(volatile _Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_sub(_Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_and_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_and_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_and_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_and_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_and(volatile _Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_and(_Atomic_schar *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_or_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_or_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_or_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_or_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_or(
		volatile _Atomic_schar *_Atom, signed char _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_or(
		_Atomic_schar *_Atom, signed char _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_xor_explicit(
		volatile _Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_xor_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_xor_explicit(
		_Atomic_schar *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return ((signed char)_Atomic_fetch_xor_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline signed char atomic_fetch_xor(
		volatile _Atomic_schar *_Atom, signed char _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline signed char atomic_fetch_xor(
		_Atomic_schar *_Atom, signed char _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline signed char _Atomic_schar::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline signed char _Atomic_schar::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline signed char _Atomic_schar::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline signed char _Atomic_schar::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline signed char _Atomic_schar::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline signed char _Atomic_schar::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline signed char _Atomic_schar::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline signed char _Atomic_schar::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline signed char _Atomic_schar::operator+=(signed char _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline signed char _Atomic_schar::operator+=(signed char _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline signed char _Atomic_schar::operator-=(signed char _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline signed char _Atomic_schar::operator-=(signed char _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline signed char _Atomic_schar::operator&=(signed char _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline signed char _Atomic_schar::operator&=(signed char _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline signed char _Atomic_schar::operator|=(signed char _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline signed char _Atomic_schar::operator|=(signed char _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline signed char _Atomic_schar::operator^=(signed char _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline signed char _Atomic_schar::operator^=(signed char _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline signed char _Atomic_schar::fetch_add(
		signed char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_add(
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_sub(
		signed char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_sub(
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_and(
		signed char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_and(
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_or(
		signed char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_or(
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_xor(
		signed char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline signed char _Atomic_schar::fetch_xor(
		signed char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline signed char atomic_fetch_add(
		volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_add(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_add_explicit(
		volatile atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_add_explicit(
		atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_sub(
		volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_sub(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_sub_explicit(
		volatile atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_sub_explicit(
		atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_and(
		volatile atomic<signed char> *_Atom, signed char _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_and(
		atomic<signed char> *_Atom, signed char _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_and_explicit(
		volatile atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_and_explicit(
		atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_or(volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_or(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_or_explicit(
		volatile atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_or_explicit(
		atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_xor(volatile atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_xor(atomic<signed char> *_Atom,
		signed char _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_schar *>(_Atom), _Value));
	}

	template<>
	inline signed char atomic_fetch_xor_explicit(
		volatile atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_schar *>(_Atom), _Value, _Order));
	}

	template<>
	inline signed char atomic_fetch_xor_explicit(
		atomic<signed char> *_Atom, signed char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_schar *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(1 == sizeof(unsigned char),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_uchar
	{
		unsigned char operator=(unsigned char) volatile noexcept;
		unsigned char operator=(unsigned char) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(unsigned char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(unsigned char, memory_order = memory_order_seq_cst)
			noexcept;
		unsigned char load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		unsigned char load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator unsigned char() const volatile noexcept;
		operator unsigned char() const noexcept;
		unsigned char exchange(unsigned char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		unsigned char exchange(unsigned char,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(unsigned char&, unsigned char,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(unsigned char&, unsigned char,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(unsigned char&, unsigned char,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(unsigned char&, unsigned char,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(unsigned char&, unsigned char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(unsigned char&, unsigned char,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(unsigned char&, unsigned char,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(unsigned char&, unsigned char,
			memory_order = memory_order_seq_cst) noexcept;


		unsigned char operator++(int) volatile noexcept;
		unsigned char operator++(int) noexcept;
		unsigned char operator--(int) volatile noexcept;
		unsigned char operator--(int) noexcept;
		unsigned char operator++() volatile noexcept;
		unsigned char operator++() noexcept;
		unsigned char operator--() volatile noexcept;
		unsigned char operator--() noexcept;
		unsigned char operator+=(unsigned char) volatile noexcept;
		unsigned char operator+=(unsigned char) noexcept;
		unsigned char operator-=(unsigned char) volatile noexcept;
		unsigned char operator-=(unsigned char) noexcept;
		unsigned char operator&=(unsigned char) volatile noexcept;
		unsigned char operator&=(unsigned char) noexcept;
		unsigned char operator|=(unsigned char) volatile noexcept;
		unsigned char operator|=(unsigned char) noexcept;
		unsigned char operator^=(unsigned char) volatile noexcept;
		unsigned char operator^=(unsigned char) noexcept;

		unsigned char fetch_add(unsigned char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned char fetch_add(unsigned char, memory_order = memory_order_seq_cst) noexcept;
		unsigned char fetch_sub(unsigned char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned char fetch_sub(unsigned char, memory_order = memory_order_seq_cst) noexcept;
		unsigned char fetch_and(unsigned char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned char fetch_and(unsigned char, memory_order = memory_order_seq_cst) noexcept;
		unsigned char fetch_or(unsigned char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned char fetch_or(unsigned char, memory_order = memory_order_seq_cst) noexcept;
		unsigned char fetch_xor(unsigned char, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned char fetch_xor(unsigned char, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint1_t)) _Uint1_t _My_val;




	} _Atomic_uchar;



	template<>
	struct atomic<unsigned char>
		: _Atomic_uchar
	{

		atomic() noexcept = default;

		constexpr atomic(unsigned char _Val) noexcept
			: _Atomic_uchar{ (_Uint1_t)_Val }
		{
		}

		unsigned char operator=(unsigned char _Val) volatile noexcept
		{
			return (_Atomic_uchar::operator=(_Val));
		}

		unsigned char operator=(unsigned char _Val) noexcept
		{
			return (_Atomic_uchar::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_uchar *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const _Atomic_uchar *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}


	inline bool atomic_is_lock_free(const volatile atomic<unsigned char> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}

	inline bool atomic_is_lock_free(const atomic<unsigned char> *) noexcept
	{
		return (_Atomic_is_lock_free_1());
	}



	inline void atomic_init(volatile _Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(_Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_init(volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}

	inline void atomic_init(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		_Atom->_My_val = (_Uint1_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline unsigned char atomic_load_explicit(
		const volatile _Atomic_uchar *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned char atomic_load_explicit(
		const _Atomic_uchar *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_load_1((_Uint1_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned char atomic_load(
		const volatile _Atomic_uchar *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned char atomic_load(
		const _Atomic_uchar *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned char atomic_exchange_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_exchange_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_exchange_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_exchange(volatile _Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_exchange(_Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_uchar *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_uchar *_Atom, unsigned char *_Exp,
		unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_uchar *_Atom, unsigned char *_Exp,
		unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_uchar *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t*)_Exp, (_Uint1_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_uchar *_Atom, unsigned char *_Exp, unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_uchar *_Atom, unsigned char *_Exp, unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline unsigned char _Atomic_uchar::operator=(unsigned char _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline unsigned char _Atomic_uchar::operator=(unsigned char _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_uchar::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_uchar::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_uchar::store(unsigned char _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_uchar::store(unsigned char _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline unsigned char _Atomic_uchar::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline unsigned char _Atomic_uchar::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_uchar::operator unsigned char() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_uchar::operator unsigned char() const noexcept
	{
		return (atomic_load(this));
	}

	inline unsigned char _Atomic_uchar::exchange(
		unsigned char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::exchange(
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_uchar::compare_exchange_weak(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uchar::compare_exchange_weak(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uchar::compare_exchange_weak(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_uchar::compare_exchange_weak(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_uchar::compare_exchange_strong(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uchar::compare_exchange_strong(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uchar::compare_exchange_strong(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_uchar::compare_exchange_strong(
		unsigned char& _Exp, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<unsigned char> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_uchar *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<unsigned char> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_uchar *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_uchar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_uchar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_uchar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_uchar *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<unsigned char> *_Atom,
		unsigned char _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_uchar *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<unsigned char> *_Atom,
		unsigned char _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_uchar *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline unsigned char atomic_load(const volatile atomic<unsigned char> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_uchar *>(_Atom)));
	}

	template<>
	inline unsigned char atomic_load(const atomic<unsigned char> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_uchar *>(_Atom)));
	}

	template<>
	inline unsigned char atomic_load_explicit(
		const volatile atomic<unsigned char> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_uchar *>(_Atom), _Order));
	}

	template<>
	inline unsigned char atomic_load_explicit(
		const atomic<unsigned char> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_uchar *>(_Atom), _Order));
	}

	template<>
	inline unsigned char atomic_exchange(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_exchange(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_exchange_explicit(
		volatile atomic<unsigned char> *_Atom,
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_exchange_explicit(atomic<unsigned char> *_Atom,
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_uchar *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<unsigned char> *_Atom, unsigned char *_Exp,
		unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<unsigned char> *_Atom, unsigned char *_Exp,
		unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_uchar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<unsigned char> *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<unsigned char> *_Atom, unsigned char *_Exp,
		unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<unsigned char> *_Atom, unsigned char *_Exp,
		unsigned char _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_uchar *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<unsigned char> *_Atom, unsigned char *_Exp, unsigned char _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline unsigned char atomic_fetch_add_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_add_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_add_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_add_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_add(volatile _Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_add(_Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_sub_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_sub_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_sub_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_sub_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_sub(volatile _Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_sub(_Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_and_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_and_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_and_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_and_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_and(volatile _Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_and(_Atomic_uchar *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_or_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_or_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_or_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_or_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_or(
		volatile _Atomic_uchar *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_or(
		_Atomic_uchar *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_xor_explicit(
		volatile _Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_xor_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_xor_explicit(
		_Atomic_uchar *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned char)_Atomic_fetch_xor_1((_Uint1_t*)&_Atom->_My_val, (_Uint1_t)_Value, _Order));
	}

	inline unsigned char atomic_fetch_xor(
		volatile _Atomic_uchar *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned char atomic_fetch_xor(
		_Atomic_uchar *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline unsigned char _Atomic_uchar::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned char _Atomic_uchar::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned char _Atomic_uchar::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned char _Atomic_uchar::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned char _Atomic_uchar::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned char _Atomic_uchar::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned char _Atomic_uchar::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned char _Atomic_uchar::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned char _Atomic_uchar::operator+=(unsigned char _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned char _Atomic_uchar::operator+=(unsigned char _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned char _Atomic_uchar::operator-=(unsigned char _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned char _Atomic_uchar::operator-=(unsigned char _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned char _Atomic_uchar::operator&=(unsigned char _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned char _Atomic_uchar::operator&=(unsigned char _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned char _Atomic_uchar::operator|=(unsigned char _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned char _Atomic_uchar::operator|=(unsigned char _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned char _Atomic_uchar::operator^=(unsigned char _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned char _Atomic_uchar::operator^=(unsigned char _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned char _Atomic_uchar::fetch_add(
		unsigned char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_add(
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_sub(
		unsigned char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_sub(
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_and(
		unsigned char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_and(
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_or(
		unsigned char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_or(
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_xor(
		unsigned char _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline unsigned char _Atomic_uchar::fetch_xor(
		unsigned char _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline unsigned char atomic_fetch_add(
		volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_add(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_add_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_add_explicit(
		atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_sub(
		volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_sub(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_sub_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_sub_explicit(
		atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_and(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_and(
		atomic<unsigned char> *_Atom, unsigned char _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_and_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_and_explicit(
		atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_or(volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_or(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_or_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_or_explicit(
		atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_xor(volatile atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_xor(atomic<unsigned char> *_Atom,
		unsigned char _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_uchar *>(_Atom), _Value));
	}

	template<>
	inline unsigned char atomic_fetch_xor_explicit(
		volatile atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_uchar *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned char atomic_fetch_xor_explicit(
		atomic<unsigned char> *_Atom, unsigned char _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_uchar *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(2 == sizeof(char16_t),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_char16_t
	{
		char16_t operator=(char16_t) volatile noexcept;
		char16_t operator=(char16_t) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(char16_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(char16_t, memory_order = memory_order_seq_cst)
			noexcept;
		char16_t load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		char16_t load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator char16_t() const volatile noexcept;
		operator char16_t() const noexcept;
		char16_t exchange(char16_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		char16_t exchange(char16_t,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(char16_t&, char16_t,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(char16_t&, char16_t,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(char16_t&, char16_t,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(char16_t&, char16_t,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(char16_t&, char16_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(char16_t&, char16_t,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(char16_t&, char16_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(char16_t&, char16_t,
			memory_order = memory_order_seq_cst) noexcept;


		char16_t operator++(int) volatile noexcept;
		char16_t operator++(int) noexcept;
		char16_t operator--(int) volatile noexcept;
		char16_t operator--(int) noexcept;
		char16_t operator++() volatile noexcept;
		char16_t operator++() noexcept;
		char16_t operator--() volatile noexcept;
		char16_t operator--() noexcept;
		char16_t operator+=(char16_t) volatile noexcept;
		char16_t operator+=(char16_t) noexcept;
		char16_t operator-=(char16_t) volatile noexcept;
		char16_t operator-=(char16_t) noexcept;
		char16_t operator&=(char16_t) volatile noexcept;
		char16_t operator&=(char16_t) noexcept;
		char16_t operator|=(char16_t) volatile noexcept;
		char16_t operator|=(char16_t) noexcept;
		char16_t operator^=(char16_t) volatile noexcept;
		char16_t operator^=(char16_t) noexcept;

		char16_t fetch_add(char16_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char16_t fetch_add(char16_t, memory_order = memory_order_seq_cst) noexcept;
		char16_t fetch_sub(char16_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char16_t fetch_sub(char16_t, memory_order = memory_order_seq_cst) noexcept;
		char16_t fetch_and(char16_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char16_t fetch_and(char16_t, memory_order = memory_order_seq_cst) noexcept;
		char16_t fetch_or(char16_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char16_t fetch_or(char16_t, memory_order = memory_order_seq_cst) noexcept;
		char16_t fetch_xor(char16_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char16_t fetch_xor(char16_t, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint2_t)) _Uint2_t _My_val;




	} _Atomic_char16_t;



	template<>
	struct atomic<char16_t>
		: _Atomic_char16_t
	{

		atomic() noexcept = default;

		constexpr atomic(char16_t _Val) noexcept
			: _Atomic_char16_t{ (_Uint2_t)_Val }
		{
		}

		char16_t operator=(char16_t _Val) volatile noexcept
		{
			return (_Atomic_char16_t::operator=(_Val));
		}

		char16_t operator=(char16_t _Val) noexcept
		{
			return (_Atomic_char16_t::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_char16_t *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const _Atomic_char16_t *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}


	inline bool atomic_is_lock_free(const volatile atomic<char16_t> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const atomic<char16_t> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}



	inline void atomic_init(volatile _Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(_Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_init(volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline char16_t atomic_load_explicit(
		const volatile _Atomic_char16_t *_Atom, memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline char16_t atomic_load_explicit(
		const _Atomic_char16_t *_Atom, memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline char16_t atomic_load(
		const volatile _Atomic_char16_t *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline char16_t atomic_load(
		const _Atomic_char16_t *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline char16_t atomic_exchange_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_exchange_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_exchange(volatile _Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_exchange(_Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_char16_t *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_char16_t *_Atom, char16_t *_Exp,
		char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_char16_t *_Atom, char16_t *_Exp,
		char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_char16_t *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_char16_t *_Atom, char16_t *_Exp, char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_char16_t *_Atom, char16_t *_Exp, char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline char16_t _Atomic_char16_t::operator=(char16_t _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline char16_t _Atomic_char16_t::operator=(char16_t _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_char16_t::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_char16_t::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_char16_t::store(char16_t _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_char16_t::store(char16_t _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline char16_t _Atomic_char16_t::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline char16_t _Atomic_char16_t::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_char16_t::operator char16_t() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_char16_t::operator char16_t() const noexcept
	{
		return (atomic_load(this));
	}

	inline char16_t _Atomic_char16_t::exchange(
		char16_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::exchange(
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_char16_t::compare_exchange_weak(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char16_t::compare_exchange_weak(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char16_t::compare_exchange_weak(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char16_t::compare_exchange_weak(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char16_t::compare_exchange_strong(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char16_t::compare_exchange_strong(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char16_t::compare_exchange_strong(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char16_t::compare_exchange_strong(
		char16_t& _Exp, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<char16_t> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_char16_t *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<char16_t> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_char16_t *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_char16_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_char16_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_char16_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_char16_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<char16_t> *_Atom,
		char16_t _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_char16_t *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<char16_t> *_Atom,
		char16_t _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_char16_t *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline char16_t atomic_load(const volatile atomic<char16_t> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_char16_t *>(_Atom)));
	}

	template<>
	inline char16_t atomic_load(const atomic<char16_t> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_char16_t *>(_Atom)));
	}

	template<>
	inline char16_t atomic_load_explicit(
		const volatile atomic<char16_t> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_char16_t *>(_Atom), _Order));
	}

	template<>
	inline char16_t atomic_load_explicit(
		const atomic<char16_t> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_char16_t *>(_Atom), _Order));
	}

	template<>
	inline char16_t atomic_exchange(
		volatile atomic<char16_t> *_Atom, char16_t _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_exchange(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_exchange_explicit(
		volatile atomic<char16_t> *_Atom,
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_exchange_explicit(atomic<char16_t> *_Atom,
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_char16_t *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<char16_t> *_Atom, char16_t *_Exp,
		char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<char16_t> *_Atom, char16_t *_Exp,
		char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_char16_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<char16_t> *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<char16_t> *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<char16_t> *_Atom, char16_t *_Exp,
		char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<char16_t> *_Atom, char16_t *_Exp,
		char16_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_char16_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<char16_t> *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<char16_t> *_Atom, char16_t *_Exp, char16_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline char16_t atomic_fetch_add_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_add_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_add(volatile _Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_add(_Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_sub_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_sub_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_sub(volatile _Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_sub(_Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_and_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_and_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_and(volatile _Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_and(_Atomic_char16_t *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_or_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_or_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_or(
		volatile _Atomic_char16_t *_Atom, char16_t _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_or(
		_Atomic_char16_t *_Atom, char16_t _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_xor_explicit(
		volatile _Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_xor_explicit(
		_Atomic_char16_t *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return ((char16_t)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline char16_t atomic_fetch_xor(
		volatile _Atomic_char16_t *_Atom, char16_t _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char16_t atomic_fetch_xor(
		_Atomic_char16_t *_Atom, char16_t _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline char16_t _Atomic_char16_t::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline char16_t _Atomic_char16_t::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline char16_t _Atomic_char16_t::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline char16_t _Atomic_char16_t::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline char16_t _Atomic_char16_t::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline char16_t _Atomic_char16_t::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline char16_t _Atomic_char16_t::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline char16_t _Atomic_char16_t::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline char16_t _Atomic_char16_t::operator+=(char16_t _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline char16_t _Atomic_char16_t::operator+=(char16_t _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline char16_t _Atomic_char16_t::operator-=(char16_t _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline char16_t _Atomic_char16_t::operator-=(char16_t _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline char16_t _Atomic_char16_t::operator&=(char16_t _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline char16_t _Atomic_char16_t::operator&=(char16_t _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline char16_t _Atomic_char16_t::operator|=(char16_t _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline char16_t _Atomic_char16_t::operator|=(char16_t _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline char16_t _Atomic_char16_t::operator^=(char16_t _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline char16_t _Atomic_char16_t::operator^=(char16_t _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline char16_t _Atomic_char16_t::fetch_add(
		char16_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_add(
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_sub(
		char16_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_sub(
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_and(
		char16_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_and(
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_or(
		char16_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_or(
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_xor(
		char16_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline char16_t _Atomic_char16_t::fetch_xor(
		char16_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline char16_t atomic_fetch_add(
		volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_add(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_add_explicit(
		volatile atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_add_explicit(
		atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_sub(
		volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_sub(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_sub_explicit(
		volatile atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_sub_explicit(
		atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_and(
		volatile atomic<char16_t> *_Atom, char16_t _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_and(
		atomic<char16_t> *_Atom, char16_t _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_and_explicit(
		volatile atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_and_explicit(
		atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_or(volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_or(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_or_explicit(
		volatile atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_or_explicit(
		atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_xor(volatile atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_xor(atomic<char16_t> *_Atom,
		char16_t _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_char16_t *>(_Atom), _Value));
	}

	template<>
	inline char16_t atomic_fetch_xor_explicit(
		volatile atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_char16_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char16_t atomic_fetch_xor_explicit(
		atomic<char16_t> *_Atom, char16_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_char16_t *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(4 == sizeof(char32_t),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_char32_t
	{
		char32_t operator=(char32_t) volatile noexcept;
		char32_t operator=(char32_t) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(char32_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(char32_t, memory_order = memory_order_seq_cst)
			noexcept;
		char32_t load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		char32_t load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator char32_t() const volatile noexcept;
		operator char32_t() const noexcept;
		char32_t exchange(char32_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		char32_t exchange(char32_t,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(char32_t&, char32_t,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(char32_t&, char32_t,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(char32_t&, char32_t,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(char32_t&, char32_t,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(char32_t&, char32_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(char32_t&, char32_t,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(char32_t&, char32_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(char32_t&, char32_t,
			memory_order = memory_order_seq_cst) noexcept;


		char32_t operator++(int) volatile noexcept;
		char32_t operator++(int) noexcept;
		char32_t operator--(int) volatile noexcept;
		char32_t operator--(int) noexcept;
		char32_t operator++() volatile noexcept;
		char32_t operator++() noexcept;
		char32_t operator--() volatile noexcept;
		char32_t operator--() noexcept;
		char32_t operator+=(char32_t) volatile noexcept;
		char32_t operator+=(char32_t) noexcept;
		char32_t operator-=(char32_t) volatile noexcept;
		char32_t operator-=(char32_t) noexcept;
		char32_t operator&=(char32_t) volatile noexcept;
		char32_t operator&=(char32_t) noexcept;
		char32_t operator|=(char32_t) volatile noexcept;
		char32_t operator|=(char32_t) noexcept;
		char32_t operator^=(char32_t) volatile noexcept;
		char32_t operator^=(char32_t) noexcept;

		char32_t fetch_add(char32_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char32_t fetch_add(char32_t, memory_order = memory_order_seq_cst) noexcept;
		char32_t fetch_sub(char32_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char32_t fetch_sub(char32_t, memory_order = memory_order_seq_cst) noexcept;
		char32_t fetch_and(char32_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char32_t fetch_and(char32_t, memory_order = memory_order_seq_cst) noexcept;
		char32_t fetch_or(char32_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char32_t fetch_or(char32_t, memory_order = memory_order_seq_cst) noexcept;
		char32_t fetch_xor(char32_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		char32_t fetch_xor(char32_t, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint4_t)) _Uint4_t _My_val;




	} _Atomic_char32_t;



	template<>
	struct atomic<char32_t>
		: _Atomic_char32_t
	{

		atomic() noexcept = default;

		constexpr atomic(char32_t _Val) noexcept
			: _Atomic_char32_t{ (_Uint4_t)_Val }
		{
		}

		char32_t operator=(char32_t _Val) volatile noexcept
		{
			return (_Atomic_char32_t::operator=(_Val));
		}

		char32_t operator=(char32_t _Val) noexcept
		{
			return (_Atomic_char32_t::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_char32_t *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const _Atomic_char32_t *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}


	inline bool atomic_is_lock_free(const volatile atomic<char32_t> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const atomic<char32_t> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}



	inline void atomic_init(volatile _Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(_Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_init(volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline char32_t atomic_load_explicit(
		const volatile _Atomic_char32_t *_Atom, memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline char32_t atomic_load_explicit(
		const _Atomic_char32_t *_Atom, memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline char32_t atomic_load(
		const volatile _Atomic_char32_t *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline char32_t atomic_load(
		const _Atomic_char32_t *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline char32_t atomic_exchange_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_exchange_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_exchange(volatile _Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_exchange(_Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_char32_t *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_char32_t *_Atom, char32_t *_Exp,
		char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_char32_t *_Atom, char32_t *_Exp,
		char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_char32_t *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_char32_t *_Atom, char32_t *_Exp, char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_char32_t *_Atom, char32_t *_Exp, char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline char32_t _Atomic_char32_t::operator=(char32_t _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline char32_t _Atomic_char32_t::operator=(char32_t _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_char32_t::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_char32_t::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_char32_t::store(char32_t _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_char32_t::store(char32_t _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline char32_t _Atomic_char32_t::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline char32_t _Atomic_char32_t::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_char32_t::operator char32_t() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_char32_t::operator char32_t() const noexcept
	{
		return (atomic_load(this));
	}

	inline char32_t _Atomic_char32_t::exchange(
		char32_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::exchange(
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_char32_t::compare_exchange_weak(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char32_t::compare_exchange_weak(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char32_t::compare_exchange_weak(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char32_t::compare_exchange_weak(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char32_t::compare_exchange_strong(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char32_t::compare_exchange_strong(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_char32_t::compare_exchange_strong(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_char32_t::compare_exchange_strong(
		char32_t& _Exp, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<char32_t> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_char32_t *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<char32_t> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_char32_t *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_char32_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_char32_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_char32_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_char32_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<char32_t> *_Atom,
		char32_t _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_char32_t *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<char32_t> *_Atom,
		char32_t _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_char32_t *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline char32_t atomic_load(const volatile atomic<char32_t> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_char32_t *>(_Atom)));
	}

	template<>
	inline char32_t atomic_load(const atomic<char32_t> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_char32_t *>(_Atom)));
	}

	template<>
	inline char32_t atomic_load_explicit(
		const volatile atomic<char32_t> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_char32_t *>(_Atom), _Order));
	}

	template<>
	inline char32_t atomic_load_explicit(
		const atomic<char32_t> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_char32_t *>(_Atom), _Order));
	}

	template<>
	inline char32_t atomic_exchange(
		volatile atomic<char32_t> *_Atom, char32_t _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_exchange(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_exchange_explicit(
		volatile atomic<char32_t> *_Atom,
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_exchange_explicit(atomic<char32_t> *_Atom,
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_char32_t *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<char32_t> *_Atom, char32_t *_Exp,
		char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<char32_t> *_Atom, char32_t *_Exp,
		char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_char32_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<char32_t> *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<char32_t> *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<char32_t> *_Atom, char32_t *_Exp,
		char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<char32_t> *_Atom, char32_t *_Exp,
		char32_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_char32_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<char32_t> *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<char32_t> *_Atom, char32_t *_Exp, char32_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline char32_t atomic_fetch_add_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_add_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_add(volatile _Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_add(_Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_sub_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_sub_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_sub(volatile _Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_sub(_Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_and_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_and_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_and(volatile _Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_and(_Atomic_char32_t *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_or_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_or_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_or(
		volatile _Atomic_char32_t *_Atom, char32_t _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_or(
		_Atomic_char32_t *_Atom, char32_t _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_xor_explicit(
		volatile _Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_xor_explicit(
		_Atomic_char32_t *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return ((char32_t)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline char32_t atomic_fetch_xor(
		volatile _Atomic_char32_t *_Atom, char32_t _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline char32_t atomic_fetch_xor(
		_Atomic_char32_t *_Atom, char32_t _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline char32_t _Atomic_char32_t::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline char32_t _Atomic_char32_t::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline char32_t _Atomic_char32_t::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline char32_t _Atomic_char32_t::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline char32_t _Atomic_char32_t::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline char32_t _Atomic_char32_t::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline char32_t _Atomic_char32_t::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline char32_t _Atomic_char32_t::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline char32_t _Atomic_char32_t::operator+=(char32_t _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline char32_t _Atomic_char32_t::operator+=(char32_t _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline char32_t _Atomic_char32_t::operator-=(char32_t _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline char32_t _Atomic_char32_t::operator-=(char32_t _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline char32_t _Atomic_char32_t::operator&=(char32_t _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline char32_t _Atomic_char32_t::operator&=(char32_t _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline char32_t _Atomic_char32_t::operator|=(char32_t _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline char32_t _Atomic_char32_t::operator|=(char32_t _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline char32_t _Atomic_char32_t::operator^=(char32_t _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline char32_t _Atomic_char32_t::operator^=(char32_t _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline char32_t _Atomic_char32_t::fetch_add(
		char32_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_add(
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_sub(
		char32_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_sub(
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_and(
		char32_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_and(
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_or(
		char32_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_or(
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_xor(
		char32_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline char32_t _Atomic_char32_t::fetch_xor(
		char32_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline char32_t atomic_fetch_add(
		volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_add(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_add_explicit(
		volatile atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_add_explicit(
		atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_sub(
		volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_sub(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_sub_explicit(
		volatile atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_sub_explicit(
		atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_and(
		volatile atomic<char32_t> *_Atom, char32_t _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_and(
		atomic<char32_t> *_Atom, char32_t _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_and_explicit(
		volatile atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_and_explicit(
		atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_or(volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_or(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_or_explicit(
		volatile atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_or_explicit(
		atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_xor(volatile atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_xor(atomic<char32_t> *_Atom,
		char32_t _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_char32_t *>(_Atom), _Value));
	}

	template<>
	inline char32_t atomic_fetch_xor_explicit(
		volatile atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_char32_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline char32_t atomic_fetch_xor_explicit(
		atomic<char32_t> *_Atom, char32_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_char32_t *>(_Atom), _Value, _Order));
	}
























































































































































	static_assert(2 == sizeof(wchar_t),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_wchar_t
	{
		wchar_t operator=(wchar_t) volatile noexcept;
		wchar_t operator=(wchar_t) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(wchar_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(wchar_t, memory_order = memory_order_seq_cst)
			noexcept;
		wchar_t load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		wchar_t load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator wchar_t() const volatile noexcept;
		operator wchar_t() const noexcept;
		wchar_t exchange(wchar_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		wchar_t exchange(wchar_t,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(wchar_t&, wchar_t,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(wchar_t&, wchar_t,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(wchar_t&, wchar_t,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(wchar_t&, wchar_t,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(wchar_t&, wchar_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(wchar_t&, wchar_t,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(wchar_t&, wchar_t,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(wchar_t&, wchar_t,
			memory_order = memory_order_seq_cst) noexcept;


		wchar_t operator++(int) volatile noexcept;
		wchar_t operator++(int) noexcept;
		wchar_t operator--(int) volatile noexcept;
		wchar_t operator--(int) noexcept;
		wchar_t operator++() volatile noexcept;
		wchar_t operator++() noexcept;
		wchar_t operator--() volatile noexcept;
		wchar_t operator--() noexcept;
		wchar_t operator+=(wchar_t) volatile noexcept;
		wchar_t operator+=(wchar_t) noexcept;
		wchar_t operator-=(wchar_t) volatile noexcept;
		wchar_t operator-=(wchar_t) noexcept;
		wchar_t operator&=(wchar_t) volatile noexcept;
		wchar_t operator&=(wchar_t) noexcept;
		wchar_t operator|=(wchar_t) volatile noexcept;
		wchar_t operator|=(wchar_t) noexcept;
		wchar_t operator^=(wchar_t) volatile noexcept;
		wchar_t operator^=(wchar_t) noexcept;

		wchar_t fetch_add(wchar_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		wchar_t fetch_add(wchar_t, memory_order = memory_order_seq_cst) noexcept;
		wchar_t fetch_sub(wchar_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		wchar_t fetch_sub(wchar_t, memory_order = memory_order_seq_cst) noexcept;
		wchar_t fetch_and(wchar_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		wchar_t fetch_and(wchar_t, memory_order = memory_order_seq_cst) noexcept;
		wchar_t fetch_or(wchar_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		wchar_t fetch_or(wchar_t, memory_order = memory_order_seq_cst) noexcept;
		wchar_t fetch_xor(wchar_t, memory_order = memory_order_seq_cst)
			volatile noexcept;
		wchar_t fetch_xor(wchar_t, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint2_t)) _Uint2_t _My_val;




	} _Atomic_wchar_t;



	template<>
	struct atomic<wchar_t>
		: _Atomic_wchar_t
	{

		atomic() noexcept = default;

		constexpr atomic(wchar_t _Val) noexcept
			: _Atomic_wchar_t{ (_Uint2_t)_Val }
		{
		}

		wchar_t operator=(wchar_t _Val) volatile noexcept
		{
			return (_Atomic_wchar_t::operator=(_Val));
		}

		wchar_t operator=(wchar_t _Val) noexcept
		{
			return (_Atomic_wchar_t::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_wchar_t *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const _Atomic_wchar_t *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}


	inline bool atomic_is_lock_free(const volatile atomic<wchar_t> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const atomic<wchar_t> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}



	inline void atomic_init(volatile _Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(_Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_init(volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline wchar_t atomic_load_explicit(
		const volatile _Atomic_wchar_t *_Atom, memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline wchar_t atomic_load_explicit(
		const _Atomic_wchar_t *_Atom, memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline wchar_t atomic_load(
		const volatile _Atomic_wchar_t *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline wchar_t atomic_load(
		const _Atomic_wchar_t *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline wchar_t atomic_exchange_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_exchange_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_exchange(volatile _Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_exchange(_Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_wchar_t *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_wchar_t *_Atom, wchar_t *_Exp,
		wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_wchar_t *_Atom, wchar_t *_Exp,
		wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_wchar_t *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_wchar_t *_Atom, wchar_t *_Exp, wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_wchar_t *_Atom, wchar_t *_Exp, wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline wchar_t _Atomic_wchar_t::operator=(wchar_t _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline wchar_t _Atomic_wchar_t::operator=(wchar_t _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_wchar_t::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_wchar_t::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_wchar_t::store(wchar_t _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_wchar_t::store(wchar_t _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline wchar_t _Atomic_wchar_t::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline wchar_t _Atomic_wchar_t::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_wchar_t::operator wchar_t() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_wchar_t::operator wchar_t() const noexcept
	{
		return (atomic_load(this));
	}

	inline wchar_t _Atomic_wchar_t::exchange(
		wchar_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::exchange(
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_wchar_t::compare_exchange_weak(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_wchar_t::compare_exchange_weak(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_wchar_t::compare_exchange_weak(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_wchar_t::compare_exchange_weak(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_wchar_t::compare_exchange_strong(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_wchar_t::compare_exchange_strong(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_wchar_t::compare_exchange_strong(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_wchar_t::compare_exchange_strong(
		wchar_t& _Exp, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<wchar_t> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_wchar_t *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<wchar_t> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_wchar_t *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_wchar_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_wchar_t *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<wchar_t> *_Atom,
		wchar_t _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_wchar_t *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<wchar_t> *_Atom,
		wchar_t _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_wchar_t *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline wchar_t atomic_load(const volatile atomic<wchar_t> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_wchar_t *>(_Atom)));
	}

	template<>
	inline wchar_t atomic_load(const atomic<wchar_t> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_wchar_t *>(_Atom)));
	}

	template<>
	inline wchar_t atomic_load_explicit(
		const volatile atomic<wchar_t> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_wchar_t *>(_Atom), _Order));
	}

	template<>
	inline wchar_t atomic_load_explicit(
		const atomic<wchar_t> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_wchar_t *>(_Atom), _Order));
	}

	template<>
	inline wchar_t atomic_exchange(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_exchange(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_exchange_explicit(
		volatile atomic<wchar_t> *_Atom,
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_exchange_explicit(atomic<wchar_t> *_Atom,
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_wchar_t *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<wchar_t> *_Atom, wchar_t *_Exp,
		wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<wchar_t> *_Atom, wchar_t *_Exp,
		wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_wchar_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<wchar_t> *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<wchar_t> *_Atom, wchar_t *_Exp,
		wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<wchar_t> *_Atom, wchar_t *_Exp,
		wchar_t _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_wchar_t *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<wchar_t> *_Atom, wchar_t *_Exp, wchar_t _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline wchar_t atomic_fetch_add_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_add_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_add(volatile _Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_add(_Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_sub_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_sub_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_sub(volatile _Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_sub(_Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_and_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_and_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_and(volatile _Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_and(_Atomic_wchar_t *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_or_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_or_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_or(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_or(
		_Atomic_wchar_t *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_xor_explicit(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_xor_explicit(
		_Atomic_wchar_t *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return ((wchar_t)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline wchar_t atomic_fetch_xor(
		volatile _Atomic_wchar_t *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline wchar_t atomic_fetch_xor(
		_Atomic_wchar_t *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline wchar_t _Atomic_wchar_t::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline wchar_t _Atomic_wchar_t::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline wchar_t _Atomic_wchar_t::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline wchar_t _Atomic_wchar_t::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline wchar_t _Atomic_wchar_t::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline wchar_t _Atomic_wchar_t::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline wchar_t _Atomic_wchar_t::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline wchar_t _Atomic_wchar_t::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline wchar_t _Atomic_wchar_t::operator+=(wchar_t _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator+=(wchar_t _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator-=(wchar_t _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator-=(wchar_t _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator&=(wchar_t _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator&=(wchar_t _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator|=(wchar_t _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator|=(wchar_t _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator^=(wchar_t _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline wchar_t _Atomic_wchar_t::operator^=(wchar_t _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline wchar_t _Atomic_wchar_t::fetch_add(
		wchar_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_add(
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_sub(
		wchar_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_sub(
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_and(
		wchar_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_and(
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_or(
		wchar_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_or(
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_xor(
		wchar_t _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline wchar_t _Atomic_wchar_t::fetch_xor(
		wchar_t _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline wchar_t atomic_fetch_add(
		volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_add(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_add_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_add_explicit(
		atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_sub(
		volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_sub(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_sub_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_sub_explicit(
		atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_and(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_and(
		atomic<wchar_t> *_Atom, wchar_t _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_and_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_and_explicit(
		atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_or(volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_or(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_or_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_or_explicit(
		atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_xor(volatile atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_xor(atomic<wchar_t> *_Atom,
		wchar_t _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_wchar_t *>(_Atom), _Value));
	}

	template<>
	inline wchar_t atomic_fetch_xor_explicit(
		volatile atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_wchar_t *>(_Atom), _Value, _Order));
	}

	template<>
	inline wchar_t atomic_fetch_xor_explicit(
		atomic<wchar_t> *_Atom, wchar_t _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_wchar_t *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(2 == sizeof(short),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_short
	{
		short operator=(short) volatile noexcept;
		short operator=(short) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(short, memory_order = memory_order_seq_cst)
			noexcept;
		short load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		short load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator short() const volatile noexcept;
		operator short() const noexcept;
		short exchange(short,
			memory_order = memory_order_seq_cst) volatile noexcept;
		short exchange(short,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(short&, short,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(short&, short,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(short&, short,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(short&, short,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(short&, short,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(short&, short,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(short&, short,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(short&, short,
			memory_order = memory_order_seq_cst) noexcept;


		short operator++(int) volatile noexcept;
		short operator++(int) noexcept;
		short operator--(int) volatile noexcept;
		short operator--(int) noexcept;
		short operator++() volatile noexcept;
		short operator++() noexcept;
		short operator--() volatile noexcept;
		short operator--() noexcept;
		short operator+=(short) volatile noexcept;
		short operator+=(short) noexcept;
		short operator-=(short) volatile noexcept;
		short operator-=(short) noexcept;
		short operator&=(short) volatile noexcept;
		short operator&=(short) noexcept;
		short operator|=(short) volatile noexcept;
		short operator|=(short) noexcept;
		short operator^=(short) volatile noexcept;
		short operator^=(short) noexcept;

		short fetch_add(short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		short fetch_add(short, memory_order = memory_order_seq_cst) noexcept;
		short fetch_sub(short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		short fetch_sub(short, memory_order = memory_order_seq_cst) noexcept;
		short fetch_and(short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		short fetch_and(short, memory_order = memory_order_seq_cst) noexcept;
		short fetch_or(short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		short fetch_or(short, memory_order = memory_order_seq_cst) noexcept;
		short fetch_xor(short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		short fetch_xor(short, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint2_t)) _Uint2_t _My_val;




	} _Atomic_short;



	template<>
	struct atomic<short>
		: _Atomic_short
	{

		atomic() noexcept = default;

		constexpr atomic(short _Val) noexcept
			: _Atomic_short{ (_Uint2_t)_Val }
		{
		}

		short operator=(short _Val) volatile noexcept
		{
			return (_Atomic_short::operator=(_Val));
		}

		short operator=(short _Val) noexcept
		{
			return (_Atomic_short::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_short *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const _Atomic_short *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}


	inline bool atomic_is_lock_free(const volatile atomic<short> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const atomic<short> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}



	inline void atomic_init(volatile _Atomic_short *_Atom,
		short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(_Atomic_short *_Atom,
		short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_init(volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(atomic<short> *_Atom,
		short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_short *_Atom,
		short _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_short *_Atom,
		short _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline short atomic_load_explicit(
		const volatile _Atomic_short *_Atom, memory_order _Order) noexcept
	{
		return ((short)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline short atomic_load_explicit(
		const _Atomic_short *_Atom, memory_order _Order) noexcept
	{
		return ((short)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline short atomic_load(
		const volatile _Atomic_short *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline short atomic_load(
		const _Atomic_short *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline short atomic_exchange_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_exchange_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_exchange(volatile _Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_exchange(_Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_short *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_short *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_short *_Atom, short *_Exp,
		short _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_short *_Atom, short *_Exp,
		short _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_short *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_short *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_short *_Atom, short *_Exp, short _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_short *_Atom, short *_Exp, short _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline short _Atomic_short::operator=(short _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline short _Atomic_short::operator=(short _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_short::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_short::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_short::store(short _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_short::store(short _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline short _Atomic_short::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline short _Atomic_short::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_short::operator short() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_short::operator short() const noexcept
	{
		return (atomic_load(this));
	}

	inline short _Atomic_short::exchange(
		short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::exchange(
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_short::compare_exchange_weak(
		short& _Exp, short _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_short::compare_exchange_weak(
		short& _Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_short::compare_exchange_weak(
		short& _Exp, short _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_short::compare_exchange_weak(
		short& _Exp, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_short::compare_exchange_strong(
		short& _Exp, short _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_short::compare_exchange_strong(
		short& _Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_short::compare_exchange_strong(
		short& _Exp, short _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_short::compare_exchange_strong(
		short& _Exp, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<short> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_short *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<short> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_short *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_short *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<short> *_Atom,
		short _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_short *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_short *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<short> *_Atom,
		short _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_short *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<short> *_Atom,
		short _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_short *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<short> *_Atom,
		short _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_short *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline short atomic_load(const volatile atomic<short> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_short *>(_Atom)));
	}

	template<>
	inline short atomic_load(const atomic<short> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_short *>(_Atom)));
	}

	template<>
	inline short atomic_load_explicit(
		const volatile atomic<short> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_short *>(_Atom), _Order));
	}

	template<>
	inline short atomic_load_explicit(
		const atomic<short> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_short *>(_Atom), _Order));
	}

	template<>
	inline short atomic_exchange(
		volatile atomic<short> *_Atom, short _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_exchange(atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_exchange_explicit(
		volatile atomic<short> *_Atom,
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_exchange_explicit(atomic<short> *_Atom,
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_short *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<short> *_Atom, short *_Exp,
		short _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_short *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<short> *_Atom, short *_Exp,
		short _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_short *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<short> *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<short> *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_short *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<short> *_Atom, short *_Exp,
		short _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_short *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<short> *_Atom, short *_Exp,
		short _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_short *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<short> *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<short> *_Atom, short *_Exp, short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_short *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline short atomic_fetch_add_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_add_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_add(volatile _Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_add(_Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_sub_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_sub_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_sub(volatile _Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_sub(_Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_and_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_and_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_and(volatile _Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_and(_Atomic_short *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_or_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_or_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_or(
		volatile _Atomic_short *_Atom, short _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_or(
		_Atomic_short *_Atom, short _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_xor_explicit(
		volatile _Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_xor_explicit(
		_Atomic_short *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return ((short)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline short atomic_fetch_xor(
		volatile _Atomic_short *_Atom, short _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline short atomic_fetch_xor(
		_Atomic_short *_Atom, short _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline short _Atomic_short::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline short _Atomic_short::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline short _Atomic_short::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline short _Atomic_short::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline short _Atomic_short::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline short _Atomic_short::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline short _Atomic_short::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline short _Atomic_short::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline short _Atomic_short::operator+=(short _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline short _Atomic_short::operator+=(short _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline short _Atomic_short::operator-=(short _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline short _Atomic_short::operator-=(short _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline short _Atomic_short::operator&=(short _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline short _Atomic_short::operator&=(short _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline short _Atomic_short::operator|=(short _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline short _Atomic_short::operator|=(short _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline short _Atomic_short::operator^=(short _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline short _Atomic_short::operator^=(short _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline short _Atomic_short::fetch_add(
		short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_add(
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_sub(
		short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_sub(
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_and(
		short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_and(
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_or(
		short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_or(
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_xor(
		short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline short _Atomic_short::fetch_xor(
		short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline short atomic_fetch_add(
		volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_add(atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_add_explicit(
		volatile atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_add_explicit(
		atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_sub(
		volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_sub(atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_sub_explicit(
		volatile atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_sub_explicit(
		atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_and(
		volatile atomic<short> *_Atom, short _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_and(
		atomic<short> *_Atom, short _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_and_explicit(
		volatile atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_and_explicit(
		atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_or(volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_or(atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_or_explicit(
		volatile atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_or_explicit(
		atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_xor(volatile atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_xor(atomic<short> *_Atom,
		short _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_short *>(_Atom), _Value));
	}

	template<>
	inline short atomic_fetch_xor_explicit(
		volatile atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_short *>(_Atom), _Value, _Order));
	}

	template<>
	inline short atomic_fetch_xor_explicit(
		atomic<short> *_Atom, short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_short *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(2 == sizeof(unsigned short),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_ushort
	{
		unsigned short operator=(unsigned short) volatile noexcept;
		unsigned short operator=(unsigned short) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(unsigned short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(unsigned short, memory_order = memory_order_seq_cst)
			noexcept;
		unsigned short load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		unsigned short load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator unsigned short() const volatile noexcept;
		operator unsigned short() const noexcept;
		unsigned short exchange(unsigned short,
			memory_order = memory_order_seq_cst) volatile noexcept;
		unsigned short exchange(unsigned short,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(unsigned short&, unsigned short,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(unsigned short&, unsigned short,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(unsigned short&, unsigned short,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(unsigned short&, unsigned short,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(unsigned short&, unsigned short,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(unsigned short&, unsigned short,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(unsigned short&, unsigned short,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(unsigned short&, unsigned short,
			memory_order = memory_order_seq_cst) noexcept;


		unsigned short operator++(int) volatile noexcept;
		unsigned short operator++(int) noexcept;
		unsigned short operator--(int) volatile noexcept;
		unsigned short operator--(int) noexcept;
		unsigned short operator++() volatile noexcept;
		unsigned short operator++() noexcept;
		unsigned short operator--() volatile noexcept;
		unsigned short operator--() noexcept;
		unsigned short operator+=(unsigned short) volatile noexcept;
		unsigned short operator+=(unsigned short) noexcept;
		unsigned short operator-=(unsigned short) volatile noexcept;
		unsigned short operator-=(unsigned short) noexcept;
		unsigned short operator&=(unsigned short) volatile noexcept;
		unsigned short operator&=(unsigned short) noexcept;
		unsigned short operator|=(unsigned short) volatile noexcept;
		unsigned short operator|=(unsigned short) noexcept;
		unsigned short operator^=(unsigned short) volatile noexcept;
		unsigned short operator^=(unsigned short) noexcept;

		unsigned short fetch_add(unsigned short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned short fetch_add(unsigned short, memory_order = memory_order_seq_cst) noexcept;
		unsigned short fetch_sub(unsigned short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned short fetch_sub(unsigned short, memory_order = memory_order_seq_cst) noexcept;
		unsigned short fetch_and(unsigned short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned short fetch_and(unsigned short, memory_order = memory_order_seq_cst) noexcept;
		unsigned short fetch_or(unsigned short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned short fetch_or(unsigned short, memory_order = memory_order_seq_cst) noexcept;
		unsigned short fetch_xor(unsigned short, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned short fetch_xor(unsigned short, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint2_t)) _Uint2_t _My_val;




	} _Atomic_ushort;



	template<>
	struct atomic<unsigned short>
		: _Atomic_ushort
	{

		atomic() noexcept = default;

		constexpr atomic(unsigned short _Val) noexcept
			: _Atomic_ushort{ (_Uint2_t)_Val }
		{
		}

		unsigned short operator=(unsigned short _Val) volatile noexcept
		{
			return (_Atomic_ushort::operator=(_Val));
		}

		unsigned short operator=(unsigned short _Val) noexcept
		{
			return (_Atomic_ushort::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_ushort *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const _Atomic_ushort *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}


	inline bool atomic_is_lock_free(const volatile atomic<unsigned short> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}

	inline bool atomic_is_lock_free(const atomic<unsigned short> *) noexcept
	{
		return (_Atomic_is_lock_free_2());
	}



	inline void atomic_init(volatile _Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(_Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_init(volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}

	inline void atomic_init(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		_Atom->_My_val = (_Uint2_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline unsigned short atomic_load_explicit(
		const volatile _Atomic_ushort *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned short atomic_load_explicit(
		const _Atomic_ushort *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_load_2((_Uint2_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned short atomic_load(
		const volatile _Atomic_ushort *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned short atomic_load(
		const _Atomic_ushort *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned short atomic_exchange_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_exchange_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_exchange_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_exchange(volatile _Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_exchange(_Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_ushort *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_ushort *_Atom, unsigned short *_Exp,
		unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_ushort *_Atom, unsigned short *_Exp,
		unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_ushort *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t*)_Exp, (_Uint2_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_ushort *_Atom, unsigned short *_Exp, unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_ushort *_Atom, unsigned short *_Exp, unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline unsigned short _Atomic_ushort::operator=(unsigned short _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline unsigned short _Atomic_ushort::operator=(unsigned short _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_ushort::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_ushort::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_ushort::store(unsigned short _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_ushort::store(unsigned short _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline unsigned short _Atomic_ushort::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline unsigned short _Atomic_ushort::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_ushort::operator unsigned short() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_ushort::operator unsigned short() const noexcept
	{
		return (atomic_load(this));
	}

	inline unsigned short _Atomic_ushort::exchange(
		unsigned short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::exchange(
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_ushort::compare_exchange_weak(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ushort::compare_exchange_weak(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ushort::compare_exchange_weak(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_ushort::compare_exchange_weak(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_ushort::compare_exchange_strong(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ushort::compare_exchange_strong(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ushort::compare_exchange_strong(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_ushort::compare_exchange_strong(
		unsigned short& _Exp, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<unsigned short> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_ushort *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<unsigned short> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_ushort *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_ushort *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_ushort *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_ushort *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_ushort *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<unsigned short> *_Atom,
		unsigned short _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_ushort *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<unsigned short> *_Atom,
		unsigned short _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_ushort *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline unsigned short atomic_load(const volatile atomic<unsigned short> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_ushort *>(_Atom)));
	}

	template<>
	inline unsigned short atomic_load(const atomic<unsigned short> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_ushort *>(_Atom)));
	}

	template<>
	inline unsigned short atomic_load_explicit(
		const volatile atomic<unsigned short> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_ushort *>(_Atom), _Order));
	}

	template<>
	inline unsigned short atomic_load_explicit(
		const atomic<unsigned short> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_ushort *>(_Atom), _Order));
	}

	template<>
	inline unsigned short atomic_exchange(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_exchange(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_exchange_explicit(
		volatile atomic<unsigned short> *_Atom,
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_exchange_explicit(atomic<unsigned short> *_Atom,
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_ushort *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<unsigned short> *_Atom, unsigned short *_Exp,
		unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<unsigned short> *_Atom, unsigned short *_Exp,
		unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_ushort *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<unsigned short> *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<unsigned short> *_Atom, unsigned short *_Exp,
		unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<unsigned short> *_Atom, unsigned short *_Exp,
		unsigned short _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_ushort *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<unsigned short> *_Atom, unsigned short *_Exp, unsigned short _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline unsigned short atomic_fetch_add_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_add_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_add_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_add(volatile _Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_add(_Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_sub_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_sub_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_sub_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_sub(volatile _Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_sub(_Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_and_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_and_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_and_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_and(volatile _Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_and(_Atomic_ushort *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_or_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_or_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_or_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_or(
		volatile _Atomic_ushort *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_or(
		_Atomic_ushort *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_xor_explicit(
		volatile _Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_xor_explicit(
		_Atomic_ushort *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned short)_Atomic_fetch_xor_2((_Uint2_t*)&_Atom->_My_val, (_Uint2_t)_Value, _Order));
	}

	inline unsigned short atomic_fetch_xor(
		volatile _Atomic_ushort *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned short atomic_fetch_xor(
		_Atomic_ushort *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline unsigned short _Atomic_ushort::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned short _Atomic_ushort::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned short _Atomic_ushort::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned short _Atomic_ushort::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned short _Atomic_ushort::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned short _Atomic_ushort::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned short _Atomic_ushort::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned short _Atomic_ushort::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned short _Atomic_ushort::operator+=(unsigned short _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned short _Atomic_ushort::operator+=(unsigned short _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned short _Atomic_ushort::operator-=(unsigned short _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned short _Atomic_ushort::operator-=(unsigned short _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned short _Atomic_ushort::operator&=(unsigned short _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned short _Atomic_ushort::operator&=(unsigned short _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned short _Atomic_ushort::operator|=(unsigned short _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned short _Atomic_ushort::operator|=(unsigned short _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned short _Atomic_ushort::operator^=(unsigned short _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned short _Atomic_ushort::operator^=(unsigned short _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned short _Atomic_ushort::fetch_add(
		unsigned short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_add(
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_sub(
		unsigned short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_sub(
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_and(
		unsigned short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_and(
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_or(
		unsigned short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_or(
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_xor(
		unsigned short _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline unsigned short _Atomic_ushort::fetch_xor(
		unsigned short _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline unsigned short atomic_fetch_add(
		volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_add(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_add_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_add_explicit(
		atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_sub(
		volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_sub(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_sub_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_sub_explicit(
		atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_and(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_and(
		atomic<unsigned short> *_Atom, unsigned short _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_and_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_and_explicit(
		atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_or(volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_or(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_or_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_or_explicit(
		atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_xor(volatile atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_xor(atomic<unsigned short> *_Atom,
		unsigned short _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_ushort *>(_Atom), _Value));
	}

	template<>
	inline unsigned short atomic_fetch_xor_explicit(
		volatile atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_ushort *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned short atomic_fetch_xor_explicit(
		atomic<unsigned short> *_Atom, unsigned short _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_ushort *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(4 == sizeof(int),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_int
	{
		int operator=(int) volatile noexcept;
		int operator=(int) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(int, memory_order = memory_order_seq_cst)
			noexcept;
		int load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		int load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator int() const volatile noexcept;
		operator int() const noexcept;
		int exchange(int,
			memory_order = memory_order_seq_cst) volatile noexcept;
		int exchange(int,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(int&, int,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(int&, int,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(int&, int,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(int&, int,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(int&, int,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(int&, int,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(int&, int,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(int&, int,
			memory_order = memory_order_seq_cst) noexcept;


		int operator++(int) volatile noexcept;
		int operator++(int) noexcept;
		int operator--(int) volatile noexcept;
		int operator--(int) noexcept;
		int operator++() volatile noexcept;
		int operator++() noexcept;
		int operator--() volatile noexcept;
		int operator--() noexcept;
		int operator+=(int) volatile noexcept;
		int operator+=(int) noexcept;
		int operator-=(int) volatile noexcept;
		int operator-=(int) noexcept;
		int operator&=(int) volatile noexcept;
		int operator&=(int) noexcept;
		int operator|=(int) volatile noexcept;
		int operator|=(int) noexcept;
		int operator^=(int) volatile noexcept;
		int operator^=(int) noexcept;

		int fetch_add(int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		int fetch_add(int, memory_order = memory_order_seq_cst) noexcept;
		int fetch_sub(int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		int fetch_sub(int, memory_order = memory_order_seq_cst) noexcept;
		int fetch_and(int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		int fetch_and(int, memory_order = memory_order_seq_cst) noexcept;
		int fetch_or(int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		int fetch_or(int, memory_order = memory_order_seq_cst) noexcept;
		int fetch_xor(int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		int fetch_xor(int, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint4_t)) _Uint4_t _My_val;




	} _Atomic_int;



	template<>
	struct atomic<int>
		: _Atomic_int
	{

		atomic() noexcept = default;

		constexpr atomic(int _Val) noexcept
			: _Atomic_int{ (_Uint4_t)_Val }
		{
		}

		int operator=(int _Val) volatile noexcept
		{
			return (_Atomic_int::operator=(_Val));
		}

		int operator=(int _Val) noexcept
		{
			return (_Atomic_int::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_int *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const _Atomic_int *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}


	inline bool atomic_is_lock_free(const volatile atomic<int> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const atomic<int> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}



	inline void atomic_init(volatile _Atomic_int *_Atom,
		int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(_Atomic_int *_Atom,
		int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_init(volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(atomic<int> *_Atom,
		int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_int *_Atom,
		int _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_int *_Atom,
		int _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline int atomic_load_explicit(
		const volatile _Atomic_int *_Atom, memory_order _Order) noexcept
	{
		return ((int)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline int atomic_load_explicit(
		const _Atomic_int *_Atom, memory_order _Order) noexcept
	{
		return ((int)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline int atomic_load(
		const volatile _Atomic_int *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline int atomic_load(
		const _Atomic_int *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline int atomic_exchange_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_exchange_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_exchange(volatile _Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_exchange(_Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_int *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_int *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_int *_Atom, int *_Exp,
		int _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_int *_Atom, int *_Exp,
		int _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_int *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_int *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_int *_Atom, int *_Exp, int _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_int *_Atom, int *_Exp, int _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline int _Atomic_int::operator=(int _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline int _Atomic_int::operator=(int _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_int::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_int::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_int::store(int _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_int::store(int _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline int _Atomic_int::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline int _Atomic_int::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_int::operator int() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_int::operator int() const noexcept
	{
		return (atomic_load(this));
	}

	inline int _Atomic_int::exchange(
		int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::exchange(
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_int::compare_exchange_weak(
		int& _Exp, int _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_int::compare_exchange_weak(
		int& _Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_int::compare_exchange_weak(
		int& _Exp, int _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_int::compare_exchange_weak(
		int& _Exp, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_int::compare_exchange_strong(
		int& _Exp, int _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_int::compare_exchange_strong(
		int& _Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_int::compare_exchange_strong(
		int& _Exp, int _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_int::compare_exchange_strong(
		int& _Exp, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<int> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_int *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<int> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_int *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_int *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<int> *_Atom,
		int _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_int *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_int *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<int> *_Atom,
		int _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_int *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<int> *_Atom,
		int _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_int *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<int> *_Atom,
		int _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_int *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline int atomic_load(const volatile atomic<int> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_int *>(_Atom)));
	}

	template<>
	inline int atomic_load(const atomic<int> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_int *>(_Atom)));
	}

	template<>
	inline int atomic_load_explicit(
		const volatile atomic<int> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_int *>(_Atom), _Order));
	}

	template<>
	inline int atomic_load_explicit(
		const atomic<int> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_int *>(_Atom), _Order));
	}

	template<>
	inline int atomic_exchange(
		volatile atomic<int> *_Atom, int _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_exchange(atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_exchange_explicit(
		volatile atomic<int> *_Atom,
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_exchange_explicit(atomic<int> *_Atom,
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_int *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<int> *_Atom, int *_Exp,
		int _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_int *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<int> *_Atom, int *_Exp,
		int _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_int *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<int> *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<int> *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_int *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<int> *_Atom, int *_Exp,
		int _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_int *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<int> *_Atom, int *_Exp,
		int _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_int *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<int> *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<int> *_Atom, int *_Exp, int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_int *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline int atomic_fetch_add_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_add_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_add(volatile _Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_add(_Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_sub_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_sub_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_sub(volatile _Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_sub(_Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_and_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_and_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_and(volatile _Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_and(_Atomic_int *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_or_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_or_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_or(
		volatile _Atomic_int *_Atom, int _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_or(
		_Atomic_int *_Atom, int _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_xor_explicit(
		volatile _Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_xor_explicit(
		_Atomic_int *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return ((int)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline int atomic_fetch_xor(
		volatile _Atomic_int *_Atom, int _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline int atomic_fetch_xor(
		_Atomic_int *_Atom, int _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline int _Atomic_int::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline int _Atomic_int::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline int _Atomic_int::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline int _Atomic_int::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline int _Atomic_int::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline int _Atomic_int::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline int _Atomic_int::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline int _Atomic_int::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline int _Atomic_int::operator+=(int _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline int _Atomic_int::operator+=(int _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline int _Atomic_int::operator-=(int _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline int _Atomic_int::operator-=(int _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline int _Atomic_int::operator&=(int _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline int _Atomic_int::operator&=(int _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline int _Atomic_int::operator|=(int _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline int _Atomic_int::operator|=(int _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline int _Atomic_int::operator^=(int _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline int _Atomic_int::operator^=(int _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline int _Atomic_int::fetch_add(
		int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_add(
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_sub(
		int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_sub(
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_and(
		int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_and(
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_or(
		int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_or(
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_xor(
		int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline int _Atomic_int::fetch_xor(
		int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline int atomic_fetch_add(
		volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_add(atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_add_explicit(
		volatile atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_add_explicit(
		atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_sub(
		volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_sub(atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_sub_explicit(
		volatile atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_sub_explicit(
		atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_and(
		volatile atomic<int> *_Atom, int _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_and(
		atomic<int> *_Atom, int _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_and_explicit(
		volatile atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_and_explicit(
		atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_or(volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_or(atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_or_explicit(
		volatile atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_or_explicit(
		atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_xor(volatile atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_xor(atomic<int> *_Atom,
		int _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_int *>(_Atom), _Value));
	}

	template<>
	inline int atomic_fetch_xor_explicit(
		volatile atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_int *>(_Atom), _Value, _Order));
	}

	template<>
	inline int atomic_fetch_xor_explicit(
		atomic<int> *_Atom, int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_int *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(4 == sizeof(unsigned int),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_uint
	{
		unsigned int operator=(unsigned int) volatile noexcept;
		unsigned int operator=(unsigned int) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(unsigned int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(unsigned int, memory_order = memory_order_seq_cst)
			noexcept;
		unsigned int load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		unsigned int load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator unsigned int() const volatile noexcept;
		operator unsigned int() const noexcept;
		unsigned int exchange(unsigned int,
			memory_order = memory_order_seq_cst) volatile noexcept;
		unsigned int exchange(unsigned int,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(unsigned int&, unsigned int,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(unsigned int&, unsigned int,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(unsigned int&, unsigned int,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(unsigned int&, unsigned int,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(unsigned int&, unsigned int,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(unsigned int&, unsigned int,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(unsigned int&, unsigned int,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(unsigned int&, unsigned int,
			memory_order = memory_order_seq_cst) noexcept;


		unsigned int operator++(int) volatile noexcept;
		unsigned int operator++(int) noexcept;
		unsigned int operator--(int) volatile noexcept;
		unsigned int operator--(int) noexcept;
		unsigned int operator++() volatile noexcept;
		unsigned int operator++() noexcept;
		unsigned int operator--() volatile noexcept;
		unsigned int operator--() noexcept;
		unsigned int operator+=(unsigned int) volatile noexcept;
		unsigned int operator+=(unsigned int) noexcept;
		unsigned int operator-=(unsigned int) volatile noexcept;
		unsigned int operator-=(unsigned int) noexcept;
		unsigned int operator&=(unsigned int) volatile noexcept;
		unsigned int operator&=(unsigned int) noexcept;
		unsigned int operator|=(unsigned int) volatile noexcept;
		unsigned int operator|=(unsigned int) noexcept;
		unsigned int operator^=(unsigned int) volatile noexcept;
		unsigned int operator^=(unsigned int) noexcept;

		unsigned int fetch_add(unsigned int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned int fetch_add(unsigned int, memory_order = memory_order_seq_cst) noexcept;
		unsigned int fetch_sub(unsigned int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned int fetch_sub(unsigned int, memory_order = memory_order_seq_cst) noexcept;
		unsigned int fetch_and(unsigned int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned int fetch_and(unsigned int, memory_order = memory_order_seq_cst) noexcept;
		unsigned int fetch_or(unsigned int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned int fetch_or(unsigned int, memory_order = memory_order_seq_cst) noexcept;
		unsigned int fetch_xor(unsigned int, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned int fetch_xor(unsigned int, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint4_t)) _Uint4_t _My_val;




	} _Atomic_uint;



	template<>
	struct atomic<unsigned int>
		: _Atomic_uint
	{

		atomic() noexcept = default;

		constexpr atomic(unsigned int _Val) noexcept
			: _Atomic_uint{ (_Uint4_t)_Val }
		{
		}

		unsigned int operator=(unsigned int _Val) volatile noexcept
		{
			return (_Atomic_uint::operator=(_Val));
		}

		unsigned int operator=(unsigned int _Val) noexcept
		{
			return (_Atomic_uint::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_uint *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const _Atomic_uint *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}


	inline bool atomic_is_lock_free(const volatile atomic<unsigned int> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const atomic<unsigned int> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}



	inline void atomic_init(volatile _Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(_Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_init(volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline unsigned int atomic_load_explicit(
		const volatile _Atomic_uint *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned int atomic_load_explicit(
		const _Atomic_uint *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned int atomic_load(
		const volatile _Atomic_uint *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned int atomic_load(
		const _Atomic_uint *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned int atomic_exchange_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_exchange_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_exchange(volatile _Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_exchange(_Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_uint *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_uint *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_uint *_Atom, unsigned int *_Exp,
		unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_uint *_Atom, unsigned int *_Exp,
		unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_uint *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_uint *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_uint *_Atom, unsigned int *_Exp, unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_uint *_Atom, unsigned int *_Exp, unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline unsigned int _Atomic_uint::operator=(unsigned int _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline unsigned int _Atomic_uint::operator=(unsigned int _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_uint::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_uint::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_uint::store(unsigned int _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_uint::store(unsigned int _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline unsigned int _Atomic_uint::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline unsigned int _Atomic_uint::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_uint::operator unsigned int() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_uint::operator unsigned int() const noexcept
	{
		return (atomic_load(this));
	}

	inline unsigned int _Atomic_uint::exchange(
		unsigned int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::exchange(
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_uint::compare_exchange_weak(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uint::compare_exchange_weak(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uint::compare_exchange_weak(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_uint::compare_exchange_weak(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_uint::compare_exchange_strong(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uint::compare_exchange_strong(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_uint::compare_exchange_strong(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_uint::compare_exchange_strong(
		unsigned int& _Exp, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<unsigned int> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_uint *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<unsigned int> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_uint *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_uint *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_uint *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_uint *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_uint *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<unsigned int> *_Atom,
		unsigned int _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_uint *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<unsigned int> *_Atom,
		unsigned int _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_uint *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline unsigned int atomic_load(const volatile atomic<unsigned int> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_uint *>(_Atom)));
	}

	template<>
	inline unsigned int atomic_load(const atomic<unsigned int> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_uint *>(_Atom)));
	}

	template<>
	inline unsigned int atomic_load_explicit(
		const volatile atomic<unsigned int> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_uint *>(_Atom), _Order));
	}

	template<>
	inline unsigned int atomic_load_explicit(
		const atomic<unsigned int> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_uint *>(_Atom), _Order));
	}

	template<>
	inline unsigned int atomic_exchange(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_exchange(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_exchange_explicit(
		volatile atomic<unsigned int> *_Atom,
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_exchange_explicit(atomic<unsigned int> *_Atom,
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_uint *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<unsigned int> *_Atom, unsigned int *_Exp,
		unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_uint *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<unsigned int> *_Atom, unsigned int *_Exp,
		unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_uint *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<unsigned int> *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<unsigned int> *_Atom, unsigned int *_Exp,
		unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_uint *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<unsigned int> *_Atom, unsigned int *_Exp,
		unsigned int _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_uint *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<unsigned int> *_Atom, unsigned int *_Exp, unsigned int _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline unsigned int atomic_fetch_add_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_add_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_add(volatile _Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_add(_Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_sub_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_sub_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_sub(volatile _Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_sub(_Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_and_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_and_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_and(volatile _Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_and(_Atomic_uint *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_or_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_or_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_or(
		volatile _Atomic_uint *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_or(
		_Atomic_uint *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_xor_explicit(
		volatile _Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_xor_explicit(
		_Atomic_uint *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned int)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned int atomic_fetch_xor(
		volatile _Atomic_uint *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned int atomic_fetch_xor(
		_Atomic_uint *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline unsigned int _Atomic_uint::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned int _Atomic_uint::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned int _Atomic_uint::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned int _Atomic_uint::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned int _Atomic_uint::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned int _Atomic_uint::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned int _Atomic_uint::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned int _Atomic_uint::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned int _Atomic_uint::operator+=(unsigned int _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned int _Atomic_uint::operator+=(unsigned int _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned int _Atomic_uint::operator-=(unsigned int _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned int _Atomic_uint::operator-=(unsigned int _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned int _Atomic_uint::operator&=(unsigned int _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned int _Atomic_uint::operator&=(unsigned int _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned int _Atomic_uint::operator|=(unsigned int _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned int _Atomic_uint::operator|=(unsigned int _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned int _Atomic_uint::operator^=(unsigned int _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned int _Atomic_uint::operator^=(unsigned int _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned int _Atomic_uint::fetch_add(
		unsigned int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_add(
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_sub(
		unsigned int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_sub(
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_and(
		unsigned int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_and(
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_or(
		unsigned int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_or(
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_xor(
		unsigned int _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline unsigned int _Atomic_uint::fetch_xor(
		unsigned int _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline unsigned int atomic_fetch_add(
		volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_add(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_add_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_add_explicit(
		atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_sub(
		volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_sub(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_sub_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_sub_explicit(
		atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_and(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_and(
		atomic<unsigned int> *_Atom, unsigned int _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_and_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_and_explicit(
		atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_or(volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_or(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_or_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_or_explicit(
		atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_xor(volatile atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_xor(atomic<unsigned int> *_Atom,
		unsigned int _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_uint *>(_Atom), _Value));
	}

	template<>
	inline unsigned int atomic_fetch_xor_explicit(
		volatile atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_uint *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned int atomic_fetch_xor_explicit(
		atomic<unsigned int> *_Atom, unsigned int _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_uint *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(4 == sizeof(long),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_long
	{
		long operator=(long) volatile noexcept;
		long operator=(long) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(long, memory_order = memory_order_seq_cst)
			noexcept;
		long load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		long load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator long() const volatile noexcept;
		operator long() const noexcept;
		long exchange(long,
			memory_order = memory_order_seq_cst) volatile noexcept;
		long exchange(long,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(long&, long,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(long&, long,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(long&, long,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(long&, long,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(long&, long,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(long&, long,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(long&, long,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(long&, long,
			memory_order = memory_order_seq_cst) noexcept;


		long operator++(int) volatile noexcept;
		long operator++(int) noexcept;
		long operator--(int) volatile noexcept;
		long operator--(int) noexcept;
		long operator++() volatile noexcept;
		long operator++() noexcept;
		long operator--() volatile noexcept;
		long operator--() noexcept;
		long operator+=(long) volatile noexcept;
		long operator+=(long) noexcept;
		long operator-=(long) volatile noexcept;
		long operator-=(long) noexcept;
		long operator&=(long) volatile noexcept;
		long operator&=(long) noexcept;
		long operator|=(long) volatile noexcept;
		long operator|=(long) noexcept;
		long operator^=(long) volatile noexcept;
		long operator^=(long) noexcept;

		long fetch_add(long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		long fetch_add(long, memory_order = memory_order_seq_cst) noexcept;
		long fetch_sub(long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		long fetch_sub(long, memory_order = memory_order_seq_cst) noexcept;
		long fetch_and(long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		long fetch_and(long, memory_order = memory_order_seq_cst) noexcept;
		long fetch_or(long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		long fetch_or(long, memory_order = memory_order_seq_cst) noexcept;
		long fetch_xor(long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		long fetch_xor(long, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint4_t)) _Uint4_t _My_val;




	} _Atomic_long;



	template<>
	struct atomic<long>
		: _Atomic_long
	{

		atomic() noexcept = default;

		constexpr atomic(long _Val) noexcept
			: _Atomic_long{ (_Uint4_t)_Val }
		{
		}

		long operator=(long _Val) volatile noexcept
		{
			return (_Atomic_long::operator=(_Val));
		}

		long operator=(long _Val) noexcept
		{
			return (_Atomic_long::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_long *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const _Atomic_long *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}


	inline bool atomic_is_lock_free(const volatile atomic<long> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const atomic<long> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}



	inline void atomic_init(volatile _Atomic_long *_Atom,
		long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(_Atomic_long *_Atom,
		long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_init(volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(atomic<long> *_Atom,
		long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_long *_Atom,
		long _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_long *_Atom,
		long _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline long atomic_load_explicit(
		const volatile _Atomic_long *_Atom, memory_order _Order) noexcept
	{
		return ((long)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline long atomic_load_explicit(
		const _Atomic_long *_Atom, memory_order _Order) noexcept
	{
		return ((long)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline long atomic_load(
		const volatile _Atomic_long *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline long atomic_load(
		const _Atomic_long *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline long atomic_exchange_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_exchange_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_exchange(volatile _Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_exchange(_Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_long *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_long *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_long *_Atom, long *_Exp,
		long _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_long *_Atom, long *_Exp,
		long _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_long *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_long *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_long *_Atom, long *_Exp, long _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_long *_Atom, long *_Exp, long _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline long _Atomic_long::operator=(long _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline long _Atomic_long::operator=(long _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_long::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_long::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_long::store(long _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_long::store(long _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline long _Atomic_long::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline long _Atomic_long::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_long::operator long() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_long::operator long() const noexcept
	{
		return (atomic_load(this));
	}

	inline long _Atomic_long::exchange(
		long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::exchange(
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_long::compare_exchange_weak(
		long& _Exp, long _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_long::compare_exchange_weak(
		long& _Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_long::compare_exchange_weak(
		long& _Exp, long _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_long::compare_exchange_weak(
		long& _Exp, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_long::compare_exchange_strong(
		long& _Exp, long _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_long::compare_exchange_strong(
		long& _Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_long::compare_exchange_strong(
		long& _Exp, long _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_long::compare_exchange_strong(
		long& _Exp, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<long> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_long *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<long> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_long *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_long *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<long> *_Atom,
		long _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_long *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_long *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<long> *_Atom,
		long _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_long *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<long> *_Atom,
		long _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_long *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<long> *_Atom,
		long _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_long *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline long atomic_load(const volatile atomic<long> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_long *>(_Atom)));
	}

	template<>
	inline long atomic_load(const atomic<long> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_long *>(_Atom)));
	}

	template<>
	inline long atomic_load_explicit(
		const volatile atomic<long> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_long *>(_Atom), _Order));
	}

	template<>
	inline long atomic_load_explicit(
		const atomic<long> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_long *>(_Atom), _Order));
	}

	template<>
	inline long atomic_exchange(
		volatile atomic<long> *_Atom, long _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_exchange(atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_exchange_explicit(
		volatile atomic<long> *_Atom,
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_exchange_explicit(atomic<long> *_Atom,
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_long *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<long> *_Atom, long *_Exp,
		long _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_long *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<long> *_Atom, long *_Exp,
		long _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_long *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<long> *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<long> *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_long *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<long> *_Atom, long *_Exp,
		long _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_long *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<long> *_Atom, long *_Exp,
		long _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_long *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<long> *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<long> *_Atom, long *_Exp, long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_long *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline long atomic_fetch_add_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_add_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_add(volatile _Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_add(_Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_sub_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_sub_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_sub(volatile _Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_sub(_Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_and_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_and_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_and(volatile _Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_and(_Atomic_long *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_or_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_or_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_or(
		volatile _Atomic_long *_Atom, long _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_or(
		_Atomic_long *_Atom, long _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_xor_explicit(
		volatile _Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_xor_explicit(
		_Atomic_long *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return ((long)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline long atomic_fetch_xor(
		volatile _Atomic_long *_Atom, long _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline long atomic_fetch_xor(
		_Atomic_long *_Atom, long _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline long _Atomic_long::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline long _Atomic_long::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline long _Atomic_long::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline long _Atomic_long::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline long _Atomic_long::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline long _Atomic_long::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline long _Atomic_long::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline long _Atomic_long::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline long _Atomic_long::operator+=(long _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline long _Atomic_long::operator+=(long _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline long _Atomic_long::operator-=(long _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline long _Atomic_long::operator-=(long _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline long _Atomic_long::operator&=(long _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline long _Atomic_long::operator&=(long _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline long _Atomic_long::operator|=(long _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline long _Atomic_long::operator|=(long _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline long _Atomic_long::operator^=(long _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline long _Atomic_long::operator^=(long _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline long _Atomic_long::fetch_add(
		long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_add(
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_sub(
		long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_sub(
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_and(
		long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_and(
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_or(
		long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_or(
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_xor(
		long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline long _Atomic_long::fetch_xor(
		long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline long atomic_fetch_add(
		volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_add(atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_add_explicit(
		volatile atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_add_explicit(
		atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_sub(
		volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_sub(atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_sub_explicit(
		volatile atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_sub_explicit(
		atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_and(
		volatile atomic<long> *_Atom, long _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_and(
		atomic<long> *_Atom, long _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_and_explicit(
		volatile atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_and_explicit(
		atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_or(volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_or(atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_or_explicit(
		volatile atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_or_explicit(
		atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_xor(volatile atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_xor(atomic<long> *_Atom,
		long _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_long *>(_Atom), _Value));
	}

	template<>
	inline long atomic_fetch_xor_explicit(
		volatile atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_long *>(_Atom), _Value, _Order));
	}

	template<>
	inline long atomic_fetch_xor_explicit(
		atomic<long> *_Atom, long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_long *>(_Atom), _Value, _Order));
	}



















































































































































	static_assert(4 == sizeof(unsigned long),
		"_ISIZE and _ITYPE should match.");

























































	typedef struct _Atomic_ulong
	{
		unsigned long operator=(unsigned long) volatile noexcept;
		unsigned long operator=(unsigned long) noexcept;

		bool is_lock_free() const volatile noexcept;
		bool is_lock_free() const noexcept;
		void store(unsigned long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		void store(unsigned long, memory_order = memory_order_seq_cst)
			noexcept;
		unsigned long load(memory_order = memory_order_seq_cst)
			const volatile noexcept;
		unsigned long load(memory_order = memory_order_seq_cst)
			const noexcept;
		operator unsigned long() const volatile noexcept;
		operator unsigned long() const noexcept;
		unsigned long exchange(unsigned long,
			memory_order = memory_order_seq_cst) volatile noexcept;
		unsigned long exchange(unsigned long,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_weak(unsigned long&, unsigned long,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_weak(unsigned long&, unsigned long,
			memory_order, memory_order) noexcept;
		bool compare_exchange_strong(unsigned long&, unsigned long,
			memory_order, memory_order) volatile noexcept;
		bool compare_exchange_strong(unsigned long&, unsigned long,
			memory_order, memory_order) noexcept;
		bool compare_exchange_weak(unsigned long&, unsigned long,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_weak(unsigned long&, unsigned long,
			memory_order = memory_order_seq_cst) noexcept;
		bool compare_exchange_strong(unsigned long&, unsigned long,
			memory_order = memory_order_seq_cst) volatile noexcept;
		bool compare_exchange_strong(unsigned long&, unsigned long,
			memory_order = memory_order_seq_cst) noexcept;


		unsigned long operator++(int) volatile noexcept;
		unsigned long operator++(int) noexcept;
		unsigned long operator--(int) volatile noexcept;
		unsigned long operator--(int) noexcept;
		unsigned long operator++() volatile noexcept;
		unsigned long operator++() noexcept;
		unsigned long operator--() volatile noexcept;
		unsigned long operator--() noexcept;
		unsigned long operator+=(unsigned long) volatile noexcept;
		unsigned long operator+=(unsigned long) noexcept;
		unsigned long operator-=(unsigned long) volatile noexcept;
		unsigned long operator-=(unsigned long) noexcept;
		unsigned long operator&=(unsigned long) volatile noexcept;
		unsigned long operator&=(unsigned long) noexcept;
		unsigned long operator|=(unsigned long) volatile noexcept;
		unsigned long operator|=(unsigned long) noexcept;
		unsigned long operator^=(unsigned long) volatile noexcept;
		unsigned long operator^=(unsigned long) noexcept;

		unsigned long fetch_add(unsigned long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned long fetch_add(unsigned long, memory_order = memory_order_seq_cst) noexcept;
		unsigned long fetch_sub(unsigned long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned long fetch_sub(unsigned long, memory_order = memory_order_seq_cst) noexcept;
		unsigned long fetch_and(unsigned long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned long fetch_and(unsigned long, memory_order = memory_order_seq_cst) noexcept;
		unsigned long fetch_or(unsigned long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned long fetch_or(unsigned long, memory_order = memory_order_seq_cst) noexcept;
		unsigned long fetch_xor(unsigned long, memory_order = memory_order_seq_cst)
			volatile noexcept;
		unsigned long fetch_xor(unsigned long, memory_order = memory_order_seq_cst) noexcept;


























		alignas(sizeof(_Uint4_t)) _Uint4_t _My_val;




	} _Atomic_ulong;



	template<>
	struct atomic<unsigned long>
		: _Atomic_ulong
	{

		atomic() noexcept = default;

		constexpr atomic(unsigned long _Val) noexcept
			: _Atomic_ulong{ (_Uint4_t)_Val }
		{
		}

		unsigned long operator=(unsigned long _Val) volatile noexcept
		{
			return (_Atomic_ulong::operator=(_Val));
		}

		unsigned long operator=(unsigned long _Val) noexcept
		{
			return (_Atomic_ulong::operator=(_Val));
		}

		atomic(const atomic&) = delete;
		atomic& operator=(const atomic&) = delete;
		atomic& operator=(const atomic&) volatile = delete;
	};















































































































































































































































	inline bool atomic_is_lock_free(const volatile _Atomic_ulong *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const _Atomic_ulong *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}


	inline bool atomic_is_lock_free(const volatile atomic<unsigned long> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}

	inline bool atomic_is_lock_free(const atomic<unsigned long> *) noexcept
	{
		return (_Atomic_is_lock_free_4());
	}



	inline void atomic_init(volatile _Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(_Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_init(volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}

	inline void atomic_init(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		_Atom->_My_val = (_Uint4_t)_Value;

	}


	inline void atomic_store_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		_Atomic_store_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order);
	}

	inline void atomic_store(volatile _Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline void atomic_store(_Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		atomic_store_explicit(_Atom, _Value, memory_order_seq_cst);
	}

	inline unsigned long atomic_load_explicit(
		const volatile _Atomic_ulong *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned long atomic_load_explicit(
		const _Atomic_ulong *_Atom, memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_load_4((_Uint4_t*)&_Atom->_My_val, _Order));
	}

	inline unsigned long atomic_load(
		const volatile _Atomic_ulong *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned long atomic_load(
		const _Atomic_ulong *_Atom) noexcept
	{
		return (atomic_load_explicit(_Atom, memory_order_seq_cst));
	}

	inline unsigned long atomic_exchange_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_exchange_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_exchange_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_exchange(volatile _Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_exchange(_Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_exchange_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak_explicit(
		_Atomic_ulong *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_weak_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_weak(
		volatile _Atomic_ulong *_Atom, unsigned long *_Exp,
		unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_weak(
		_Atomic_ulong *_Atom, unsigned long *_Exp,
		unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong_explicit(
		_Atomic_ulong *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (_Atomic_compare_exchange_strong_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t*)_Exp, (_Uint4_t)_Value, _Order1, _Order2));
	}

	inline bool atomic_compare_exchange_strong(
		volatile _Atomic_ulong *_Atom, unsigned long *_Exp, unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}

	inline bool atomic_compare_exchange_strong(
		_Atomic_ulong *_Atom, unsigned long *_Exp, unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			_Atom, _Exp, _Value, memory_order_seq_cst, memory_order_seq_cst));
	}


	inline unsigned long _Atomic_ulong::operator=(unsigned long _Value) volatile noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline unsigned long _Atomic_ulong::operator=(unsigned long _Value) noexcept
	{
		atomic_store(this, _Value);
		return (_Value);
	}

	inline bool _Atomic_ulong::is_lock_free() const volatile noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline bool _Atomic_ulong::is_lock_free() const noexcept
	{
		return (atomic_is_lock_free(this));
	}

	inline void _Atomic_ulong::store(unsigned long _Value,
		memory_order _Order) volatile noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline void _Atomic_ulong::store(unsigned long _Value,
		memory_order _Order) noexcept
	{
		atomic_store_explicit(this, _Value, _Order);
	}

	inline unsigned long _Atomic_ulong::load(
		memory_order _Order) const volatile noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline unsigned long _Atomic_ulong::load(
		memory_order _Order) const noexcept
	{
		return (atomic_load_explicit(this, _Order));
	}

	inline _Atomic_ulong::operator unsigned long() const volatile noexcept
	{
		return (atomic_load(this));
	}

	inline _Atomic_ulong::operator unsigned long() const noexcept
	{
		return (atomic_load(this));
	}

	inline unsigned long _Atomic_ulong::exchange(
		unsigned long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::exchange(
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(this, _Value, _Order));
	}

	inline bool _Atomic_ulong::compare_exchange_weak(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ulong::compare_exchange_weak(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ulong::compare_exchange_weak(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_ulong::compare_exchange_weak(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_ulong::compare_exchange_strong(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ulong::compare_exchange_strong(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order1, _Order2));
	}

	inline bool _Atomic_ulong::compare_exchange_strong(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order) volatile noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}

	inline bool _Atomic_ulong::compare_exchange_strong(
		unsigned long& _Exp, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			this, &_Exp, _Value, _Order, _Get_memory_order(_Order)));
	}



	template<>
	inline bool atomic_is_lock_free(
		const volatile atomic<unsigned long> *_Atom) noexcept
	{
		return (atomic_is_lock_free(
			static_cast<const volatile _Atomic_ulong *>(_Atom)));
	}

	template<>
	inline bool atomic_is_lock_free(
		const atomic<unsigned long> *_Atom) noexcept
	{
		return (atomic_is_lock_free(static_cast<const _Atomic_ulong *>(_Atom)));
	}

	template<>
	inline void atomic_init(volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		atomic_init(static_cast<volatile _Atomic_ulong *>(_Atom), _Value);
	}

	template<>
	inline void atomic_init(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		atomic_init(static_cast<_Atomic_ulong *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		atomic_store(static_cast<volatile _Atomic_ulong *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		atomic_store(static_cast<_Atomic_ulong *>(_Atom), _Value);
	}

	template<>
	inline void atomic_store_explicit(volatile atomic<unsigned long> *_Atom,
		unsigned long _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<volatile _Atomic_ulong *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline void atomic_store_explicit(atomic<unsigned long> *_Atom,
		unsigned long _Value, memory_order _Order) noexcept
	{
		atomic_store_explicit(static_cast<_Atomic_ulong *>(_Atom),
			_Value, _Order);
	}

	template<>
	inline unsigned long atomic_load(const volatile atomic<unsigned long> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_ulong *>(_Atom)));
	}

	template<>
	inline unsigned long atomic_load(const atomic<unsigned long> *_Atom) noexcept
	{
		return (atomic_load(static_cast<const volatile _Atomic_ulong *>(_Atom)));
	}

	template<>
	inline unsigned long atomic_load_explicit(
		const volatile atomic<unsigned long> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const volatile _Atomic_ulong *>(_Atom), _Order));
	}

	template<>
	inline unsigned long atomic_load_explicit(
		const atomic<unsigned long> *_Atom, memory_order _Order) noexcept
	{
		return (atomic_load_explicit(
			static_cast<const _Atomic_ulong *>(_Atom), _Order));
	}

	template<>
	inline unsigned long atomic_exchange(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_exchange(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_exchange(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_exchange(static_cast<_Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_exchange_explicit(
		volatile atomic<unsigned long> *_Atom,
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_exchange_explicit(atomic<unsigned long> *_Atom,
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_exchange_explicit(static_cast<_Atomic_ulong *>(_Atom),
			_Value, _Order));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		volatile atomic<unsigned long> *_Atom, unsigned long *_Exp,
		unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak(
		atomic<unsigned long> *_Atom, unsigned long *_Exp,
		unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_weak(
			static_cast<_Atomic_ulong *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_weak_explicit(
		atomic<unsigned long> *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_weak_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		volatile atomic<unsigned long> *_Atom, unsigned long *_Exp,
		unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong(
		atomic<unsigned long> *_Atom, unsigned long *_Exp,
		unsigned long _Value) noexcept
	{
		return (atomic_compare_exchange_strong(
			static_cast<_Atomic_ulong *>(_Atom), _Exp, _Value));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Exp,
			_Value, _Order1, _Order2));
	}

	template<>
	inline bool atomic_compare_exchange_strong_explicit(
		atomic<unsigned long> *_Atom, unsigned long *_Exp, unsigned long _Value,
		memory_order _Order1, memory_order _Order2) noexcept
	{
		return (atomic_compare_exchange_strong_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Exp, _Value, _Order1, _Order2));
	}




	inline unsigned long atomic_fetch_add_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_add_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_add_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_add(volatile _Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_add(_Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_add_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_sub_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_sub_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_sub_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_sub(volatile _Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_sub(_Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_sub_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_and_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_and_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_and_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_and(volatile _Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_and(_Atomic_ulong *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_and_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_or_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_or_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_or_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_or(
		volatile _Atomic_ulong *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_or(
		_Atomic_ulong *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_fetch_or_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_xor_explicit(
		volatile _Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_xor_explicit(
		_Atomic_ulong *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return ((unsigned long)_Atomic_fetch_xor_4((_Uint4_t*)&_Atom->_My_val, (_Uint4_t)_Value, _Order));
	}

	inline unsigned long atomic_fetch_xor(
		volatile _Atomic_ulong *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}

	inline unsigned long atomic_fetch_xor(
		_Atomic_ulong *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_fetch_xor_explicit(_Atom, _Value, memory_order_seq_cst));
	}


	inline unsigned long _Atomic_ulong::operator++(int) volatile noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned long _Atomic_ulong::operator++(int) noexcept
	{
		return (atomic_fetch_add(this, 1));
	}

	inline unsigned long _Atomic_ulong::operator--(int) volatile noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned long _Atomic_ulong::operator--(int) noexcept
	{
		return (atomic_fetch_sub(this, 1));
	}

	inline unsigned long _Atomic_ulong::operator++() volatile noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned long _Atomic_ulong::operator++() noexcept
	{
		return (atomic_fetch_add(this, 1) + 1);
	}

	inline unsigned long _Atomic_ulong::operator--() volatile noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned long _Atomic_ulong::operator--() noexcept
	{
		return (atomic_fetch_sub(this, 1) - 1);
	}

	inline unsigned long _Atomic_ulong::operator+=(unsigned long _Right) volatile noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned long _Atomic_ulong::operator+=(unsigned long _Right) noexcept
	{
		return (atomic_fetch_add(this, _Right) + _Right);
	}

	inline unsigned long _Atomic_ulong::operator-=(unsigned long _Right) volatile noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned long _Atomic_ulong::operator-=(unsigned long _Right) noexcept
	{
		return (atomic_fetch_sub(this, _Right) - _Right);
	}

	inline unsigned long _Atomic_ulong::operator&=(unsigned long _Right) volatile noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned long _Atomic_ulong::operator&=(unsigned long _Right) noexcept
	{
		return (atomic_fetch_and(this, _Right) & _Right);
	}

	inline unsigned long _Atomic_ulong::operator|=(unsigned long _Right) volatile noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned long _Atomic_ulong::operator|=(unsigned long _Right) noexcept
	{
		return (atomic_fetch_or(this, _Right) | _Right);
	}

	inline unsigned long _Atomic_ulong::operator^=(unsigned long _Right) volatile noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned long _Atomic_ulong::operator^=(unsigned long _Right) noexcept
	{
		return (atomic_fetch_xor(this, _Right) ^ _Right);
	}

	inline unsigned long _Atomic_ulong::fetch_add(
		unsigned long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_add(
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_sub(
		unsigned long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_sub(
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_and(
		unsigned long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_and(
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_or(
		unsigned long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_or(
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_xor(
		unsigned long _Value, memory_order _Order) volatile noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}

	inline unsigned long _Atomic_ulong::fetch_xor(
		unsigned long _Value, memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(this, _Value, _Order));
	}



	template<>
	inline unsigned long atomic_fetch_add(
		volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_add(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_add(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_add(static_cast<_Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_add_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_add_explicit(
		atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_add_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_sub(
		volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_sub(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_sub(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_sub(static_cast<_Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_sub_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_sub_explicit(
		atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_sub_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_and(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_fetch_and(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_and(
		atomic<unsigned long> *_Atom, unsigned long _Value) noexcept
	{
		return (atomic_fetch_and(static_cast<_Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_and_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_and_explicit(
		atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_and_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_or(volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_or(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_or(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_or(static_cast<_Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_or_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_or_explicit(
		atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_or_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_xor(volatile atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_xor(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_xor(atomic<unsigned long> *_Atom,
		unsigned long _Value) noexcept
	{
		return (atomic_fetch_xor(static_cast<_Atomic_ulong *>(_Atom), _Value));
	}

	template<>
	inline unsigned long atomic_fetch_xor_explicit(
		volatile atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<volatile _Atomic_ulong *>(_Atom), _Value, _Order));
	}

	template<>
	inline unsigned long atomic_fetch_xor_explicit(
		atomic<unsigned long> *_Atom, unsigned long _Value,
		memory_order _Order) noexcept
	{
		return (atomic_fetch_xor_explicit(
			static_cast<_Atomic_ulong *>(_Atom), _Value, _Order));
	}











































































































