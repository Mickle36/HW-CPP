#pragma once
#include "Triangle.h"


class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int A, int B);
	void check_figure() override;
};