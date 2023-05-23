#pragma once
#include <iostream>

class CheckFigure : public std::exception
{
protected:
	std::string message;

public:
	CheckFigure(const std::string& message);
	const char* what() const override;
};