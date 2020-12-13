#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float a, b;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите a и b, стороны прямоугольника: ";
	cin >> a >> b;
	cout << "\n Площадь прямоугольника = " << a * b << "\n Периметр прямоугольника = " << 2 * (a + b);
	return 0;
}