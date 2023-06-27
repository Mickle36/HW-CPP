#pragma once
#include <iostream>

class Vehicle
{
protected:
	std::string name_ts;
	int type_ts;
	int speed_ts;
	float* time_rest;
public:
	Vehicle();
	void set_name_ts(std::string your_name_ts);
	virtual void about_me();
	//~Vehicle();
};