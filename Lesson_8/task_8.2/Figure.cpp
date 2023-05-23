#include "Figure.h"
#include "CheckFiguge.h"
#include <iostream>
#include <string>

Figure::Figure()
{
	this->sides = 0;
	this->name_fig = "Фигура";
}

int Figure::get_sides() { return this->sides; }
std::string Figure::get_name_fig() { return this->name_fig; }

void Figure::about_me()
{
	if (this->sides != 0)
	{
		throw CheckFigure("это не родительский класс");
	}
	std::cout << this->get_name_fig();
	std::cout << " (количество сторон " << this->get_sides() << ") создан" << std::endl << std::endl;
}