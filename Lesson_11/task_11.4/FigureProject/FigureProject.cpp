#include <iostream>
#include "main_lib.h"

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure;
	print_info(&figure);

	Triangle triangle(10, 20, 30, 60, 70, 80);
	RightTriangle right_triangle(10, 20, 30, 60, 70);
	IsoscelesTriangle isosceles_triangle(10, 20, 60, 70, 60);
	EquilateralTriangle equilateral_triangle(30, 60);

	print_info(&triangle);
	print_info(&right_triangle);
	print_info(&isosceles_triangle);
	print_info(&equilateral_triangle);

	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20, 90);
	Square square(10, 90);
	Parallelogram parallelogram(10, 20, 30, 40);
	Rhombus rhombus(20, 30, 40);

	print_info(&quadrilateral);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhombus);

	system("pause");

	return 0;
}