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
	std::cout << "������� ����� ������: ";
	std::cin >> new_balance;
	p_human -> balance = new_balance;
}

int main() {
	setlocale(LC_ALL, "Russian");
	person human;

	std::cout << "������� ����� �����: ";
	std::cin >> human.schet;

	std::cout << "������� ��� ���������: ";
	std::cin >> human.first_name;

	std::cout << "������� ������: ";
	std::cin >> human.balance;

	change_balance(human);

	std::cout << "��� ����: " << human.first_name << " " << human.schet << " " << human.balance << std::endl;
}