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
	int schet = 0;
	std::string value;
	std::ifstream fin("in.txt");
	fin >> N;
	Address new_country(N);
	std::ofstream fout("out.txt");
	fout << N << "\n";
	std::string bufer_str;
	int bufer_int;

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

	while (true)
	{
		for (int row = 0; row < N - 1; row++)
		{
			if (new_country.get_city()[row].compare(new_country.get_city()[row + 1]) > 0)
			{
				bufer_str = new_country.get_city()[row];
				new_country.get_city()[row] = new_country.get_city()[row + 1];
				new_country.get_city()[row + 1] = bufer_str;

				bufer_str = new_country.get_street()[row];
				new_country.get_street()[row] = new_country.get_street()[row + 1];
				new_country.get_street()[row + 1] = bufer_str;

				bufer_int = new_country.get_num_house()[row];
				new_country.get_num_house()[row] = new_country.get_num_house()[row + 1];
				new_country.get_num_house()[row + 1] = bufer_int;

				bufer_int = new_country.get_num_apparte()[row];
				new_country.get_num_apparte()[row] = new_country.get_num_apparte()[row + 1];
				new_country.get_num_apparte()[row + 1] = bufer_int;
				schet = 0;
				break;

			}
			else if (new_country.get_city()[row].compare(new_country.get_city()[row + 1]) <= 0)
			{
				schet++;
			}
			
		}

		if (schet >= N)
		{
			break;
		}
	}

	for (int i = 0; i < N; i++)
	{
		fout << new_country.get_city()[i] << ", ";
		fout << new_country.get_street()[i] << ", ";
		fout << new_country.get_num_house()[i] << ", ";
		fout << new_country.get_num_apparte()[i] << std::endl;
	}


	return 0;
}