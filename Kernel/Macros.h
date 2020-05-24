/*
 * Macros.h
 */

#ifndef _H_MACROS
#define _H_MACROS

#ifdef BUILD_DLL
#define _EXPORT_API __declspec(dllexport)
#else
#define _EXPORT_API
#endif

#endif // _H_MACROS
