#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

class Address
{
protected:
	std::string* city;
	std::string* street;
	int* num_house;
	int* num_appart;

public:
	Address(int N) 
	{
		this->city = new std::string[N];
		this->street = new std::string[N];
		this->num_house = new int[N];
		this->num_appart = new int[N];
	}

	void set_city(std::string value, int row)
	{
		city[row] = value;
	}

	void set_street(std::string value, int row)
	{
		street[row] = value;
	}

	void set_num_house(int value, int row)
	{
		num_house[row] = value;
	}

	void set_num_apparte(int value, int row)
	{
		num_appart[row] = value;
	}

	std::string* get_city()
	{
		return city;
	}

	std::string* get_street()
	{
		return street;
	}

	int* get_num_house()
	{
		return num_house;
	}

	int* get_num_apparte()
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
	Address new_country(N);
	std::ofstream fout("out.txt");
	fout << N << "\n";

	for (int row = 0; row < N; row++)
	{
		fin >> value;
		new_country.set_city(value, row);
		fin >> value;
		new_country.set_street(value, row);
		fin >> value;
		new_country.set_num_house(stoi(value), row);
		fin >> value;
		new_country.set_num_apparte(stoi(value), row);
	}

	for (int i = N - 1; i >= 0; i--)
	{
		fout << new_country.get_city()[i] << ", ";
		fout << new_country.get_street()[i] << ", ";
		fout << new_country.get_num_house()[i] << ", ";
		fout << new_country.get_num_apparte()[i] << std::endl;
	}

	delete[] new_country.get_city();
	delete[] new_country.get_street();
	delete[] new_country.get_num_house();
	delete[] new_country.get_num_apparte();
	fin.close();
	fout.close();

	return 0;
}