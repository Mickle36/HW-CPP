#pragma once
#include "Triangle.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class IsoscelesTriangle : public Triangle
{
public:
	LEAVERLIBRARY_API IsoscelesTriangle(int a, int b, int A, int B, int C);
};