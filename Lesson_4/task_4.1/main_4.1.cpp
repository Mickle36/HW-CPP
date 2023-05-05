#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

class Address
{
protected:
	std::string city;
	std::string street;
	int num_house;
	int num_appart;

public:
	Address() {}

	void set_city(std::string value)
	{
		city = value;
	}

	void set_street(std::string value)
	{
		street = value;
	}

	void set_num_house(int value)
	{
		num_house = value;
	}

	void set_num_apparte(int value)
	{
		num_appart = value;
	}

	std::string get_city()
	{
		return city;
	}

	std::string get_street()
	{
		return street;
	}

	int get_num_house()
	{
		return num_house;
	}

	int get_num_apparte()
	{
		return num_appart;
	}
};

int main()
{
	int N;
	std::string value;
	std::ifstream fin("in.txt");
	fin >> N;
	Address* new_country = new Address[N];
	std::ofstream fout("out.txt");
	fout << N << "\n";

	for (int row = 0; row < N; row++)
	{
		fin >> value;
		new_country[row].set_city(value);
		fin >> value;
		new_country[row].set_street(value);
		fin >> value;
		new_country[row].set_num_house(stoi(value));
		fin >> value;
		new_country[row].set_num_apparte(stoi(value));
	}

	for (int i = N - 1; i >= 0; i--)
	{
		fout << new_country[i].get_city() << ", ";
		fout << new_country[i].get_street() << ", ";
		fout << new_country[i].get_num_house() << ", ";
		fout << new_country[i].get_num_apparte() << std::endl;
	}

	delete[] new_country;
	fin.close();
	fout.close();

	return 0;
}