#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b, int A);
	void check_figure() override;
};