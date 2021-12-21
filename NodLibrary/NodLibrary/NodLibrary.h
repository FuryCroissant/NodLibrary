#pragma once
#ifdef LIB_EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
extern "C" LIB_API const char* NOD(int a, int b);