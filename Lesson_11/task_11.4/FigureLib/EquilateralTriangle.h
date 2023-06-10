#pragma once
#include "Triangle.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class EquilateralTriangle : public Triangle
{
public:
	LEAVERLIBRARY_API EquilateralTriangle(int a, int A);
};