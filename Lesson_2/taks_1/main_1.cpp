#include <iostream>

enum class months
{
	exit,
	Январь,
	Февраль,
	Март,
	Апрель,
	Май, 
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
};

int main() {
	setlocale(LC_ALL, "Russian");
	int num_month;

	while (true) {
		std::cout << "Введите номер месяца: ";
		std::cin >> num_month;
		months month = static_cast<months>(num_month);

		if (static_cast<int>(month) == 0) {
			std::cout << "До свидания!";
			break;
		}
		else if (static_cast<int>(month) == 1) {
			std::cout << "Январь";
		}
		else if (static_cast<int>(month) == 2) {
			std::cout << "Февраль";
		}
		else if (static_cast<int>(month) == 3) {
			std::cout << "Март";
		}
		else if (static_cast<int>(month) == 4) {
			std::cout << "Апрель";
		}
		else if (static_cast<int>(month) == 5) {
			std::cout << "Май";
		}
		else if (static_cast<int>(month) == 6) {
			std::cout << "Июнь";
		}
		else if (static_cast<int>(month) == 7) {
			std::cout << "Июль";
		}
		else if (static_cast<int>(month) == 8) {
			std::cout << "Август";
		}
		else if (static_cast<int>(month) == 9) {
			std::cout << "Сентябрь";
		}
		else if (static_cast<int>(month) == 10) {
			std::cout << "Октябрь";
		}
		else if (static_cast<int>(month) == 11) {
			std::cout << "Ноябрь";
		}
		else if (static_cast<int>(month) == 12) {
			std::cout << "Декабрь";
		}
		else {std::cout << "Неправильный номер!";}
		std::cout << std::endl;
	}

	return 0;
}