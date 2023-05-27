#include <iostream>
#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
	if (denominator == 0)
	{
		throw std::runtime_error("Делить на ноль нельзя!!!");
	}
}

bool Fraction::operator==(const Fraction& other)
{
	return { (numerator_ / denominator_) == (other.numerator_ / other.denominator_) };
}

bool Fraction::operator!=(Fraction other)
{
	return { (numerator_ / denominator_) != (other.numerator_ / other.denominator_) };
}

bool Fraction::operator<(Fraction other)
{
	return { (numerator_ / denominator_) < (other.numerator_ / other.denominator_) };
}

bool Fraction::operator>(Fraction other)
{
	return { (numerator_ / denominator_) > (other.numerator_ / other.denominator_) };
}

bool Fraction::operator<=(Fraction other)
{
	return { (numerator_ / denominator_) <= (other.numerator_ / other.denominator_) };
}

bool Fraction::operator>=(Fraction other)
{
	return { (numerator_ / denominator_) >= (other.numerator_ / other.denominator_) };
}