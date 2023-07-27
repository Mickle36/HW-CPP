cmake_minimum_required(VERSION 3.22.0)
project(FigureProject)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(RacingSimDynLib SHARED StartGame.h StartGame.cpp AirVehicleClass.h AirVehicleClass.cpp AllTerrainBootsClass.h AllTerrainBootsClass.cpp BroomClass.h BroomClass.cpp CamelClass.h CamelClass.cpp
CarpetPlaneClass.h CarpetPlaneClass.cpp CentaurClass.h CentaurClass.cpp EagleClass.h EagleClass.cpp GroundVehicleClass.h GroundVehicleClass.cpp RaceClass.h RaceClass.cpp SpeedCamelClass.h SpeedCamelClass.cpp
VehicleClass.h VehicleClass.cpp)
add_executable(RacingSimulatorExe main.cpp)
target_link_libraries(RacingSimulatorExe RacingSimDynLib)