#include <iostream>

class Figure
{
protected:
	int sides;
public:
	Figure()
	{
		this->sides = 0;
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
	}
};

class Square : public Figure
{
public:
	Square()
	{
		this->sides = 4;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure;
	Triangle triangle;
	Square square;

	std::cout << "Количество сторон:\n";
	std::cout << "Фигура: " << figure.get_sides() << std::endl;
	std::cout << "Треугольник: " << triangle.get_sides() << std::endl;
	std::cout << "Четырёхугольник: " << square.get_sides() << std::endl;
}