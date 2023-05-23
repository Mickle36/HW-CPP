#include "Triangle.h"
#include "EquilateralTriangle.h"
#include "CheckFiguge.h"


EquilateralTriangle::EquilateralTriangle(int a, int A) : Triangle::Triangle(a, b, c, A, B, C)
{
	this->name_fig = "�������������� �����������";
	this->a = a;
	this->b = a;
	this->c = a;
	this->A = A;
	this->B = A;
	this->C = A;
	this->sum_angels = A + B + C;
}

void EquilateralTriangle::check_figure()
{
	if (this->sum_angels != 180)
	{
		throw CheckFigure("����� ����� �� ����� 180");
	}
	else if (a != b && b != c && a != c)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\"��� ������� ������ ���� �����");
	}
	else if (A != B && B != C && A != C)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ��� ���� ������ ���� �����");
	}
}
