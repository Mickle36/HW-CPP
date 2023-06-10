#include "Triangle.h"
#include "RightTriangle.h"


RightTriangle::RightTriangle(int a, int b, int c, int A, int B) : Triangle::Triangle(a, b, c, A, B, C)
{
	this->name_fig = "Прямоугольный треугольник";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = 90;
}