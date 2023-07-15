#include "BroomClass.h"

Broom::Broom() : AirVehicle()
{
	this->name_ts = "Метла";
	this->speed_ts = 20;
	this->about_me();
}

void Broom::set_coef_air_ts(int distance_race)
{
	this->coef_air_ts = static_cast<float>((100 - (distance_race / 1000)) * 0.01);
}
