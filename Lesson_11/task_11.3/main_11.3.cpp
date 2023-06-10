#include <iostream>
#include "Leave_cls.h"
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);

	std::string str;
	Leaver new_leave;

	std::cout << "¬ведите им€: ";
	std::cin >> str;

	new_leave.leave(str);

	system("pause");

	return 0;
}