#pragma once
#include "VehicleClass.h"

class Race
{
protected:
	int type_race;
	int distance_race;
	int schet_choose;
	std::string name_type_ts;
	int* registed_ts;
	int size_registed_ts;
	int num_schet_choose;
	Vehicle** ukaz_to_choosed_ts;

public:
	Race();
	void set_type_race(int num_type_race);

	void set_distance_race(int num_distance_race);

	void set_schet_choose(int num_schet_choose);

	void set_schet_choose_1();

	int get_schet_choose();

	void set_name_ts(std::string new_name_ts);

	std::string get_name_ts();

	int get_type_race();

	int get_distance_race();

	int get_size_registed_ts();

	void set_num_schet_choose(int your_schet_choose);

	int get_num_schet_choose();

	void set_registed_ts(int value, Vehicle* ukaz_to_ts);

	int* get_registed_ts();

	Vehicle** get_ukaz_to_choosed_ts();

	~Race();
};