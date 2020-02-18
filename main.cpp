
#include <iostream>
#include <cstdio>
#include <cstdlib>


#if ( defined (__WIN32__) || defined (__WIN32) || defined (_WIN32) || defined (WIN32) || defined (__WIN64__) || defined (__WIN64) || defined (_WIN64) || defined (WIN64)  )
    #include <windows.h>
#endif


int main()
{
    size_t a = sizeof(void*);
    size_t b = sizeof(int);
    size_t c = sizeof(long);
    size_t d = sizeof(size_t);
    size_t e = sizeof(WORD);
    size_t f = sizeof(DWORD);
    size_t g = sizeof(LONG);
    size_t h = sizeof(LONGLONG);
    size_t i = sizeof(ULONGLONG);
    size_t j = sizeof(UCHAR);
    size_t k = sizeof(SHORT);


    printf("Bitness: %d\n", a*8);

    printf("void*: %d\n", a);
    printf("int: %d\n", b);
    printf("long: %d\n", c);
    printf("size_t: %d\n", d);

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
