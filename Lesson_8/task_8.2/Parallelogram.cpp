#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "CheckFiguge.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrilateral::Quadrilateral(a=a, b=b, c=a, b, A=A, B=B, C=A, D=B)
{
	this->name_fig = "�������������";
	this->sum_angels = A + B + C + D;
	Parallelogram::check_figure();
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
