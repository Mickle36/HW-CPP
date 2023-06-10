#pragma once
#include "Triangle.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class RightTriangle : public Triangle
{
public:
	LEAVERLIBRARY_API RightTriangle(int a, int b, int c, int A, int B);
};