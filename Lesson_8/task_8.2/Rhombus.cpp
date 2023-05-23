#include "Quadrilateral.h"
#include "Rhombus.h"
#include "CheckFiguge.h"

Rhombus::Rhombus(int a, int A, int B) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "Ромб";
	this->a = a;
	this->b = this->a;
	this->c = this->a;
	this->d = this->a;
	this->A = A;
	this->B = B;
	this->C = this->A;
	this->D = this->B;
	this->sum_angels = A + B + C + D;
}

void Rhombus::check_figure()
{
	if (this->sum_angels != 360)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма углов не равна 360");
	}
	else if (this->sides != 4)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма сторон не равна 4, это явно не четырехугольник.");
	}
	else if (a != b && a != c && a != d && b != c && b != d && c != d)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" все стороны не равны.");
	}
	else if (A != C && B != D)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" углы попарно не равны.");
	}
}
