#pragma
#include "AirVehicleClass.h"

class Broom : public AirVehicle
{
public:
	Broom();
	
	void set_coef_air_ts(int distance_race) override;

};