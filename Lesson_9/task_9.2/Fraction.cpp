#include <iostream>
#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator)
{
	this->numerator_ = numerator;
	this->denominator_ = denominator;

	if ((this->denominator_ == 0) || (this->numerator_ == 0))
	{
		throw std::runtime_error("В дроби не должно быть нулей!!!");
	}
}

Fraction Fraction::operator+(Fraction other)
{
	int denum = denominator_;
	int numer = numerator_;
	if (denominator_ != numerator_)
	{
		int numer = numerator_ * other.denominator_ + other.numerator_ * denominator_;
		int denum = other.denominator_ * denominator_;
		return { numer, denum };
	}
}

Fraction Fraction::operator-(Fraction other)
{
	int denum = denominator_;
	int numer = numerator_;
	if (denominator_ != numerator_)
	{
		int numer = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		int denum = other.denominator_ * denominator_;
		return { numer, denum };
	}
}

Fraction Fraction::operator*(Fraction other)
{
	int numer = numerator_ * other.numerator_;
	int denum = other.denominator_ * denominator_;
	if (denominator_ == other.numerator_)
	{
		int numer = numerator_;
		int denum = other.denominator_;
		return { numer, denum };
	}
	else if (numerator_ == other.denominator_)
	{
		int numer = other.numerator_;
		int denum = denominator_;
		return { numer, denum };
	}
	return { numer, denum };
}

Fraction Fraction::operator/(Fraction other)
{
	int numer = numerator_ * other.denominator_ ;
	int denum = other.numerator_ * denominator_;
	if (denominator_ == other.denominator_)
	{
		int numer = numerator_;
		int denum = other.numerator_;
		return { numer, denum };
	}
	else if (numerator_ == other.numerator_)
	{
		int numer = other.denominator_;
		int denum = denominator_;
		return { numer, denum };
	}
	return { numer, denum };
}

Fraction Fraction::operator-() const
{
	return {-numerator_, -denominator_};
}

Fraction& Fraction::operator++()
{
	numerator_+= denominator_;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	++(*this);
	return temp;
}

Fraction& Fraction::operator--()
{

	numerator_ -= denominator_;
	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction temp = *this;
	--(*this);
	return temp;
}

int Fraction::GetNumerator() const { return numerator_; }
int Fraction::GetDenominator() const { return denominator_; }