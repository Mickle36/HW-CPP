#pragma once
#include <iostream>

class Vehicle
{
protected:
	std::string name_ts;
	int type_ts;
	int speed_ts;
	int size_arr_time_rest;
	int time_before_rest;
	float* time_rest;
public:
	Vehicle();

	void set_name_ts(std::string your_name_ts);

	virtual std::string get_name_ts();

	virtual int get_speed_ts();

	virtual	int get_time_before_rest();

	virtual float* get_time_rest();

	virtual void about_me();

	virtual int get_size_arr_time_rest();
	//~Vehicle();
};