#pragma once
#include "VehicleClass.h"

class GroundVehicle : public Vehicle
{
protected:
	int time_before_rest;
public:
	GroundVehicle();
	std::string get_name_ts();

	int get_speed_ts();

	int get_time_before_rest();

	float* get_time_rest();

	//void check_ruls(int num_race)
	//{
	//	if (num_race == 2)
	//	{
	//		throw CheckRules("Попытка зарегестрировать неправельный тип ТС!");
	//	}
	//}

	void about_me() override;

	float* arr_time_rest(float num_rest);
};
