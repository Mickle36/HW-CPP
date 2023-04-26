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
	Address() { N = 0; }

	void set_N(std::ifstream& fin)
	{
		fin >> N;
	}

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

	int get_N()
	{
		return N;
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
	int rows = 4;
	int row = 0;
	std::string value;
	std::ifstream fin("in.txt");
	Address new_country;
	new_country.set_N(fin);
	int N = new_country.get_N();
	std::ofstream fout("out.txt");
	fout << N << "\n";
	std::string** arr = new_arr(rows, N);

	for (int i = 0; i < N; i++)
	{
		fin >> value;
		new_country.set_city(value);
		arr[row][i] = new_country.get_city();
		row++;
		fin >> value;
		new_country.set_street(value);
		arr[row][i] = new_country.get_street();
		row++;
		fin >> value;
		new_country.set_num_house(stoi(value));
		arr[row][i] = std::to_string(new_country.get_num_house());
		row++;
		fin >> value;
		new_country.set_num_apparte(stoi(value));
		arr[row][i] = std::to_string(new_country.get_num_apparte());
		row = 0;		
	}

	for (int col = N - 1; col >= 0; col--)
	{
		for (int row = 0; row < rows; row++)
		{
			if (row != rows - 1)
			{
				fout << arr[row][col] << ", ";
			}
			else { fout << arr[row][col]; }
		}
		fout << "\n";
	}

	fin.close();
	fout.close();

	delete_arr(arr, rows);
	return 0;
}