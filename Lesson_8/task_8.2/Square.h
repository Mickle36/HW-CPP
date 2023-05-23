#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral
{
public:
	Square(int a, int A);
	void check_figure() override;
};