#include <iostream>
#include <ostream>

class Figure
{
protected:
	int sides;
	int a, b, c, d;
	int A, B, C, D;
public:
	Figure()
	{
		this->sides = 0;
		this->a = 0;
		this->b = 0;
		this->c = 0;
		this->d = 0;
		this->A = 0;
		this->B = 0;
		this->C = 0;
		this->D = 0;
	}

	int get_side_a() { return this->a; }
	int get_side_b() { return this->b; }
	int get_side_c() { return this->c; }
	int get_side_d() { return this->d; }
	int get_side_A() { return this->A; }
	int get_side_B() { return this->B; }
	int get_side_C() { return this->C; }
	int get_side_D() { return this->D; }

	int get_sides() { return sides; }
};

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->sides = 3;
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, C)
	{
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
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, c, A, B, C)
	{
		this->a = a;
		this->b = b;
		this->c = this->a;
		this->A = A;
		this->B = B;
		this->C = this->A;
	}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(int a, int A) : Triangle(a, b, c, A, B, C)
	{
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
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
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
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int a, int b, int A) : Quadrilateral(a, b, c, d, A, B, C, D)
	{
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
	int a = on_class->get_side_a(), b = on_class->get_side_b(), c = on_class->get_side_c(), d = on_class->get_side_d();
	int A = on_class->get_side_A(), B = on_class->get_side_B(), C = on_class->get_side_C(), D = on_class->get_side_D();
	int schet_angle = A + B + C + D;

	switch (on_class->get_sides())
	{
	case 3:
	{
		if (C == 90) { std::cout << "Прямоугольный треугольник: " << std::endl; }

		else if ((a == b && b == c && a == c) &&
			(A == B && B == C && A == C)) {
			std::cout << "Равносторонний треугольник: " << std::endl;
		}

		else if ((a == c) && (A == C)) { std::cout << "Равнобедренный треугольник: " << std::endl; }

		else { std::cout << "Треугольник: " << std::endl; }

		switch (schet_angle)
		{
		case 180:
			std::cout << "Правильная\n";
			break;
		default:
			std::cout << "Неправельная\n";
			break;
		}

		std::cout << "Количество сторон: " << on_class->get_sides() << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;		
		break;
	}
	case 4:
		if ((a == b && b == c && c == d) &&
			(A == 90 && B == 90 && C == 90 && D == 90)) {
			std::cout << "Квадрат: " << std::endl;
		}
		else if ((a == c && b == d) &&
			((A == 90 && B == 90 && C == 90 && D == 90))) {
			std::cout << "Прямоугольник: " << std::endl;
		}
		else if ((a == b && b == c && c == d) &&
			(A == C && B == D)) {
			std::cout << "Ромб: " << std::endl;
		}
		else if ((a == c && b == d) &&
			(A == C && B == D)) {
			std::cout << "Параллелограмм: " << std::endl;
		}
		else if ((a == c && b == d) &&
			(A == 90 && B == 90 && C == 90 && D == 90)) {
			std::cout << "Прямоугольник: " << std::endl;
		}
		else { std::cout << "Четырехугольник: " << std::endl; }

		switch (schet_angle)
		{
		case 360:
			std::cout << "Правильная\n";
			break;
		default:
			std::cout << "Неправильная\n";
			break;
		}
		std::cout << "Количество сторон: " << on_class->get_sides() << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
		break;
	case 0:
		std::cout << "Фигура: " << std::endl;
		std::cout << "Правильная\n";
		std::cout << "Количество сторон: " << on_class->get_sides() << std::endl;
		std::cout << std::endl;

		break;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure;

	print_info(&figure);

	Triangle triangle(10, 20, 30, 50, 60, 70);
	RightTriangle right_triangle_1(10, 20, 30, 50, 60);
	RightTriangle right_triangle_2(10, 20, 30, 50, 40);
	IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
	EquilateralTriangle equilateral_triangle(30, 60);

	print_info(&triangle);
	print_info(&right_triangle_1);
	print_info(&right_triangle_2);
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
