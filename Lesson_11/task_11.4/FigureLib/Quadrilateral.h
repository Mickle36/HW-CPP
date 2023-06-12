#pragma once
#include <iostream>
#include <string>
#include "Figure.h"
#include "macros.h"

class Quadrilateral : public Figure
{
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	LEAVERLIBRARY_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);

	LEAVERLIBRARY_API void about_me() override;
};