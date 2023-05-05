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
	setlocale(LC_ALL, "ru");

	int N;
	int schet = 0;
	std::string value;
	std::ifstream fin("in.txt");
	fin >> N;
	Address* new_country = new Address[N];
	std::ofstream fout("out.txt");
	fout << N << "\n";
	Address* bufer = new Address[N];

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

	while (true)
	{
		for (int row = 0; row < N - 1; row++)
		{
			if (new_country[row].get_city().compare(new_country[row + 1].get_city()) > 0)
			{
				bufer[row] = new_country[row];
				new_country[row] = new_country[row + 1];
				new_country[row + 1] = bufer[row];
				schet = 0;
				break;

			}
			else if (new_country[row].get_city().compare(new_country[row + 1].get_city()) <= 0)
			{
				schet++;
			}
			
		}

		if (schet >= N)
		{
			delete[] bufer;
			break;
		}
	}

	for (int i = 0; i < N; i++)
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