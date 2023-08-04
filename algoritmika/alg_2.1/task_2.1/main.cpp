#include <iostream>
#include <Windows.h>

int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n <= 2) 
	{
		return 1;
	}
	else 
	{
		return fib(n - 1) + fib(n - 2);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	int schet = 0;

	int your_num = 0;
	std::cout << "Введите число, для которого произвести рекурсивный подсчёт чисел Фибоначчи: ";
	std::cin >> your_num;

	std::cout << "Для числа " << your_num << ": ";
	
	for (int i = your_num; i > 0; i--)
	{
		schet += fib(your_num);
		your_num--;
	}
	std::cout << schet << std::endl;
}