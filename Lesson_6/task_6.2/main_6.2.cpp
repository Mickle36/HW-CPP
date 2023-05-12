#include <iostream>
#include "counter.h"

int main()
{

	std::string val;
	int schet;
	bool bool_value = false;

	do {
	loop:
		std::cout << "Do you want to specify the initial value of the counter ? Enter yes or no : ";
		std::cin >> val;

		if (val == "yes")
		{
			std::cout << "Enter the initial value of the counter: ";
			std::cin >> schet;
			Counter new_Counter(schet, val);
			new_Counter.set_equals_schetchik();
		}
		else if (val == "no")
		{
			schet = 0;
			val = "";
			Counter new_Counter(schet, val);
			new_Counter.set_equals_schetchik();
		}
		else
		{
			std::cout << "Error! repeated question..." << std::endl;
			goto loop;
		}

		Counter new_Counter(schet, val);

		do {
			std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
			std::cin >> val;

			if (val == "+")
			{
				new_Counter.set_plus_schetchik();
			}
			else if (val == "-")
			{
				new_Counter.set_minus_schetchik();
			}
			else if (val == "=")
			{
				new_Counter.set_equals_schetchik();
			}
			else if (val == "x")
			{
				std::cout << "Goodbuy!" << std::endl;
				goto stop;
			}
		} while (val != "x");
	stop: break;
	} while (true);

	return 0;
}