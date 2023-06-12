#pragma once
#include <iostream>
#include <string>
#include "Figure.h"
#include "macros.h"

class Triangle : public Figure
{
protected:
	int a, b, c;
	int A, B, C;
public:
	LEAVERLIBRARY_API Triangle(int a, int b, int c, int A, int B, int C);

	LEAVERLIBRARY_API void about_me() override;
};