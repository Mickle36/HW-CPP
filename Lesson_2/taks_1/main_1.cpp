#include <iostream>

enum class months
{
	exit,
	������,
	�������,
	����,
	������,
	���, 
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������
};

int main() {
	setlocale(LC_ALL, "Russian");
	int num_month;

	while (true) {
		std::cout << "������� ����� ������: ";
		std::cin >> num_month;
		months month = static_cast<months>(num_month);

		if (month == months::exit) {
			std::cout << "�� ��������!";
			break;
		}
		else if (month == months::������) {
			std::cout << "������";
		}
		else if (month == months::�������) {
			std::cout << "�������";
		}
		else if (month == months::����) {
			std::cout << "����";
		}
		else if (month == months::������) {
			std::cout << "������";
		}
		else if (month == months::���) {
			std::cout << "���";
		}
		else if (month == months::����) {
			std::cout << "����";
		}
		else if (month == months::����) {
			std::cout << "����";
		}
		else if (month == months::������) {
			std::cout << "������";
		}
		else if (month == months::��������) {
			std::cout << "��������";
		}
		else if (month == months::�������) {
			std::cout << "�������";
		}
		else if (month == months::������) {
			std::cout << "������";
		}
		else if (month == months::�������) {
			std::cout << "�������";
		}
		else {std::cout << "������������ �����!";}
		std::cout << std::endl;
	}

	return 0;
}