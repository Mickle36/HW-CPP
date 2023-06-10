#include "Quadrilateral.h"
#include "Square.h"

Square::Square(int a, int A) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = " вадрат";
	this->a = a;
	this->b = this->a;
	this->c = this->a;
	this->d = this->a;
	this->A = A;
	this->B = this->A;
	this->C = this->A;
	this->D = this->A;
}