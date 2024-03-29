#pragma once
#include "RaceClass.h"

Race::Race() 
{
	this->type_race = 0;
	this->distance_race = 0;
	this->schet_choose = 0;
	this->name_type_ts = "";
	this->registed_ts = new int[1] {};
	this->size_registed_ts = 0;
	this->num_schet_choose = 0;
	this->ukaz_to_choosed_ts = new Vehicle * [1] {};
}

void Race::set_type_race(int num_type_race) { this->type_race = num_type_race; }

void Race::set_distance_race(int num_distance_race) { this->distance_race = num_distance_race; }

void Race::set_schet_choose(int num_schet_choose) { this->schet_choose = num_schet_choose; }

void Race::set_schet_choose_1() { this->schet_choose++; }

int Race::get_schet_choose() { return this->schet_choose; }

void Race::set_name_ts(std::string new_name_ts) { this->name_type_ts = new_name_ts; }

std::string Race::get_name_ts() { return this->name_type_ts; }

int Race::get_type_race() { return this->type_race; }

int Race::get_distance_race() { return this->distance_race; }

int Race::get_size_registed_ts() { return this->size_registed_ts; }

void Race::set_num_schet_choose(int your_schet_choose) { this->num_schet_choose = your_schet_choose; }

int Race::get_num_schet_choose() { return this->num_schet_choose; }

void Race::set_registed_ts(int value, Vehicle* ukaz_to_ts)
{
	//this->size_registed_ts = 0;
	int* new_arr = new int[this->size_registed_ts + 1];
	Vehicle** new_ukaz_to_ts = new Vehicle * [this->size_registed_ts + 1];
	if (this->size_registed_ts == 0)
	{
		new_arr[0] = value;
		delete[] this->registed_ts;
		this->registed_ts = new_arr;

		new_ukaz_to_ts[0] = ukaz_to_ts;
		delete[] this->ukaz_to_choosed_ts;
		this->ukaz_to_choosed_ts = new_ukaz_to_ts;
	}
	else if (this->size_registed_ts > 0)
	{
		for (int i = 0; i < this->size_registed_ts; i++)
		{
			new_arr[i] = this->registed_ts[i];

			new_ukaz_to_ts[i] = this->ukaz_to_choosed_ts[i];
		}
		new_arr[this->size_registed_ts] = value;
		delete[] this->registed_ts;
		this->registed_ts = new_arr;

		new_ukaz_to_ts[this->size_registed_ts] = ukaz_to_ts;
		delete[] this->ukaz_to_choosed_ts;
		this->ukaz_to_choosed_ts = new_ukaz_to_ts;
	}
	this->size_registed_ts++;
}

int* Race::get_registed_ts() { return this->registed_ts; }

Vehicle** Race::get_ukaz_to_choosed_ts() { return ukaz_to_choosed_ts; }

Race::~Race()
{
	delete this->registed_ts;
	delete this->ukaz_to_choosed_ts;
}