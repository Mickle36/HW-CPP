#include <iostream>
#include <string>
#include "StartGame.h"

//#include "main_lib.h"

//class CheckRules : public std::exception
//{
//protected:
//	std::string message;
//
//public:
//	CheckRules(const std::string& message) : message(message) {};
//	const char* what() const override
//	{
//		return message.c_str();
//	};
//};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Race race;
	race = choose_ts();

	add_ts(&race);

	Vehicle** new_ukaz = race.get_ukaz_to_choosed_ts();

	for (int i = 0; i < 4; i++)
	{
		new_ukaz[i]->about_me();
	}
}