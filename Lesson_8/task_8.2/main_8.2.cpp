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
		RightTriangle right_triangle(10, 20, 30, 30, 70);
		print_info(&right_triangle);
		EquilateralTriangle equilateral_triangle(30, 60);
		print_info(&equilateral_triangle);
		IsoscelesTriangle isosceles_triangle(10, 20, 60, 70, 60);
		print_info(&isosceles_triangle);
		
	}
	catch (const CheckFigure& err)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	

	//Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	//Rectangle rectangle(10, 20, 90);
	//Square square(10, 90);
	//Parallelogram parallelogram(10, 20, 30, 40);
	//Rhombus rhombus(20, 30, 40);

	//print_info(&quadrilateral);
	//print_info(&rectangle);
	//print_info(&square);
	//print_info(&parallelogram);
	//print_info(&rhombus);


	return 0;
}