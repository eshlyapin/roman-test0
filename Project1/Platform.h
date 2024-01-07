#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#ifndef PROJECT1_EXP
#define PROJECT1_EXPORT __declspec(dllimport)
#else
#define PROJECT1_EXPORT __declspec(dllexport)
#endif

#endif //__PLATFORM_H__