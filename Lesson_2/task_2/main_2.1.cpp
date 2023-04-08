#include <iostream>
#include <string>

struct person
{
	int schet;
	std::string first_name;
	float balance;
};

void change_balance(person& your_human) {
	int new_balance;
	person* p_human = &your_human;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> new_balance;
	p_human -> balance = new_balance;
}

int main() {
	setlocale(LC_ALL, "Russian");
	person human;

	std::cout << "¬ведите номер счЄта: ";
	std::cin >> human.schet;

	std::cout << "¬ведите им€ владельца: ";
	std::cin >> human.first_name;

	std::cout << "¬ведите баланс: ";
	std::cin >> human.balance;

	change_balance(human);

	std::cout << "¬аш счЄт: " << human.first_name << " " << human.schet << " " << human.balance << std::endl;
}