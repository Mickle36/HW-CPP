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

		if (static_cast<int>(month) == 0) {
			std::cout << "�� ��������!";
			break;
		}
		else if (static_cast<int>(month) == 1) {
			std::cout << "������";
		}
		else if (static_cast<int>(month) == 2) {
			std::cout << "�������";
		}
		else if (static_cast<int>(month) == 3) {
			std::cout << "����";
		}
		else if (static_cast<int>(month) == 4) {
			std::cout << "������";
		}
		else if (static_cast<int>(month) == 5) {
			std::cout << "���";
		}
		else if (static_cast<int>(month) == 6) {
			std::cout << "����";
		}
		else if (static_cast<int>(month) == 7) {
			std::cout << "����";
		}
		else if (static_cast<int>(month) == 8) {
			std::cout << "������";
		}
		else if (static_cast<int>(month) == 9) {
			std::cout << "��������";
		}
		else if (static_cast<int>(month) == 10) {
			std::cout << "�������";
		}
		else if (static_cast<int>(month) == 11) {
			std::cout << "������";
		}
		else if (static_cast<int>(month) == 12) {
			std::cout << "�������";
		}
		else {std::cout << "������������ �����!";}
		std::cout << std::endl;
	}

	return 0;
}