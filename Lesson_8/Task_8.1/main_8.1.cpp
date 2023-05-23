#include <iostream>
#include <string>
#include <Windows.h>

enum class StringLength { CorrectLength, BadLength};

StringLength function(std::string str, int forbidden_length)
{
	if (str.length() != forbidden_length)
	{
		return StringLength::CorrectLength;
	}
	else if (str.length() == forbidden_length)
	{
		return StringLength::BadLength;
	}
}

int main()
{
	int forbidden_length;
	std::string str;

	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "������� ��������� �����: ";
	std::cin >> forbidden_length;

	while (true)
	{
		std::cout << "������� �����: ";
		std::cin >> str;

		StringLength LengthResult = function(str, forbidden_length);

		if (LengthResult == StringLength::CorrectLength)
		{
			std::cout << "����� ����� \"" + str + "\" ����� " << str.length() << std::endl;
		}
		else if (LengthResult == StringLength::BadLength)
		{
			std::cout << "�� ����� ����� ��������� �����! �� ��������" << std::endl;
			break;
		}
	}

	return 0;
}