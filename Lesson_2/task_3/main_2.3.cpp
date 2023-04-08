#include <iostream>
#include <string>

struct address
{
	std::string town;
	std::string street;
	int num_of_house;
	int num_of_appatr;
	int index;
};

void look_addres(address* arr) {
	for (int i = 0; i < 5; i++) {
		std::cout << "Город: " << arr[i].town << " \n";
		std::cout << "Улица: " << arr[i].street << " \n";
		std::cout << "Номер дома: " << arr[i].num_of_house << " \n";
		std::cout << "Номер квартиры: " << arr[i].num_of_appatr << " \n";
		std::cout << "Индекс: " << arr[i].index << " \n";
		std::cout << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	address* address_arr = new address[5];

	address_arr[0] = { "Москва", "Арбат", 12, 8, 123456 };
	address_arr[1] = { "Ижевск", "Пушкина", 54, 143, 953769 };
	address_arr[2] = { "Красноярск", "Взлетная", 13, 63, 660013 };
	address_arr[3] = { "Магадан", "Ленина", 17, 10, 685007 };
	address_arr[4] = { "Архангельск", "Белгородская", 69, 80, 163058 };

	look_addres(address_arr);

	delete[] address_arr;
}