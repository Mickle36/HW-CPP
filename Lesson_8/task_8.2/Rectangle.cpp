#include "Quadrilateral.h"
#include "Rectangle.h"
#include "CheckFiguge.h"


Rectangle::Rectangle(int a, int b, int A) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "�������������";
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
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ����� ����� �� ����� 360");
	}
	else if (this->sides != 4)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ����� ������ �� ����� 4, ��� ���� �� ���������������.");
	}
	else if (a != c && b != d)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ������������ ������� �� �����.");
	}
	else if (A != 90 && B != 90 && C != 90 && D != 90)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ��� ���� �� ����� 90.");
	}
}
