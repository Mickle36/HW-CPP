#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "CheckFiguge.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrilateral::Quadrilateral(a=a, b=b, c=a, b, A=A, B=B, C=A, D=B)
{
	this->name_fig = "Параллелограм";
	this->sum_angels = A + B + C + D;
	Parallelogram::check_figure();
}

void Parallelogram::check_figure()
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
	else if (A != C && B != D)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" углы попарно не равны.");
	}
}
