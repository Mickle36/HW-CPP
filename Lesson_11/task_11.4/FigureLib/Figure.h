#pragma once
#include <string>
#include <iostream>

#ifdef LEAVERLIBRARYDYNAMIC_EXPORT
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif // LEAVERLIBRARYDYNAMIC_EXPORT

class Figure
{
protected:
	int sides;
	std::string name_fig;
public:
	LEAVERLIBRARY_API Figure();

	LEAVERLIBRARY_API int get_sides();

	LEAVERLIBRARY_API std::string get_name_fig();

	LEAVERLIBRARY_API virtual void about_me();
};