#pragma once
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);

	Fraction operator+(Fraction other);

	Fraction operator-(Fraction other);

	Fraction operator*(Fraction other);

	Fraction operator/(Fraction other);

	Fraction operator-() const;

	Fraction& operator++();

	Fraction operator++(int);


	Fraction& operator--();

	Fraction operator--(int);

	int GetNumerator() const;
	int GetDenominator() const;
};