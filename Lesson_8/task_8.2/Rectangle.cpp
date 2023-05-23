#include "Quadrilateral.h"
#include "Rectangle.h"


Rectangle::Rectangle(int a, int b, int A) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "Прямоугольник";
	this->a = a;
	this->b = b;
	this->c = this->a;
	this->d = this->b;
	this->A = A;
	this->B = this->A;
	this->C = this->A;
	this->D = this->A;
}