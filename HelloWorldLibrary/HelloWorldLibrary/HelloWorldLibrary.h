#pragma once

#ifdef HELLOWORLDLIBRARY_EXPORTS
#define HELLOWORLDLIBRARY_API __declspec(dllexport)
#else
#define HELLOWORLDLIBRARY_API __declspec(dllimport)
#endif

extern "C" HELLOWORLDLIBRARY_API void HelloWorld();