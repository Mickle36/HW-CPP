#include "Triangle.h"
#include "RightTriangle.h"
#include "CheckFiguge.h"


RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : Triangle::Triangle(a = a, b = b, c = c, A = A, B = B, C = 90)
{
	this->name_fig = "������������� �����������";
	this->sum_angels = A + B + C;

	if (this->sum_angels != 180)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ����� ����� �� ����� 180");
	}
	else if (this->sides != 3)
	{
		throw CheckFigure("����� ������ �� ����� 3, ��� ���� �� �����������.");
	}
}