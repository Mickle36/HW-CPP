#include <iostream>

void add(int a, int b)
{
	std::cout << "Результат сложения: " << a + b << std::endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	
#define MODE 6

#if MODE == 0
	
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1

	int a, b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;

	add(a, b);

#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;

#endif
}