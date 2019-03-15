#pragma once

#ifndef MYLIB_PUBLIC
    #if defined _WIN32 || defined __CYGWIN__
        #define MYLIB_PUBLIC __declspec(dllimport)
    #else
        #define MYLIB_PUBLIC
    #endif
#endif

#ifdef __cplusplus 
extern "C" {
#endif

MYLIB_PUBLIC int mylib_func_returning_0();

MYLIB_PUBLIC const char* mylib_version();

#ifdef __cplusplus 
}
#endif
