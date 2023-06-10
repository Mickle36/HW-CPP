#pragma once
#include "Quadrilateral.h"

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class Rhombus : public Quadrilateral
{
public:
	LEAVERLIBRARY_API Rhombus(int a, int A, int B);
};