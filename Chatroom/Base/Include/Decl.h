#pragma once

#if defined (_WIN32) || defined (__WIN32__)

    #ifdef BASE_EXPORTS
        #define BASE_EXPORT __declspec(dllexport)
    #else
        #define BASE_EXPORT __declspec(dllimport)
    #endif

#elif defined(unix) || defined(__unix__) || defined(__unix)

    #ifdef BASE_EXPORTS
        #if __GNUC__ >= 4
            #define BASE_EXPORT __attribute__ ((visibility ("default")))
        #else
            #define BASE_EXPORT
        #endif
    #endif

#endif
