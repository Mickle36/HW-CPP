#include "AllTerrainBootsClass.h"

AllTerrainBoots::AllTerrainBoots() : GroundVehicle()
{
	this->name_ts = "Ботинки-вездеходы";
	this->speed_ts = 6;
	this->time_before_rest = 60;
	this->time_rest = this->arr_time_rest(2);
	this->time_rest[0] = 10;
	this->time_rest[1] = 5;
}
