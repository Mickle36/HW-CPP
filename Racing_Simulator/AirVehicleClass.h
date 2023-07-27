#pragma once
#include "VehicleClass.h"

class AirVehicle: public Vehicle
{
public:
	AirVehicle();

	void about_me() override;
};