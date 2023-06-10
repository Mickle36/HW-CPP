#include "Figure.h"
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
	std::cout << this->name_fig + ":\n";
	std::cout << "Количество сторон: " << this->sides << std::endl << std::endl;
}