#include <iostream>

class Figure
{
protected:
	int sides;
	std::string name_fig;
public:
	Figure()
	{
		this->sides = 0;
		this->name_fig = "������";
	}

	std::string getName()
	{
		return name_fig;
	}

	int get_sides()
	{
		return sides;
	}
};

class Triangle: public Figure
{
public:
	Triangle()
	{
		this->sides = 3;
		this->name_fig = "�����������";
	}
};

class Square : public Figure
{
public:
	Square()
	{
		this->sides = 4;
		this->name_fig = "��������������";
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure;
	Triangle triangle;
	Square square;

	std::cout << "���������� ������:\n";
	std::cout << figure.getName() + ": " << figure.get_sides() << std::endl;
	std::cout << triangle.getName() + ": " << triangle.get_sides() << std::endl;
	std::cout << square.getName() + ": " << square.get_sides() << std::endl;
}