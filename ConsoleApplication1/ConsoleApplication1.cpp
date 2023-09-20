// Задание 1

#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	double a, b, c, p;

	cout << "Введите стороны а и b: ";
	cin >> a >> b;

	c = sqrt(a * a + b * b); // вычисление гипотенузы
	p = a + b + c; // вычисление периметра

	cout << "гипотенуза равна: " << c << endl;
	cout << "периметр равен: " << p << endl;
}