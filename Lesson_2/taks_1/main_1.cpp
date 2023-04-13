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

		if (month == months::exit) {
			std::cout << "До свидания!";
			break;
		}
		else if (month == months::Январь) {
			std::cout << "Январь";
		}
		else if (month == months::Февраль) {
			std::cout << "Февраль";
		}
		else if (month == months::Март) {
			std::cout << "Март";
		}
		else if (month == months::Апрель) {
			std::cout << "Апрель";
		}
		else if (month == months::Май) {
			std::cout << "Май";
		}
		else if (month == months::Июнь) {
			std::cout << "Июнь";
		}
		else if (month == months::Июль) {
			std::cout << "Июль";
		}
		else if (month == months::Август) {
			std::cout << "Август";
		}
		else if (month == months::Сентябрь) {
			std::cout << "Сентябрь";
		}
		else if (month == months::Октябрь) {
			std::cout << "Октябрь";
		}
		else if (month == months::Ноябрь) {
			std::cout << "Ноябрь";
		}
		else if (month == months::Декабрь) {
			std::cout << "Декабрь";
		}
		else {std::cout << "Неправильный номер!";}
		std::cout << std::endl;
	}

	return 0;
}