#include "CentaurClass.h"

Centaur::Centaur(): GroundVehicle()
{
	this->name_ts = "Кентавр";
	this->speed_ts = 15;
	this->time_before_rest = 8;
	this->size_arr_time_rest = 1;
	this->time_rest = this->arr_time_rest(size_arr_time_rest);
	this->time_rest[0] = 2.;
	this->about_me();
}
