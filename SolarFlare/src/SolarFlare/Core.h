#pragma once

#ifdef SF_PLATFORM_WINDOWS 
#ifdef SF_BUILD_DLL
#define SOLARFLARE_API __declspec(dllexport)
#else 
#define SOLARFLARE_API __declspec(dllimport)
#endif
#else
#error Solar Flare Engine only supports Windows
#endif