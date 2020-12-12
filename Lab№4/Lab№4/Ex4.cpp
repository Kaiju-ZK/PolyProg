#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	float a, b;
	setlocale(LC_ALL, "Rus");
	cout << "Введите a и b, стороны прямоугольника: ";
	cin >> a >> b;
	cout << "\n Сумма = " << pow(a,2) + pow(b, 2) << "\n Разность = " << pow(a, 2) - pow(b, 2) << "\n Произведение = " << pow(a, 2) * pow(b, 2) << "\n Частное = " << pow(a, 2) / pow(b, 2);
}