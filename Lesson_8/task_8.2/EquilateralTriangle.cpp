#include "Triangle.h"
#include "EquilateralTriangle.h"
#include "CheckFiguge.h"


EquilateralTriangle::EquilateralTriangle(int a, int A) : Triangle::Triangle(a = a, b = a, c = a, A = A, B = A, C = A)
{
	this->name_fig = "�������������� �����������";
	this->sum_angels = A + B + C;
	EquilateralTriangle::check_figure();
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
