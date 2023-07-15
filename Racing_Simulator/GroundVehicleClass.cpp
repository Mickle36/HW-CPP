#pragma once
#include "GroundVehicleClass.h"

GroundVehicle::GroundVehicle()
{
	this->name_ts = "наземное";
	this->speed_ts = 0;
	this->type_ts = 1;
	this->time_before_rest = 0;
	this->size_arr_time_rest = 0;
}

std::string GroundVehicle::get_name_ts() { return this->name_ts; }

int GroundVehicle::get_speed_ts() { return this->speed_ts; }

float* GroundVehicle::get_time_rest() { return time_rest; }

void GroundVehicle::about_me()
{
	std::cout << this->name_ts << " успешно зарегестрирован!" << std::endl;
}

int GroundVehicle::get_size_arr_time_rest() { return this->size_arr_time_rest; }

float* GroundVehicle::arr_time_rest(float num_rest)
{
	return new float[num_rest];
}