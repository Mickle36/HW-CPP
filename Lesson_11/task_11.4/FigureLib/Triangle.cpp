#include "Triangle.h"
#include "Figure.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	this->sides = 3;
	this->name_fig = "Треугольник";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}

void Triangle::about_me()
{
	int a = this->a, b = this->b, c = this->c;
	int A = this->A, B = this->B, C = this->C;

	if (C == 90) { std::cout << this->name_fig + ":" << std::endl; }

	else if ((a == b && b == c && a == c) && (A == B && B == C && A == C))
	{
		std::cout << this->name_fig + ":" << std::endl;
	}

	else if ((a == c) && (A == C)) { std::cout << this->name_fig + ":" << std::endl; }

	else { std::cout << this->name_fig + ":" << std::endl; }

	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
	std::cout << std::endl;
}