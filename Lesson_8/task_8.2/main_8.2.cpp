#include <iostream>
#include <ostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "CheckFiguge.h"

void print_info(Figure* on_class)
{
	//on_class->check_figure();
	on_class->about_me();
}

int main()
{
	setlocale(LC_ALL, "ru");

	
	try
	{
		Figure figure;
		print_info(&figure);
		Triangle triangle(10, 20, 30, 60, 70, 50);
		print_info(&triangle);
		RightTriangle right_triangle(10, 20, 30, 30, 60);
		print_info(&right_triangle);
		EquilateralTriangle equilateral_triangle(30, 60);
		print_info(&equilateral_triangle);
		IsoscelesTriangle isosceles_triangle(10, 20, 55, 70);
		print_info(&isosceles_triangle);

		Quadrilateral quadrilateral(10, 20, 30, 40, 90, 90, 90, 90);
		print_info(&quadrilateral);
		Rectangle rectangle(10, 20, 90);
		print_info(&rectangle);
		Square square(10, 90);
		print_info(&square);
		Parallelogram parallelogram(10, 20, 120, 60);
		print_info(&parallelogram);
		Rhombus rhombus(20, 70, 110);
		print_info(&rhombus);

		Rhombus rhombus_2(20, 70, 50);
		print_info(&rhombus_2);
		
	}
	catch (const CheckFigure& err)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}

	return 0;
}