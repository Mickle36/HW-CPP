#include "Quadrilateral.h"
#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrilateral::Quadrilateral(a, b, c, d, A, B, C, D)
{
	this->name_fig = "Параллелограм";
	this->a = a;
	this->b = b;
	this->c = this->a;
	this->d = this->b;
	this->A = A;
	this->B = B;
	this->C = this->A;
	this->D = this->B;
}