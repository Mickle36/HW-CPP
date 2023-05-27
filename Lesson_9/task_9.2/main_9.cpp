#include <iostream>
#include <Windows.h>
#include "Fraction.h"



inline std::ostream& operator<<(std::ostream& stream, const Fraction& frac)
{
	return stream << frac.GetNumerator() << "/" << frac.GetDenominator();
}

int main()
{
	try
	{
		setlocale(LC_ALL, "ru");
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);

		int numer1, denum1;
		int numer2, denum2;
		std::cout << "¬ведите числитель дроби 1: ";
		std::cin >> numer1;
		std::cout << "¬ведите знаменатель дроби 1: ";
		std::cin >> denum1;

		std::cout << "¬ведите числитель дроби 2: ";
		std::cin >> numer2;
		std::cout << "¬ведите знаменатель дроби 2: ";
		std::cin >> denum2;

		Fraction f1(numer1, denum1);
		Fraction f2(numer2, denum2);
		Fraction f_sum = f1 + f2;
		std::cout << f1 << " + " << f2 << " = " << f_sum << std::endl;

		Fraction f_diff = f1 - f2;
		std::cout << f1 << " - " << f2 << " = " << f_diff << std::endl;

		Fraction f_mult = f1 * f2;
		std::cout << f1 << " * " << f2 << " = " << f_mult << std::endl;

		Fraction f_div = f1 / f2;
		std::cout << f1 << " / " << f2 << " = " << f_div << std::endl;

		Fraction f_unar1 = -f1;
		Fraction f_unar2 = -f2;
		std::cout << f_unar1 << "\t" << f_unar2 << std::endl;

		Fraction f_inc = ++f1 * f2;
		std::cout << "++" << numer1 << "/" << denum1 << " * " << f2 << " = " << f_inc << std::endl;
		std::cout << "«начение дроби 1 = " << f1 << std::endl;

		Fraction f_dec = f1-- * f2;
		std::cout << numer1 << "/" << denum1 << "--" << " * " << f2 << " = " << f_dec << std::endl;
		std::cout << "«начение дроби 1 = " << f1 << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "ќшибка: " << ex.what() << std::endl;
	}

	

	return 0;
}