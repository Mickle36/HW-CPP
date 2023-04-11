#include <iostream>
#include <string>

class Counter
{
protected:
	int schetchik;
	std::string value;

public:

	Counter()
	{
		schetchik = 0;
		value = "";
	}

	void set_schetchik()
	{
		int schet;

		if (value == "yes")
		{
			std::cout << "Enter the initial value of the counter: ";
			std::cin >> schet;
			schetchik = schet;
		}
		else if (value == "no")
		{
			std::cout << "Counter value: " << schetchik << std::endl;
		}
		else
		{
			std::cout << "Error! repeated question..." << std::endl;
		}
	}

	void your_value(std::string val)
	{
		value = val;
	}

	void effect(std::string val)
	{
		if (val == "+")
		{
			schetchik++;
		}
		else if (val == "-")
		{
			schetchik--;
		}
		else if (val == "=")
		{
			std::cout << "Counter value: " << schetchik << std::endl;
		}
		else if (val == "x")
		{
			std::cout << "Goodbuy!" << std::endl;
		}
	}

	bool bool_val(std::string val)
	{
		if (val == "yes")
		{
			return true;
		}
		else if (val == "no")
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	std::string val;
	bool bool_value = false;


	Counter new_Counter;

	do {
		while (bool_value == false)
		{
			std::cout << "Do you want to specify the initial value of the counter ? Enter yes or no : ";
			std::cin >> val;
			new_Counter.your_value(val);
			new_Counter.set_schetchik();
			bool_value = new_Counter.bool_val(val);
		}
		do {
			std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
			std::cin >> val;
			new_Counter.effect(val);
		} while (val != "x");
		if (val == "x") { break; }
	} while (true);

	return 0;
}