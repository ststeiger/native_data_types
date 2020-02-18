
#ifdef __cplusplus
    // #include <iostream>
    // #include <fstream>
    #include <cstdio>
    #include <cstdlib>
    #include <cstdint>
    #include <cstring>
    #include <cinttypes>
#else
    #include <stdio.h> // printf
    #include <stdlib.h> // for malloc
    #include <stdint.h> // for int32_t, int8_t, etc.
    #include <stdbool.h> // true, false in plain old C
    #include <string.h>  // for strlen, strcopy
    #include <inttypes.h>  //
#endif





#if ( defined (__WIN32__) || defined (__WIN32) || defined (_WIN32) || defined (WIN32) || defined (__WIN64__) || defined (__WIN64) || defined (_WIN64) || defined (WIN64)  )
    #include <windows.h>
#else

// https://docs.microsoft.com/en-us/windows/win32/winprog/windows-data-types



    typedef int				   BOOL;
    typedef long int           LONG;
    typedef short int          SHORT;
    typedef char               CHAR;

    typedef unsigned long int  DWORD;
    typedef unsigned short     WORD;
    typedef unsigned char      BYTE;
    typedef unsigned int       UINT;

    typedef long long          INT64;
    typedef unsigned long long UINT64;

    typedef int                PT_FILEHANDLE;
    typedef void             * DLL_HANDLE;

    typedef unsigned long      DWORD;
    typedef unsigned long*     LPDWORD;
    typedef void*              LPOVERLAPPED;
    typedef void*              OVERLAPPED;
    typedef void*              LPVOID;
    typedef void*              PVOID;
    typedef void               VOID;
    typedef int                HANDLE;         // note that handle here is assumed to be
    // a pointer to a file decriptor
    typedef int*               PHANDLE;
    typedef int                BOOL;

    typedef unsigned long      UINT32;
    typedef unsigned long      ULONG;
    typedef unsigned short     USHORT;
    typedef unsigned char      UCHAR;
    typedef long long          INT64;
    typedef long long          LARGE_INTEGER;
    typedef unsigned char      BYTE;

    typedef int64_t LONGLONG;
    typedef uint64_t ULONGLONG;

#endif


int main()
{
    size_t a = sizeof(void*);
    size_t b = sizeof(int);
    size_t c = sizeof(long);
    size_t d = sizeof(size_t);
    size_t ddd = sizeof(FLOAT);
    size_t e = sizeof(WORD);
    size_t f = sizeof(DWORD);
    size_t ff = sizeof(DWORD32);
    size_t fff = sizeof(DWORD64);
    size_t ffff = sizeof(DWORDLONG);

    size_t g = sizeof(LONG);
    size_t h = sizeof(LONGLONG);
    size_t i = sizeof(ULONGLONG);
    size_t j = sizeof(UCHAR);
    size_t k = sizeof(SHORT);
    size_t gg = sizeof(HACCEL);
    size_t ggg = sizeof(HALF_PTR);

    // https://stackoverflow.com/questions/1403074/printf-with-sizeof-on-32-vs-64-platforms-how-do-i-handle-format-code-in-platfor
    // "%zu" for size_t and "%zd" for ssize_t, I

    printf("Bitness: %zu\n", a*8);

    printf("void*: %zu\n", a);
    printf("int: %zu\n", b);
    printf("long: %zu\n", c);
    printf("size_t: %zu\n", d);

    return EXIT_SUCCESS;
}


/*
set __VCVARSALL_TARGET_ARCH=x86
set __VCVARSALL_HOST_ARCH=x86

set __VCVARSALL_TARGET_ARCH=x64
set __VCVARSALL_HOST_ARCH=x64

set __VCVARSALL_TARGET_ARCH=x86
set __VCVARSALL_HOST_ARCH=x64

set __VCVARSALL_TARGET_ARCH=x64
set __VCVARSALL_HOST_ARCH=x86

set __VCVARSALL_TARGET_ARCH=arm64
set __VCVARSALL_HOST_ARCH=x86

https://docs.microsoft.com/en-us/cpp/build/building-on-the-command-line?view=vs-2019

*/
