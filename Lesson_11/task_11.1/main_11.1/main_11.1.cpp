#include <iostream>
#include "Greeter_cls.h"
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string str;
	std::cout << "Введите имя: ";
	std::cin >> str;

	Greeter new_greet;
	new_greet.greet(str);

	system("pause");
	return 0;
}