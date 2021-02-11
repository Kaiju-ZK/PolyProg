#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float x1, x2, y1, y2, x3, y3, a, b, c;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите координаты x и y для первой вершину: ";
	cin >> x1 >> y1;
	cout << "Введите координаты x и y для второй вершину: ";
	cin >> x2 >> y2;
	cout << "Введите координаты x и y для третьей вершину: ";
	cin >> x3 >> y3;
	a = (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
	b = (sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)));
	c = (sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)));
	if ((x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3))
		cout << "ERROR";
	else
		cout << "\n Периметр треугольника = " << a + b + c << "\n Площадь треугольника = " << sqrt((a + b + c) / 2 * ((a + b + c) / 2 - c) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - a));
}