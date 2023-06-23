#include <iostream>
#include <string>
#include <stdio.h>
#include <stdarg.h>
#include <Windows.h>
#include <stdlib.h>

//#include "main_lib.h"

//class CheckRules : public std::exception
//{
//protected:
//	std::string message;
//
//public:
//	CheckRules(const std::string& message) : message(message) {};
//	const char* what() const override
//	{
//		return message.c_str();
//	};
//};

class Race
{
protected:
	int type_ts = 0;
	int distance_race = 0;
	int schet_choose = 0;
	std::string name_ts = "";
	int* registed_ts = new int [1];
	int size_registed_ts = 0;
public:
	Race(){	}
	void set_type_ts(int num_type_ts) { this->type_ts = num_type_ts; }

	void set_distance_race(int num_distance_race) { this->distance_race = num_distance_race; }

	void set_schet_choose(int num_schet_choose) { this->schet_choose = num_schet_choose; }

	void set_schet_choose_1() { this->schet_choose++; }

	int get_schet_choose() { return this->schet_choose; }
	
	void set_name_ts(std::string new_name_ts) { this->name_ts = new_name_ts; }

	std::string get_name_ts() { return this->name_ts; }

	int get_type_ts() { return this->type_ts; }

	int get_distance_race() { return this->distance_race; }

	int get_size_registed_ts() { return this->size_registed_ts; }

	void set_registed_ts(int value)
	{
		int* new_arr = new int[size_registed_ts + 1];
		if (this->size_registed_ts == 0)
		{
			new_arr[0] = value;
			delete[] this->registed_ts;
			this->registed_ts = new_arr;
		}
		else if (this->size_registed_ts > 0)
		{
			for (int i = 0; i < this->size_registed_ts; i++)
			{
				new_arr[i] = this->registed_ts[i];
				std::cout << registed_ts[i] << std::endl;
			}
			new_arr[this->size_registed_ts] = value;
			delete[] this->registed_ts;
			this->registed_ts = new_arr;
		}		
		this->size_registed_ts++;
	}

	int* get_registed_ts() { return this->registed_ts; }

	void about_me()
	{
		std::cout << "Тип ТС: " << this->type_ts << std::endl;
		std::cout << "Дистанция трассы: " << this->distance_race << std::endl;
	}
};

class Vehicle
{
protected:
	std::string name_ts ="";
	int type_ts;
	int speed_ts;
	float* time_rest;
public:
	Vehicle() {}
	void set_name_ts(std::string your_name_ts) { this->name_ts = name_ts; }

	~Vehicle()
	{
		//int arr_size = sizeof(this->time_rest) / sizeof(time_rest[0]);
		std::cout << "Я деструктор ТС: " << this->name_ts << std::endl;
		/*for (int i = 0; i < arr_size; i++)
		{
			std::cout << time_rest[i] << "\n" << std::endl;
		}*/

		delete[] time_rest;
	}
};

class GroundVehicle : public Vehicle
{
protected:
	int time_before_rest;
public:
	GroundVehicle()
	{
		this->name_ts = "наземное";
		this->speed_ts = 0;
		this->type_ts = 1;
		this->time_before_rest = 0;
		//this->check_ruls(start_game());
	}
	std::string get_name_ts() { return this->name_ts; }

	int get_speed_ts() { return this->speed_ts; }

	int get_time_before_rest() { return this->time_before_rest; }

	float* get_time_rest() { return time_rest; }

	//void check_ruls(int num_race)
	//{
	//	if (num_race == 2)
	//	{
	//		throw CheckRules("Попытка зарегестрировать неправельный тип ТС!");
	//	}
	//}

	void about_me()
	{
		std::cout << "Скорость ТС: " << this->get_speed_ts() << std::endl;
		std::cout << "Время движения до отдыха ТС: " << this->get_time_before_rest() << std::endl;
		std::cout << "Вид ТС: " << this->get_name_ts() << std::endl;
	}

	float* arr_time_rest(float num_rest)
	{
		return new float[num_rest];
	}
};

class Camel : public GroundVehicle
{
public:
	Camel() : GroundVehicle()
	{
		this->name_ts = "Верблюд";
		this->speed_ts = 10;
		this->time_before_rest = 30;
		this->time_rest = this->arr_time_rest(2);
		this->time_rest[0] = 5;
		this->time_rest[1] = 8;
	}
};

class SpeedCamel : public GroundVehicle
{
public:
	SpeedCamel() : GroundVehicle()
	{
		this->name_ts = "Верблюд быстроход";
		this->speed_ts = 40;
		this->time_before_rest = 10;
		this->arr_time_rest(3);
		this->time_rest[0] = 5;
		this->time_rest[1] = 6.5;
		this->time_rest[2] = 8;
	}
};

GroundVehicle* add_GroundVehicle()
{	
	return new GroundVehicle;
}

