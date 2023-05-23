#include <iostream>
#include <string>
#include "Figure.h"
#include "Quadrilateral.h"
#include "CheckFiguge.h"


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
	this->sum_angels = A + B + C + D;
}

void Quadrilateral::about_me()
{
	int a = this->a, b = this->b, c = this->c, d = this->d;
	int A = this->A, B = this->B, C = this->C, D = this->D;

	if ((a == b && b == c && c == d) &&
		(A == 90 && B == 90 && C == 90 && D == 90))
	{
		std::cout << this->name_fig;
	}

	else if ((a == c && b == d) && ((A == 90 && B == 90 && C == 90 && D == 90)))
	{
		std::cout << this->name_fig;
	}

	else if ((a == b && b == c && c == d) && (A == C && B == D))
	{
		std::cout << this->name_fig;
	}

	else if ((a == c && b == d) && (A == C && B == D))
	{
		std::cout << this->name_fig;
	}

	else if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90))
	{
		std::cout << this->name_fig;
	}

	else { std::cout << this->name_fig; }

	std::cout << " (cтороны " << a << ", " << b << ", " << c << ", " << d;
	std::cout << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl;
	std::cout << std::endl;
}

void Quadrilateral::check_figure()
{
	if (this->sum_angels != 360)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма углов не равна 360");
	}
	else if (this->sides != 4)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма сторон не равна 4, это явно не четырехугольник.");
	}
}
