#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "CheckFiguge.h"


IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle::Triangle(a, b, c, A, B, C)
{
	this->name_fig = "�������������� �����������";
	this->a = a;
	this->b = b;
	this->c = this->a;
	this->A = A;
	this->B = B;
	this->C = this->A;
	this->sum_angels = A + B + C;
}

void IsoscelesTriangle::check_figure()
{
	if (this->sum_angels != 180)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ����� ����� �� ����� 180");
	}
	else if (this->sides != 3)
	{
		throw CheckFigure("� \"" + this->get_name_fig() + "\" ����� ������ �� ����� 3, ��� ���� �� �����������.");
	}
	else if (this->a != this->c)
	{
		throw CheckFigure("� \"" + this->get_name_fig() + "\" ���� �� �����.");
	}
}
