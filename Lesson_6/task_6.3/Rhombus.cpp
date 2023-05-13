#include "Quadrilateral.h"
#include "Rhombus.h"

Rhombus::Rhombus(int a, int A, int B) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "Ромб";
	this->a = a;
	this->b = this->a;
	this->c = this->a;
	this->d = this->a;
	this->A = A;
	this->B = B;
	this->C = this->A;
	this->D = this->B;
}