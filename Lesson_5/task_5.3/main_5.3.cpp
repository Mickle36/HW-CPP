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

	int get_sides() { return sides; }
	std::string get_name_fig() { return name_fig; }

	virtual void about_me()		//����������� ����� ����������� ������
	{
		std::cout << "���������� ������: " << this->get_sides() << std::endl;
		std::cout << std::endl;
	}

	virtual bool check()		//����������� ����� ����������� ������ �� �������������� �����������
	{
		return true;
	}
};

//������������ ����� ��� ����������� ������
class Triangle : public Figure		
{
protected:
	int a, b, c;
	int A, B, C;
	int schet_angle;
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
		this->schet_angle = A + B + C;
	}

	void about_me() override	//��������������� ������������ ������ ����������� ������
	{
		int a = this->a, b = this->b, c = this->c;
		int A = this->A, B = this->B, C = this->C;

		

		std::cout << "���������� ������: " << this->sides << std::endl;
		std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}

	bool check() override //��������������� ������������ ������ ����������� ������ �� �������������� �����������
	{	//�������� ��������� ������� �������� �� �� ��� ��� ������������, ������ �������� ���������� ������
		if (this->get_sides() == 3)
		{
			switch (this->schet_angle)
			{
			case 180:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};

//�������� �������� ������� �������������
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
		this->schet_angle = A + B + C;
	}

	bool check() override

	{
		if ((this->get_sides() == 3) && (C == 90))
		{
			switch (this->schet_angle)
			{
			case 180:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, c, A, B, C)
	{
		this->name_fig = "�������������� �����������";
		this->a = a;
		this->b = b;
		this->c = this->a;
		this->A = A;
		this->B = B;
		this->C = this->A;
		this->schet_angle = A + B + C;
	}

	bool check() override

	{	
		if ((this->get_sides() == 3) && (this->a == this->c) && (this->A == this->C)) 
		{
			switch (this->schet_angle)
			{
			case 180:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
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
		this->schet_angle = A + B + C;
	}

	bool check() override

	{
		if ((this->get_sides() == 3) &&
			(a == b && b == c && a == c) &&
			(A == B && B == C && A == C))
		{
			switch (this->schet_angle)
			{
			case 180:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};

//������������ ����� ��� ��������������� ������
class Quadrilateral : public Figure		
{
protected:
	int a, b, c, d;
	int A, B, C, D;
	int schet_angle;
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
		this->schet_angle = A + B + C + D;
	}

	
	void about_me() override		//��������������� ������������ ������ ����������� ������
	{
		int a = this->a, b = this->b, c = this->c, d = this->d;
		int A = this->A, B = this->B, C = this->C, D = this->D;

		std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
	}

	
	bool check() override		//��������������� ������������ ������ ����������� ������ �� �������������� �����������
	{
		if (this->get_sides() == 4)
		{
			switch (this->schet_angle)
			{
			case 360:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};

//�������� �������� ������� �����������������
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
		this->schet_angle = A + B + C + D;
	}

	bool check() override
	{
		if ((this->get_sides() == 4) &&
			(a == c && b == d) &&
			(A == 90 && B == 90 && C == 90 && D == 90))
		{
			switch (this->schet_angle)
			{
			case 360:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
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
		this->schet_angle = A + B + C + D;
	}

	bool check() override
	{
		if ((this->get_sides() == 4) &&
			(a == b && a == c && a == d && b == c && b == d && c == d) &&
			(A == 90 && B == 90 && C == 90 && D == 90))
		{
			switch (this->schet_angle)
			{
			case 360:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
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
		this->schet_angle = A + B + C + D;
	}

	bool check() override
	{
		if ((this->get_sides() == 4) &&
			(a == c && b == d) &&
			(A == C && B == D))
		{
			switch (this->schet_angle)
			{
			case 360:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
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
		this->schet_angle = A + B + C + D;
	}

	bool check() override
	{
		if ((this->get_sides() == 4) &&
			(a == b && a == c && a == d && b == c && b == d && c == d) &&
			(A == C && B == D))
		{
			switch (this->schet_angle)
			{
			case 360:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};

// ����� ��� ������ ���������� � ������
void print_info(Figure* on_class)
{	
	bool bool_check = on_class->check();

	std::cout << on_class->get_name_fig() + ":\n";
	if (bool_check)
	{
		std::cout << "����������\n";
	}
	else
	{
		std::cout << "�����������\n";
	}

	on_class->about_me();
}

int main()
{
	setlocale(LC_ALL, "ru");

	Figure figure;

	print_info(&figure);

	Triangle triangle(10, 20, 30, 50, 60, 70);
	RightTriangle right_triangle_1(10, 20, 30, 50, 60);
	RightTriangle right_triangle_2(10, 20, 30, 50, 40);
	IsoscelesTriangle isosceles_triangle(10, 20, 55, 70);
	EquilateralTriangle equilateral_triangle(30, 60);

	print_info(&triangle);
	print_info(&right_triangle_1);
	print_info(&right_triangle_2);
	print_info(&isosceles_triangle);
	print_info(&equilateral_triangle);

	Quadrilateral quadrilateral(10, 20, 30, 40, 90, 90, 90, 80);
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
