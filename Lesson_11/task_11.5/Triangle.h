#pragma once
#include <iostream>
#include <string>
#include "Figure.h"


class Triangle : public Figure
{
protected:
	int a, b, c;
	int A, B, C;
public:
	Triangle(int a, int b, int c, int A, int B, int C);

	void about_me() override;
};