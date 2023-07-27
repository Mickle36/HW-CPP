#pragma once
#include "AirVehicleClass.h"

class Eagle : public AirVehicle
{
public:
	Eagle();

	void set_coef_air_ts(int distance_race) override;
};