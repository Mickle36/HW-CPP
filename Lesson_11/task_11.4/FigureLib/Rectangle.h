#pragma once
#include "Quadrilateral.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class Rectangle : public Quadrilateral
{
public:
	LEAVERLIBRARY_API Rectangle(int a, int b, int A);
};