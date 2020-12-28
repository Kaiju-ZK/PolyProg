#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int a, b, c;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите стороны треугольника a, b, c: ";
	cin >> a >> b >> c;
	if (a*a + b*b == c*c)
		cout << "\nТреугольник прямоугольный";
	else
		cout << "\nТреугольник не прямоугольный";
}