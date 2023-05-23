#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int a, int A, int B);
	void check_figure() override;
};