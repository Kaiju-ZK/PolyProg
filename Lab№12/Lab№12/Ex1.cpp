#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int d, m;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите номер дня и месяца: ";
	cin >> d >> m;
	cout << "\n";
	if (d == 10)
		cout << "Десятое";
	else if (d == 11)
		cout << "Одиннадцатое";
	else if (d == 12)
		cout << "Двенадцатое";
	else if (d == 13)
		cout << "Тринадцатое";
	else if (d == 14)
		cout << "Четырнадцатое";
	else if (d == 15)
		cout << "Пятнадцатое";
	else if (d == 16)
		cout << "Шестнадцатое";
	else if (d == 17)
		cout << "Семнадцатое";
	else if (d == 18)
		cout << "Восемнадцатое";
	else if (d == 19)
		cout << "Девятнадцатое";
	else if (d == 20)
		cout << "Двадцатое";
	else if (d == 30)
		cout << "Тридцатое";
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
		cout << " первое";
	else if (d == 2)
		cout << " второе";
	else if (d == 3)
		cout << " третье";
	else if (d == 4)
		cout << " четвёртое";
	else if (d == 5)
		cout << " пятое";
	else if (d == 6)
		cout << " шестое";
	else if (d == 7)
		cout << " седьмое";
	else if (d == 8)
		cout << " восьмое";
	else if (d == 9)
		cout << " девятое";
	if (m == 1)
		cout << " января";
	else if (m == 2)
		cout << " февраля";
	else if (m == 3)
		cout << " марта";
	else if (m == 4)
		cout << " апреля";
	else if (m == 5)
		cout << " мая";
	else if (m == 6)
		cout << " июня";
	else if (m == 7)
		cout << " июля";
	else if (m == 8)
		cout << " августа";
	else if (m == 9)
		cout << " сентября";
	else if (m == 10)
		cout << " октября";
	else if (m == 11)
		cout << " ноября";
	else if (m == 12)
		cout << " декабря";
}