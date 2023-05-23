#include "Quadrilateral.h"
#include "Square.h"
#include "CheckFiguge.h"

Square::Square(int a, int A) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = " вадрат";
	this->a = a;
	this->b = this->a;
	this->c = this->a;
	this->d = this->a;
	this->A = A;
	this->B = this->A;
	this->C = this->A;
	this->D = this->A;
	this->sum_angels = A + B + C + D;
}

void Square::check_figure()
{
	if (this->sum_angels != 360)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма углов не равна 360");
	}
	else if (this->sides != 4)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма сторон не равна 4, это €вно не четырехугольник.");
	}
	else if (a != b && a != c && a != d && b != c && b != d && c != d)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" все стороны не равны.");
	}
	else if (A != 90 && B != 90 && C != 90 && D != 90)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" все углы не равны 90.");
	}
}
