#include <iostream>

class Calculator
{
protected:
	double num1;
	double num2;

public:
	Calculator(double num1, double num2) 
	{
		this->num1 = num1;
		this->num2 = num2;
	}

	void double_add() {
		std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
	}

	void double_multiply() {
		std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
	}

	void double_subtract_1_2() {
		std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
	}

	void double_subtract_2_1() {
		std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
	}

	void double_divide_1_2() {
		std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
	}

	void double_divide_2_1() {
		std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
	}

	bool set_num1(double num1_) {
		if (num1_ == 0) {
			return false;
		}
		else {
			num1 = num1_;
			return true; }		
	}
	bool set_num2(double num2_) {
		if (num2_ == 0) {
			return false;
		}
		else {
			num2 = num2_;
			return true;
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	double num1;
	double num2;
	

	do {
		bool bool_num1 = false;
		bool bool_num2 = false;
		std::cout << "Введите num1: ";
		std::cin >> num1;
		std::cout << "Введите num2: ";
		std::cin >> num2;			
		
		Calculator new_cal(num1, num2);
		while ((bool_num1 == false) || (bool_num2 == false)) {
			bool_num1 = new_cal.set_num1(num1);
			bool_num2 = new_cal.set_num2(num2);			
			
			if (new_cal.set_num1(num1) == false) {
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num1: ";
				std::cin >> num1;
			}
			else if (new_cal.set_num2(num2) == false) {
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num2: ";
				std::cin >> num2;
			}
			else {
				new_cal.double_add();
				new_cal.double_divide_1_2();
				new_cal.double_divide_2_1();
				new_cal.double_multiply();
				new_cal.double_subtract_1_2();
				new_cal.double_subtract_2_1();
				std::cout << std::endl;
				break;
			}
		}

		
	} while (true);	

	return 0;
}