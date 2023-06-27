#include "StartGame.h"

Race choose_ts()
{
	Race new_race;
	int type_race;
	int distance_race;
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	std::cout << "1. Гонка для наземнго транспорта" << std::endl;
	std::cout << "2. Гонка для воздушного транспорта" << std::endl;
	std::cout << "3. Гонка для наземнго и воздушного транспорта" << std::endl;
	std::cout << "Выберите тип гонки: ";
	std::cin >> type_race;
	new_race.set_type_ts(type_race);
	if (type_race == 1) { new_race.set_name_ts("наземного"); }
	else if (type_race == 2) { new_race.set_name_ts("воздушного"); }
	else if (type_race == 3) { new_race.set_name_ts("наземнго и воздушного"); }

	std::cout << "Укажите длину дистанции (должна быть положительна): ";
	std::cin >> distance_race;
	new_race.set_distance_race(distance_race);

	Sleep(1);
	std::system("cls");

	return new_race;
}

void schet_choose(Race* on_class)
{
	int num_choose;
	if (on_class->get_schet_choose() < 2)
	{
	loop1:
		std::cout << "Должно быть зарегестрировано как минимум 2 ТС\n";
		std::cout << "1. Зарегестрировать транспорт\n";
		std::cout << "Выбирите действие: ";
		std::cin >> num_choose;
		if (num_choose != 1)
		{
			system("cls");
			std::cout << "Неправельное действие\n";
			goto loop1;
		}
		else
		{
			on_class->set_num_schet_choose(num_choose);
		}
	}
	else
	{
	loop2:
		std::cout << "1. Зарегестрировать транспорт\n";
		std::cout << "2. Начать гонку\n";
		std::cout << "Выбирите действие: ";
		std::cin >> num_choose;
		if ((num_choose != 1) && (num_choose != 2))
		{
			system("cls");
			std::cout << "Неправельное действие\n";
			goto loop2;
		}
		else
		{
			on_class->set_num_schet_choose(num_choose);
		}
	}
	Sleep(1);
	std::system("cls");
}

bool check_retry_ts(Race* on_class, int num_choose)
{
	int* check_arr = on_class->get_registed_ts();

	if (num_choose == 0) { return false; }

	for (int i = 0; i < on_class->get_size_registed_ts(); i++)
	{
		if (num_choose == check_arr[i]) { return false; }
	}
	return true;
}

void choose_ts(Race* on_class)
{
	int num_choose;
	bool chek_choose;
loop:
	std::cout << "Гонка для " + on_class->get_name_ts() + " транспорта. Расстояние: " << on_class->get_distance_race() << std::endl;
	std::cout << "1. Ботинки-вездеходы\n";
	std::cout << "2. Метла\n";
	std::cout << "3. Верблюд\n";
	std::cout << "4. Кентавр\n";
	std::cout << "5. Орел\n";
	std::cout << "6. Верблюд-быстроход\n";
	std::cout << "7. Ковер-самолет\n";
	std::cout << "0. Закончить регистрацию\n";
	std::cout << "Выбирете транспорт или 0 для окончания процесса регистрации: ";
	std::cin >> num_choose;

	chek_choose = check_retry_ts(on_class, num_choose);
	if (chek_choose && (on_class->get_type_ts() == 1))
	{
		Sleep(1);
		std::system("cls");
		ground_ts(on_class, num_choose);
	}
	else if (chek_choose && (on_class->get_type_ts() == 2))
	{
		Sleep(1);
		std::system("cls");
		air_ts(on_class, num_choose);
	}
	else
	{
		switch (num_choose)
		{
		case 1:
			std::system("cls");
			std::cout << "Ботинки-вездеходы уже зарегестрирован!\n";
			goto loop;
			break;
		case 2:
			std::system("cls");
			std::cout << "Метла уже зарегестрирован!\n";
			goto loop;
			break;
		case 3:
			std::system("cls");
			std::cout << "Верблюд уже зарегестрирован!\n";
			goto loop;
			break;
		case 4:
			std::system("cls");
			std::cout << "Кентавр уже зарегестрирован!\n";
			goto loop;
			break;
		case 5:
			std::system("cls");
			std::cout << "Орел уже зарегестрирован!\n";
			goto loop;
			break;
		case 6:
			std::system("cls");
			std::cout << "Верблюд-быстроход уже зарегестрирован!\n";
			goto loop;
			break;
		case 7:
			std::system("cls");
			std::cout << "Ковер-самолет уже зарегестрирован!\n";
			goto loop;
			break;
		case 0:
			std::system("cls");
			schet_choose(on_class);
			break;
		default:
			std::system("cls");
			std::cout << "!\n";
			goto loop;
			break;
		}
	}
}

void add_ts(Race* on_class)
{
	int num_ts;

	int* new_arr;

	schet_choose(on_class);

	while (true)
	{
		num_ts = on_class->get_num_schet_choose();
		if (num_ts == 1)
		{
			choose_ts(on_class);
		}
		else if (num_ts == 2)
		{
			std::cout << "Да начнется игра!!!" << std::endl;
			break;
		}
	}
}

void ground_ts(Race* on_class, int num_choose)
{
	switch (num_choose)
	{
	case 1:
		on_class->set_registed_ts(num_choose, new AllTerrainBoots);
		on_class->set_schet_choose_1();
		break;
	case 3:
		on_class->set_registed_ts(num_choose, new Camel);
		on_class->set_schet_choose_1();
		break;
	case 4:
		on_class->set_registed_ts(num_choose, new Centaur);
		on_class->set_schet_choose_1();
		break;
	case 6:
		on_class->set_registed_ts(num_choose, new SpeedCamel);
		on_class->set_schet_choose_1();
		break;
	default:
		Sleep(1);
		std::system("cls");
		std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
	}
}

void air_ts(Race* on_class, int num_choose)
{
	switch (num_choose)
	{
	case 1:

	case 3:
		on_class->set_registed_ts(num_choose, new Camel);
		on_class->set_schet_choose_1();
		break;
	case 4:

	case 6:
		on_class->set_registed_ts(num_choose, new SpeedCamel);
		on_class->set_schet_choose_1();
		break;
	default:
		Sleep(1);
		std::system("cls");
		std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
	}
}