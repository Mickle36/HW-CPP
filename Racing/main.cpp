#include <iostream>
#include <string>
#include <stdio.h>
#include <stdarg.h>

class Vehicle
{
protected:
	std::string name_ts;
	int type_ts;
	int speed_ts;
public:
	Vehicle() {}
};

class GroundVehicle : public Vehicle
{
protected:
	int time_before_rest;
	double* time_rest;
public:
	GroundVehicle()
	{
		this->name_ts = "наземное";
		this->speed_ts = 0;
		this->type_ts = 1;
		this->time_before_rest = 0;
	}
	std::string get_name_ts() { return this->name_ts; }

	int get_speed_ts() { return this->speed_ts; }

	int get_time_before_rest() { return this->time_before_rest; }

	void about_me()
	{
		std::cout << "Вид ТС: " << this->get_name_ts() << std::endl;
		std::cout << "Скорость ТС: " << this->get_speed_ts() << std::endl;
		std::cout << "Время движения до отдыха ТС: " << this->get_time_before_rest() << std::endl;
	}

	//~GroundVehicle()
	//{
	//	delete[] this->time_rest;
	//}
	void arr_time_rest(double num_rest)
	{
		this->time_rest = new double[num_rest];
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
		this->arr_time_rest(2);
		this->time_rest[0] = 5;
		this->time_rest[2] = 8;
	}

	~Camel()
	{
		delete[] this->time_rest;
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

	//~SpeedCamel()
	//{
	//	delete[] this->time_rest;
	//}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Camel camel;

	camel.about_me();

	return 0;
}