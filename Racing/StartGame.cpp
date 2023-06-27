#include "StartGame.h"

Race choose_ts()
{
	Race new_race;
	int type_race;
	int distance_race;
	std::cout << "����� ���������� � �������� ���������!" << std::endl;
	std::cout << "1. ����� ��� �������� ����������" << std::endl;
	std::cout << "2. ����� ��� ���������� ����������" << std::endl;
	std::cout << "3. ����� ��� �������� � ���������� ����������" << std::endl;
	std::cout << "�������� ��� �����: ";
	std::cin >> type_race;
	new_race.set_type_ts(type_race);
	if (type_race == 1) { new_race.set_name_ts("���������"); }
	else if (type_race == 2) { new_race.set_name_ts("����������"); }
	else if (type_race == 3) { new_race.set_name_ts("�������� � ����������"); }

	std::cout << "������� ����� ��������� (������ ���� ������������): ";
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
		std::cout << "������ ���� ���������������� ��� ������� 2 ��\n";
		std::cout << "1. ���������������� ���������\n";
		std::cout << "�������� ��������: ";
		std::cin >> num_choose;
		if (num_choose != 1)
		{
			system("cls");
			std::cout << "������������ ��������\n";
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
		std::cout << "1. ���������������� ���������\n";
		std::cout << "2. ������ �����\n";
		std::cout << "�������� ��������: ";
		std::cin >> num_choose;
		if ((num_choose != 1) && (num_choose != 2))
		{
			system("cls");
			std::cout << "������������ ��������\n";
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
	std::cout << "����� ��� " + on_class->get_name_ts() + " ����������. ����������: " << on_class->get_distance_race() << std::endl;
	std::cout << "1. �������-���������\n";
	std::cout << "2. �����\n";
	std::cout << "3. �������\n";
	std::cout << "4. �������\n";
	std::cout << "5. ����\n";
	std::cout << "6. �������-���������\n";
	std::cout << "7. �����-�������\n";
	std::cout << "0. ��������� �����������\n";
	std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
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
			std::cout << "�������-��������� ��� ���������������!\n";
			goto loop;
			break;
		case 2:
			std::system("cls");
			std::cout << "����� ��� ���������������!\n";
			goto loop;
			break;
		case 3:
			std::system("cls");
			std::cout << "������� ��� ���������������!\n";
			goto loop;
			break;
		case 4:
			std::system("cls");
			std::cout << "������� ��� ���������������!\n";
			goto loop;
			break;
		case 5:
			std::system("cls");
			std::cout << "���� ��� ���������������!\n";
			goto loop;
			break;
		case 6:
			std::system("cls");
			std::cout << "�������-��������� ��� ���������������!\n";
			goto loop;
			break;
		case 7:
			std::system("cls");
			std::cout << "�����-������� ��� ���������������!\n";
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
			std::cout << "�� �������� ����!!!" << std::endl;
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
		std::cout << "������� ���������������� ������������ ��� ������������� ��������!\n";
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
		std::cout << "������� ���������������� ������������ ��� ������������� ��������!\n";
	}
}