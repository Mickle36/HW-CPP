#pragma once
#include "AirVehicleClass.h"

class CarpetPlane : public AirVehicle
{
public:
	CarpetPlane();

	void set_coef_air_ts(int distance_race) override;
};