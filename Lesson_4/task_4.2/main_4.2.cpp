#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

class Address
{
protected:
	int N;
	std::string city;
	std::string street;
	int num_house;
	int num_appart;

public:
	Address(int size_arr) { this->N = size_arr; }

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

std::string** new_arr(int rows, int columns)
{
	std::string** arr = new std::string * [rows];

	for (int row = 0; row < rows; row++)
	{
		arr[row] = new std::string[columns];
	}

	return arr;
}

void delete_arr(std::string** arr, int rows)
{
	for (int row = 0; row < rows; row++)
	{
		delete[] arr[row];
	}
	delete[] arr;
	arr = nullptr;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int N = 4;
	int rows;
	int schet = 0;
	std::string value;
	std::ifstream fin("in.txt");
	fin >> rows;
	std::ofstream fout("out.txt");
	fout << rows << "\n";
	Address new_country(N);
	std::string* arr = new std::string [rows];
	std::string* arr_first_str = new std::string[rows];

	std::string all_str;
	std::string first_str;

	for (int i = 0; i < rows; i++)
	{
		fin >> value;
		new_country.set_city(value);
		all_str += new_country.get_city() + ", ";
		arr_first_str[i] = all_str;
		fin >> value;
		new_country.set_street(value);
		all_str += new_country.get_street() + ", ";
		fin >> value;
		new_country.set_num_house(stoi(value));
		all_str += std::to_string(new_country.get_num_house()) + ", ";
		fin >> value;
		new_country.set_num_apparte(stoi(value));
		all_str += std::to_string(new_country.get_num_apparte());

		arr[i] = all_str;
		all_str = "";
	}

	while (true)
	{
		for (int row = 0; row < rows - 1; row++)
		{
			if (arr_first_str[row].compare(arr_first_str[row + 1]) > 0)
			{
				all_str = arr[row];
				arr[row] = arr[row + 1];
				arr[row + 1] = all_str;
				first_str = arr_first_str[row];
				arr_first_str[row] = arr_first_str[row + 1];
				arr_first_str[row + 1] = first_str;
				schet = 0;
				break;

			}
			else if (arr_first_str[row].compare(arr_first_str[row + 1]) <= 0)
			{
				schet++;
			}
			
		}

		if (schet >= rows)
		{
			break;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		fout << arr[i] << "\n";
	}

	delete[] arr;
	delete[] arr_first_str;
	return 0;
}