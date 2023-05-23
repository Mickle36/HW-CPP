#include "Figure.h"
#include "CheckFiguge.h"
#include <iostream>
#include <string>

Figure::Figure()
{
	this->sides = 0;
	this->name_fig = "������";
}

int Figure::get_sides() { return this->sides; }
std::string Figure::get_name_fig() { return this->name_fig; }

void Figure::about_me()
{
	if (this->sides != 0)
	{
		throw CheckFigure("��� �� ������������ �����");
	}
	std::cout << this->get_name_fig();
	std::cout << " (���������� ������ " << this->get_sides() << ") ������" << std::endl << std::endl;
}