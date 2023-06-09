#include <iostream>
#include <ostream>

class Figure
{
protected:
	int sides;
	std::string name_fig;
public:
	Figure()
	{
		this->sides = 0;
		this-> name_fig = "������";
	}

	int get_sides() { return sides; }
	std::string get_name_fig() { return name_fig; }

	virtual void about_me()
	{
		std::cout << name_fig + ":\n";
		std::cout << "���������� ������: " << sides << std::endl << std::endl;
	}
};

class Triangle : public Figure
{
protected:
	int a, b, c;
	int A, B, C;
public:
	Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->sides = 3;
		this->name_fig = "�����������";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	void about_me() override
	{
		int a = this->a, b = this->b, c = this->c;
		int A = this->A, B = this->B, C = this->C;

		std::cout << this->name_fig + ":" << std::endl;

		std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, C)
	{
		this->name_fig = "������������� �����������";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;
	}
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int A, int B, int C) : Triangle(a, b, c, A, B, C)
	{
		this->name_fig = "�������������� �����������";
		this->a = a;
		this->b = b;
		this->c = this->a;
		this->A = A;
		this->B = B;
		this->C = C;
	}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a, int A) : Triangle(a, b, c, A, B, C)
	{
		this->name_fig = "�������������� �����������";
		this->a = a;
		this->b = this->a;
		this->c = this->a;
		this->A = A;
		this->B = this->A;
		this->C = this->A;
	}
};

class Quadrilateral : public Figure
{
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->name_fig = "���������������";
		this->sides = 4;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	void about_me() override
	{
		int a = this->a, b = this->b, c = this->c, d = this->d;
		int A = this->A, B = this->B, C = this->C, D = this->D;

		std::cout << this->name_fig + ":" << std::endl;

		std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
	}
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b, int A) : Quadrilateral(a, b, c, d, A, B, C, D)
	{
		this->name_fig = "�������������";
		this->a = a;
		this->b = b;
		this->c = this->a;
		this->d = this->b;
		this->A = A;
		this->B = this->A;
		this->C = this->A;
		this->D = this->A;
	}
};

class Square : public Quadrilateral
{
public:
	Square(int a, int A) : Quadrilateral(a, b, c, d, A, B, C, D)
	{
		this->name_fig = "�������";
		this->a = a;
		this->b = this->a;
		this->c = this->a;
		this->d = this->a;
		this->A = A;
		this->B = this->A;
		this->C = this->A;
		this->D = this->A;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, c, d, A, B, C, D)
	{
		this->name_fig = "�������������";
		this->a = a;
		this->b = b;
		this->c = this->a;
		this->d = this->b;
		this->A = A;
		this->B = B;
		this->C = this->A;
		this->D = this->B;
	}
};

class Rhombus : public Quadrilateral
{
public:
	Rhombus(int a, int A, int B) : Quadrilateral(a, b, c, d, A, B, C, D)
	{
		this->name_fig = "����";
		this->a = a;
		this->b = this->a;
		this->c = this->a;
		this->d = this->a;
		this->A = A;
		this->B = B;
		this->C = this->A;
		this->D = this->B;
	}
};

void print_info(Figure* on_class)
{
	on_class->about_me();
}

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure;
	print_info(&figure);

	Triangle triangle(10, 20, 30, 60, 70, 80);
	RightTriangle right_triangle(10, 20, 30, 60, 70);
	IsoscelesTriangle isosceles_triangle(10, 20, 60, 70, 60);
	EquilateralTriangle equilateral_triangle(30, 60);

	print_info(&triangle);
	print_info(&right_triangle);
	print_info(&isosceles_triangle);
	print_info(&equilateral_triangle);

	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20, 90);
	Square square(10, 90);
	Parallelogram parallelogram(10, 20, 30, 40);
	Rhombus rhombus(20, 30, 40);

	print_info(&quadrilateral);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhombus);


	return 0;
}