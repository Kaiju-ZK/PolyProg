#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	long double A1, B1, A2, B2, C1, C2, x, y;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите коэффициенты A1 и B1, а так же ответ на первое уравнение C1: ";
	cin >> A1 >> B1 >> C1;
	cout << "Введите коэффициенты A2 и B2, а так же ответ на второе уравнение C2: ";
	cin >> A2 >> B2 >> C2;
	x = (B1 * C2 - B2 * C1) / (B1 * A2 - B2 * A1);
	y = (C1 - A1 * x) / B1;
	cout << "\n A1*x + B1*y = C1  ┓     x = " << x;
	cout << "\n                   } =>";
	cout << "\n A2*x + B2*y = C2  ┛     y = " << y;
}