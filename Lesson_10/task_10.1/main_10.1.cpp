#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string str;

	std::cout << "������� ���: ";
	std::cin >> str;

	std::cout << "������������, " << str + "!" << std::endl;
}