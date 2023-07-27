#include "EagleClass.h"

Eagle::Eagle() : AirVehicle()
{
    this->name_ts = "Орел";
    this->speed_ts = 8;
    this->about_me();
}

void Eagle::set_coef_air_ts(int distance_race)
{
    this->coef_air_ts = floor(0.94 * 100) / 100;
}
