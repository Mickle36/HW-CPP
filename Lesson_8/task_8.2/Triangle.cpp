#include "Triangle.h"
#include "Figure.h"
#include "CheckFiguge.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	this->sides = 3;
	this->name_fig = "�����������";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->sum_angels = A + B + C;
}

void Triangle::about_me()
{
	this->sum_angels = A + B + C;
	int a = this->a, b = this->b, c = this->c;
	int A = this->A, B = this->B, C = this->C;

	if (C == 90) { std::cout << this->name_fig; }

	else if ((a == b && b == c && a == c) && (A == B && B == C && A == C))
	{
		std::cout << this->name_fig;
	}

	else if ((a == c) && (A == C)) { std::cout << this->get_name_fig(); }

	else { std::cout << this->get_name_fig(); }

	std::cout << " (c������ " << a << ", " << b << ", " << c;
	std::cout << "; ���� " << A << ", " << B << ", " << C << ") ������" << std::endl;
	std::cout << std::endl;
	
}

void Triangle::check_figure()
{
	if (this->sum_angels != 180)
	{
		throw CheckFigure("� ������ \"" + this->get_name_fig() + "\" ����� ����� �� ����� 180");
	}
	else if (this->sides != 3)
	{
		throw CheckFigure("� \"" + this->get_name_fig() + "\" ����� ������ �� ����� 3, ��� ���� �� �����������.");
	}
}
