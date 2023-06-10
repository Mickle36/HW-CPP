#include "Triangle.h"
#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B, int C) : Triangle::Triangle(a, b, c, A, B, C)
{
	this->name_fig = "Равнобедренный треугольник";
	this->a = a;
	this->b = b;
	this->c = this->a;
	this->A = A;
	this->B = B;
	this->C = C;
}