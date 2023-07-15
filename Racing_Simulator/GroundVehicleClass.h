#pragma once
#include "VehicleClass.h"

class GroundVehicle : public Vehicle
{
public:
	GroundVehicle();

	std::string get_name_ts() override;

	int get_speed_ts() override;

	float* get_time_rest();

	void about_me() override;

	int get_size_arr_time_rest() override;

	float* arr_time_rest(float num_rest);
};
