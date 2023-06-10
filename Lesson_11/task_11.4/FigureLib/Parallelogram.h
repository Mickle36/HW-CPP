#pragma once
#include "Quadrilateral.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class Parallelogram : public Quadrilateral
{
public:
	LEAVERLIBRARY_API Parallelogram(int a, int b, int A, int B);
};