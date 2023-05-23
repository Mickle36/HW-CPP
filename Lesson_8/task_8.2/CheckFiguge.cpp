#include <iostream>
#include <string>
#include "CheckFiguge.h"

CheckFigure::CheckFigure(const std::string& message): message(message)
{}


const char*  CheckFigure::what() const
{
	return message.c_str();
}

