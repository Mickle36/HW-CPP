#include "VehicleClass.h"

Vehicle::Vehicle() {}
	void Vehicle::set_name_ts(std::string your_name_ts) { this->name_ts = name_ts; }

	std::string Vehicle::get_name_ts() { return this->name_ts; }

	int Vehicle::get_speed_ts() { return this->speed_ts; }

	float* Vehicle::get_time_rest() { return this->time_rest; }

	int Vehicle::get_time_before_rest() { return this->time_before_rest; }

	void Vehicle::about_me()
	{
		std::cout << "�������� ��: " << this->speed_ts << std::endl;
		std::cout << "��� ��: " << this->name_ts << std::endl;
	}

	int Vehicle::get_size_arr_time_rest() { return 0; }

	float Vehicle::get_coef_air_ts() { return this->coef_air_ts; }

	void Vehicle::set_coef_air_ts(int distance_race) {}

	int Vehicle::get_type_ts() { return this->type_ts; }

Vehicle::~Vehicle()
	{
		delete time_rest;
	}