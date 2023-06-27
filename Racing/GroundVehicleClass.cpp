#pragma once
#include "GroundVehicleClass.h"

GroundVehicle::GroundVehicle()
{
	this->name_ts = "наземное";
	this->speed_ts = 0;
	this->type_ts = 1;
	this->time_before_rest = 0;
	//this->check_ruls(start_game());
}
std::string GroundVehicle::get_name_ts() { return this->name_ts; }

int GroundVehicle::get_speed_ts() { return this->speed_ts; }

int GroundVehicle::get_time_before_rest() { return this->time_before_rest; }

float* GroundVehicle::get_time_rest() { return time_rest; }

//void check_ruls(int num_race)
//{
//	if (num_race == 2)
//	{
//		throw CheckRules("Попытка зарегестрировать неправельный тип ТС!");
//	}
//}

void GroundVehicle::about_me()
{
	std::cout << "Вид ТС: " << this->get_name_ts() << std::endl;
	std::cout << "Скорость ТС: " << this->get_speed_ts() << std::endl;
	std::cout << "Время движения до отдыха ТС: " << this->get_time_before_rest() << std::endl;
}

float* GroundVehicle::arr_time_rest(float num_rest)
{
	return new float[num_rest];
}