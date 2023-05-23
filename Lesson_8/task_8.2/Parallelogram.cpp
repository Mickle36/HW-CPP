#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "CheckFiguge.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "�������������";
	this->a = a;
	this->b = b;
	this->c = this->a;
	this->d = this->b;
	this->A = A;
	this->B = B;
	this->C = this->A;
	this->D = this->B;
	this->sum_angels = A + B + C + D;
}

void Parallelogram::check_figure()
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
	else if (A != C && B != D)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ���� ������� �� �����.");
	}
}
