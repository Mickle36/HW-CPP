#include "CamelClass.h"



Camel::Camel() : GroundVehicle()
{
	this->name_ts = "Верблюд";
	this->speed_ts = 10;
	this->time_before_rest = 30;
	this->time_rest = this->arr_time_rest(2);
	this->time_rest[0] = 5;
	this->time_rest[1] = 8;
}
