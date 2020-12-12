#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	float x1, x2, y1, y2;
	setlocale(LC_ALL, "Rus");
	cout << "Введите координаты x и y для первой точки: ";
	cin >> x1 >> y1;
	cout << "Введите координаты x и y для второй точки: ";
	cin >> x2 >> y2;
	cout << "\n Расстояние между точками = " << s(sqrt(x1+x2) + sqrt(y1+y2));
}