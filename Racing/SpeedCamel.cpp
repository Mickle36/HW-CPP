#include "SpeedCamel.h"


SpeedCamel::SpeedCamel() : GroundVehicle()
{
	this->name_ts = "Верблюд быстроход";
	this->speed_ts = 40;
	this->time_before_rest = 10;
	this->time_rest = this->arr_time_rest(3);
	this->time_rest[0] = 5;
	this->time_rest[1] = 6.5;
	this->time_rest[2] = 8;
}