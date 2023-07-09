#include "VehicleClass.h"

Vehicle::Vehicle() {}
	void Vehicle::set_name_ts(std::string your_name_ts) { this->name_ts = name_ts; }

	std::string Vehicle::get_name_ts() { return this->name_ts; }

	int Vehicle::get_speed_ts() { return this->speed_ts; }

	float* Vehicle::get_time_rest() { return this->time_rest; }

	int Vehicle::get_time_before_rest() { return this->time_before_rest; }

	void Vehicle::about_me()
	{
		std::cout << "Скорость ТС: " << this->speed_ts << std::endl;
		std::cout << "Вид ТС: " << this->name_ts << std::endl;
	}

	int Vehicle::get_size_arr_time_rest() { return 0; }

//Vehicle::~Vehicle()
//	{
//		//int arr_size = sizeof(this->time_rest) / sizeof(time_rest[0]);
//		std::cout << "Я деструктор ТС: " << this->name_ts << std::endl;
//		/*for (int i = 0; i < arr_size; i++)
//		{
//			std::cout << time_rest[i] << "\n" << std::endl;
//		}*/
//
//		delete[] time_rest;
//	}