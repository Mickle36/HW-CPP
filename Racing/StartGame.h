#pragma once
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <Windows.h>
#include <stdlib.h>
#include "RaceClass.h"
#include "VehicleClass.h"
#include "RaceClass.h"
#include "GroundVehicleClass.h"
#include "CamelClass.h"
#include "SpeedCamelClass.h"
#include "AllTerrainBootsClass.h"
#include "CentaurClass.h"

Race choose_ts();

void schet_choose(Race* on_class);

bool check_retry_ts(Race* on_class, int num_choose);

void choose_ts(Race* on_class);

void add_ts(Race* on_class);

void ground_ts(Race* on_class, int num_choose);

void air_ts(Race* on_class, int num_choose);

void new_game(Race* on_class);

void start_game();