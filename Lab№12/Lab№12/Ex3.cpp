#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int d;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите количество учебных заданий: ";
	cin >> d;
	cout << "\n";
	if (d == 10)
		cout << "Десять";
	else if (d == 11)
		cout << "Одиннадцать";
	else if (d == 12)
		cout << "Двенадцать";
	else if (d == 13)
		cout << "Тринадцать";
	else if (d == 14)
		cout << "Четырнадцать";
	else if (d == 15)
		cout << "Пятнадцать";
	else if (d == 16)
		cout << "Шестнадцать";
	else if (d == 17)
		cout << "Семнадцать";
	else if (d == 18)
		cout << "Восемнадцать";
	else if (d == 19)
		cout << "Девятнадцать";
	else if (d == 20)
		cout << "Двадцать";
	else if (d == 30)
		cout << "Тридцать";
	else if (d == 40)
		cout << "Сорок";
	else if (d / 10 == 2)
	{
		cout << "Двадцать";
		d %= 10;
	}
	else if (d / 10 == 3)
	{
		cout << "Тридцать";
		d %= 10;
	}
	if (d == 1)
		cout << " одно";
	else if (d == 2)
		cout << " два";
	else if (d == 3)
		cout << " три";
	else if (d == 4)
		cout << " четыре";
	else if (d == 5)
		cout << " пять";
	else if (d == 6)
		cout << " шесть";
	else if (d == 7)
		cout << " седьмь";
	else if (d == 8)
		cout << " восьмь";
	else if (d == 9)
		cout << " девять";
	if (d == 1)
		cout << " учебное задание";
	else if (d > 1 && d < 5)
		cout << " учебных задания";
	else
		cout << " учебных заданий";
}