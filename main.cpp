#include <iostream>

class Figure {
protected:
	int sides_count;
	std::string name;
public:
	int get_sides_count(){
		return sides_count;
	}
	std::string get_name() {
		return name;
	}
	Figure() {
		name = "Фигура";
		sides_count = 0;
	}
};

class Triangle : public Figure {
public:
	Triangle() {
		name = "Треугольник";
		sides_count = 3;
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() {
		name = "Четырехугольник";
		sides_count = 4;
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Количество сторон: \n";
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;

	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

	
}