Race start_game()
{
	Race new_race;
	int type_race;
	int distance_race;
	std::cout << "\nДобро пожаловать в гоночный симулятор!" << std::endl;
	std::cout << "1. Гонка для наземнго транспорта" << std::endl;
	std::cout << "2. Гонка для воздушного транспорта" << std::endl;
	std::cout << "3. Гонка для наземнго и воздушного транспорта" << std::endl;
	std::cout << "Выберите тип гонки: ";
	std::cin >> type_race;
	new_race.set_type_ts(type_race);
	if (type_race == 1) { new_race.set_name_ts("наземного"); }
	else if (type_race == 2) { new_race.set_name_ts("воздушного"); }
	else if (type_race == 3) { new_race.set_name_ts("наземнго и воздушного"); }

	std::cout << "Укажите длину дистанции (должна быть положительна): ";
	std::cin >> distance_race;
	new_race.set_distance_race(distance_race);

	Sleep(1);
	std::system("cls");

	return new_race;
}

int schet_choose(Race* on_class)
{
	int num_choose;
	if (on_class->get_schet_choose() < 2)
	{
		loop1:
		std::cout << "Должно быть зарегестрировано как минимум 2 ТС\n";
		std::cout << "1. Зарегестрировать транспорт\n";
		std::cout << "Выбирите действие: ";
		std::cin >> num_choose;
		if(num_choose != 1)
		{
			system("cls");
			std::cout << "Неправельное действие\n";
			goto loop1;
		}
	}
	else
	{
		loop2:
		std::cout << "1. Зарегестрировать транспорт\n";
		std::cout << "2. Начать гонку\n";
		std::cout << "Выбирите действие: ";
		std::cin >> num_choose; 
		if ((num_choose != 1) && (num_choose != 2))
		{
			system("cls");
			std::cout << "Неправельное действие\n";
			goto loop2;
		}
	}
	Sleep(1);
	std::system("cls");

	return num_choose;
}

bool check_retry_ts(Race* on_class, int num_choose)
{
	int* check_arr = on_class->get_registed_ts();

	if (num_choose == 0) { return false; }

	for (int i = 0; i < on_class->get_size_registed_ts(); i++)
	{
		if (num_choose == check_arr[i]) { return false; }
	}
	return true;
}

void choose_ts(Race* on_class)
{
	int num_choose;
	bool chek_choose;
	loop:
	std::cout << "Гонка для " + on_class->get_name_ts() + " транспорта. Расстояние: " << on_class->get_distance_race() << std::endl;
	std::cout << "1. Ботинки-вездеходы\n";
	std::cout << "2. Метла\n";
	std::cout << "3. Верблюд\n";
	std::cout << "4. Кентавр\n";
	std::cout << "5. Орел\n";
	std::cout << "6. Верблюд-быстроход\n";
	std::cout << "7. Ковер-самолет\n";
	std::cout << "0. Закончить регистрацию\n";
	std::cout << "Выбирете транспорт или 0 для окончания процесса регистрации: ";
	std::cin >> num_choose;

	chek_choose = check_retry_ts(on_class, num_choose);
	if (chek_choose)
	{
		on_class->set_registed_ts(num_choose);
	}
	else
	{
		switch (num_choose)
		{
		case 1:
			std::system("cls");
			std::cout << "Ботинки-вездеходы уже зарегестрирован!\n";
			goto loop;
			break;
		case 2:
			std::system("cls");
			std::cout << "Метла уже зарегестрирован!\n";
			goto loop;
			break;
		case 3:
			std::system("cls");
			std::cout << "Верблюд уже зарегестрирован!\n";
			goto loop;
			break;
		case 4:
			std::system("cls");
			std::cout << "Кентавр уже зарегестрирован!\n";
			goto loop;
			break;
		case 5:
			std::system("cls");
			std::cout << "Орел уже зарегестрирован!\n";
			goto loop;
			break;
		case 6:
			std::system("cls");
			std::cout << "Верблюд-быстроход уже зарегестрирован!\n";
			goto loop;
			break;
		case 7:
			std::system("cls");
			std::cout << "Ковер-самолет уже зарегестрирован!\n";
			goto loop;
			break;
		case 0:
			std::system("cls");
			schet_choose(on_class);
			break;
		default:
			std::system("cls");
			std::cout << "!\n";
			goto loop;
			break;
		}
	}
	Sleep(1);
	std::system("cls");
}



void add_ts(Race* on_class)
{
	int num_ts = schet_choose(on_class);

	int* new_arr;	

	while (true)
	{
		if (on_class->get_type_ts() == 1)
		{
			choose_ts(on_class);
		}

		if (num_ts == 0)
		{
			schet_choose(on_class);
		}
		else if (on_class->get_schet_choose() == 5)
		{
			break;
		}
		on_class->set_schet_choose_1();
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Race race;
	race = start_game();

	add_ts(&race);

}