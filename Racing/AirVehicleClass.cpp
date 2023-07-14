#include "AirVehicleClass.h"

AirVehicle::AirVehicle()
{
	this->name_ts = "воздушное";
	this->speed_ts = 0;
	this->type_ts = 2;
	this->coef_air_ts = 0;
}

void AirVehicle::about_me()
{
	std::cout << this->name_ts << " успешно зарегестрирован!" << std::endl;
}
