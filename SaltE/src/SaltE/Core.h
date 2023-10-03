#pragma once

#ifdef SE_PLATFORM_WINDOWS
	#ifdef SE_BUILD_DLL
		#define SALTE_API __declspec(dllexport)
	#else
		#define SALTE_API __declspec(dllimport)
	#endif
#else
	#error SaltE only supports Windows
#endif