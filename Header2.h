#pragma once
#ifdef DLL2_EXPORTS
#define DLL2_API __declspec(dllexport)
#else
#define DLL2_API __declspec(dllimport)
#endif
DLL2_API int minute(int i);
DLL2_API int secunda(int i);
DLL2_API float point(int count);
