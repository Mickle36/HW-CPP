#include <iostream>
#include <string>
#include "Figure.h"
#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
	this->name_fig = "Четырехугольник";
	this->sides = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

void Quadrilateral::about_me()
{
	int a = this->a, b = this->b, c = this->c, d = this->d;
	int A = this->A, B = this->B, C = this->C, D = this->D;

	if ((a == b && b == c && c == d) &&
		(A == 90 && B == 90 && C == 90 && D == 90))
	{
		std::cout << this->name_fig + ":" << std::endl;
	}

	else if ((a == c && b == d) && ((A == 90 && B == 90 && C == 90 && D == 90)))
	{
		std::cout << this->name_fig + ":" << std::endl;
	}

	else if ((a == b && b == c && c == d) && (A == C && B == D))
	{
		std::cout << this->name_fig + ":" << std::endl;
	}

	else if ((a == c && b == d) && (A == C && B == D))
	{
		std::cout << this->name_fig + ":" << std::endl;
	}

	else if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90))
	{
		std::cout << this->name_fig + ":" << std::endl;
	}

	else { std::cout << this->name_fig + ":" << std::endl; }

	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	std::cout << std::endl;
}