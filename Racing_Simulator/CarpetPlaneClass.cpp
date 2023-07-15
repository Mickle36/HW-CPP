#include "CarpetPlaneClass.h"

CarpetPlane::CarpetPlane() : AirVehicle()
{
	this->name_ts = "Ковер-самолет";
	this->speed_ts = 10;
	this->about_me();
}

void CarpetPlane::set_coef_air_ts(int distance_race)
{
	if (distance_race < 1000)
	{
		this->coef_air_ts = 1;
	}
	else if (distance_race >= 1000 && distance_race < 5000)
	{
		this->coef_air_ts = static_cast<float>((100 - 3) * 0.01);
	}
	else if (distance_race >= 5000 && distance_race < 10000)
	{
		this->coef_air_ts = static_cast<float>((100 - 10) * 0.01);
	}
	else if (distance_race >=10000)
	{
		this->coef_air_ts= static_cast<float>((100 - 5) * 0.01);
	}
}