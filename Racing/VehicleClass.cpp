#include "VehicleClass.h"

Vehicle::Vehicle() {}
	void Vehicle::set_name_ts(std::string your_name_ts) { this->name_ts = name_ts; }
	void Vehicle::about_me()
	{
		std::cout << "Скорость ТС: " << this->speed_ts << std::endl;
		std::cout << "Вид ТС: " << this->name_ts << std::endl;
	}

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