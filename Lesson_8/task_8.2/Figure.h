#pragma once
#include <string>
#include <iostream>
#include "CheckFiguge.h"

class Figure
{
protected:
	int sides;
	std::string name_fig;
public:
	Figure();

	int get_sides();

	std::string get_name_fig();

	virtual void about_me();
	virtual void check_figure();
};