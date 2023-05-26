#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "CheckFiguge.h"


IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle::Triangle(a = a, b = b, c = a, A = A, B = B, C = A)
{
	this->name_fig = "Равнобедренный треугольник";
	this->sum_angels = A + B + C;
	IsoscelesTriangle::check_figure();
}

void IsoscelesTriangle::check_figure()
{
	if (this->sum_angels != 180)
	{
		throw CheckFigure("у фигуры \"" + this->get_name_fig() + "\" сумма углов не равна 180");
	}
	else if (this->sides != 3)
	{
		throw CheckFigure("У \"" + this->get_name_fig() + "\" сумма сторон не равна 3, это явно не треугольник.");
	}
	else if (this->a != this->c)
	{
		throw CheckFigure("У \"" + this->get_name_fig() + "\" бёдра не ровны.");
	}
}
