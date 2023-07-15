#include "CamelClass.h"



Camel::Camel() : GroundVehicle()
{
	this->name_ts = "Верблюд";
	this->speed_ts = 10;
	this->time_before_rest = 30;
	this->size_arr_time_rest = 2;
	this->time_rest = this->arr_time_rest(size_arr_time_rest);
	this->time_rest[0] = 5.;
	this->time_rest[1] = 8.;
	this->about_me();
}
