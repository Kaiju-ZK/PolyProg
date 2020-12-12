#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	cout << "Введите a и b, стороны прямоугольника: ";
	cin >> a >> b;
	cout << "\n Площадь прямоугольника = " << a * b << "\n Периметр прямоугольника = " << 2 * (a + b);
}