#pragma once
#include <string>
#include <iostream>

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
};