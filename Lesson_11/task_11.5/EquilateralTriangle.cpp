#include "Triangle.h"
#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle(int a, int A) : Triangle::Triangle(a, b, c, A, B, C)
{
	this->name_fig = "Равносторонний треугольник";
	this->a = a;
	this->b = this->a;
	this->c = this->a;
	this->A = A;
	this->B = this->A;
	this->C = this->A;
}