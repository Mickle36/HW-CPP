#include <iostream>

void add(int a, int b)
{
	std::cout << "��������� ��������: " << a + b << std::endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	
#define MODE 6

#if MODE == 0
	
	std::cout << "������� � ������ ����������" << std::endl;

#elif MODE == 1

	int a, b;
	std::cout << "������� � ������ ������" << std::endl;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������� ����� 2: ";
	std::cin >> b;

	add(a, b);

#else
	std::cout << "����������� �����. ���������� ������" << std::endl;

#endif
}