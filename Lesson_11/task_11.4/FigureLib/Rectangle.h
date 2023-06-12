#pragma once
#include "Quadrilateral.h"
#include "macros.h"

class Rectangle : public Quadrilateral
{
public:
	LEAVERLIBRARY_API Rectangle(int a, int b, int A);
};