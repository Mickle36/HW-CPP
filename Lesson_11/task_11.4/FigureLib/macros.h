#pragma once

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT