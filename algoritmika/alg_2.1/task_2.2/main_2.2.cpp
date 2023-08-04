#include <iostream>
#include <Windows.h>



int fib(int n, int* arr_fib)
{
	for (int i = n - 1; i > 0; i--)
	{
		if (n < i)
		{
			return arr_fib[i];
		}
		else if (n == 0)
		{
			return 0;
		}
		else if (n <= 2)
		{
			return 1;
		}
		else
		{
			return fib(n - 1, arr_fib) + fib(n - 2, arr_fib);
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	int schet = 0;
	int num_of_fib = 0;

	int your_num = 0;
	std::cout << "Введите число, для которого произвести рекурсивный подсчёт чисел Фибоначчи: ";
	std::cin >> your_num;

	int* arr_sum_buffer = new int [your_num] {};
	int* arr_sum_fib = new int [your_num] {};

	std::cout << std::endl;
	for (int i = your_num; i > 0; i--)
	{
		num_of_fib = fib(i, arr_sum_buffer);
		schet += num_of_fib;
		arr_sum_buffer[i - 1] = schet;
		//std::cout << arr_sum_buffer[i - 1] << "\t";
	}
	std::cout << std::endl << std::endl;

	for (int t = 0; t < your_num;)
	{
		for (int j = your_num - 1; j >= 0; j--)
		{
			arr_sum_fib[t] = arr_sum_buffer[j];
			t++;
		}
	}

	
	for (int j = 0; j < your_num; j++)
	{
		std::cout << arr_sum_fib[j] << "\t";
	}
		std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Для числа " << your_num << ": " << schet << std::endl;

	delete[] arr_sum_buffer;
}