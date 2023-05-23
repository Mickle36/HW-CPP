#include "Quadrilateral.h"
#include "Rectangle.h"
#include "CheckFiguge.h"


Rectangle::Rectangle(int a, int b, int A) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "Прямоугольник";
	this->a = a;
	this->b = b;
	this->c = this->a;
	this->d = this->b;
	this->A = A;
	this->B = this->A;
	this->C = this->A;
	this->D = this->A;
	this->sum_angels = A + B + C + D;
}

void Rectangle::check_figure()
{
	if (this->sum_angels != 360)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма углов не равна 360");
	}
	else if (this->sides != 4)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма сторон не равна 4, это явно не четырехугольник.");
	}
	else if (a != c && b != d)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" параллельные стороны не равны.");
	}
	else if (A != 90 && B != 90 && C != 90 && D != 90)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" все углы не равны 90.");
	}
}
