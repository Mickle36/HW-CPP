cmake_minimum_required(VERSION 3.22.0)
project(FigureProject)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(FigureDynamicLib SHARED main_lib.h main_lib.cpp Triangle.h Triangle.cpp IsoscelesTriangle.h IsoscelesTriangle.cpp EquilateralTriangle.h EquilateralTriangle.cpp RightTriangle.h RightTriangle.cpp
Quadrilateral.h Quadrilateral.cpp Rectangle.h Rectangle.cpp Square.h Square.cpp Parallelogram.h Parallelogram.cpp Rhombus.h Rhombus.cpp Figure.h Figure.cpp)
add_executable(FigureExe main_11.5.cpp)
target_link_libraries(FigureExe FigureDynamicLib)