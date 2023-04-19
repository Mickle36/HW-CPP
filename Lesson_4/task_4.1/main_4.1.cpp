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

	int N;
	int rows = 4;
	int row = 0;
	std::string value;
	std::ifstream fin("in.txt");
	fin >> N;
	std::ofstream fout("out.txt");
	fout << N << "\n";
	Address new_country(N);
	std::string** arr = new_arr(rows, N);

	for (int i = 0; i < N; i++)
	{
		fin >> value;
		new_country.set_city(value);
		arr[row][i] = value;
		row++;
		fin >> value;
		new_country.set_street(value);
		arr[row][i] = value;
		row++;
		fin >> value;
		new_country.set_num_house(stoi(value));
		arr[row][i] = value;
		row++;
		fin >> value;
		new_country.set_num_apparte(stoi(value));
		arr[row][i] = value;
		row = 0;		
	}

	for (int col = N - 1; col >= 0; col--)
	{
		for (int row = 0; row < rows; row++)
		{
			//fout << arr[row][col] << ", ";
			if (row != rows - 1)
			{
				fout << arr[row][col] << ", ";
			}
			else { fout << arr[row][col]; }
		}
		fout << "\n";
	}

	delete_arr(arr, rows);
	return 0;
}