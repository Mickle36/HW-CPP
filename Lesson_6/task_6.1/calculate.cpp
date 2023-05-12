#include "calculate.h"

int summa(int num1, int num2)
{
	return num1 + num2;
}

int diff(int num1, int num2)
{
	return num1 - num2;
}

int mult(int num1, int num2)
{
	return num1 * num2;
}

int divi(int num1, int num2)
{
	return num1 / num2;
}

int deg(int num1, int num2)
{
	int num_of_deg = num1;

	while (num2 != 1)
	{
		num1 *= num_of_deg;
		num2--;
	}

	return	num1;
}

