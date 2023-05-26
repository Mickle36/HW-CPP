#include <iostream>
#include <string>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
	if (str.length() == forbidden_length)
	{
		throw std::runtime_error("�� ����� ����� ��������� �����! �� ��������");
	}
	else
	{
		return str.length();
	}
}

int main()
{
	int forbidden_length;
	std::string str;
	int LengthResult;

	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "������� ��������� �����: ";
	std::cin >> forbidden_length;

	while (true)
	{
		try
		{
			std::cout << "������� �����: ";
			std::cin >> str;

			LengthResult = function(str, forbidden_length);

			std::cout << "����� ����� \"" + str + "\" ����� " << str.length() << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
			break;
		}
	}

	return 0;
}