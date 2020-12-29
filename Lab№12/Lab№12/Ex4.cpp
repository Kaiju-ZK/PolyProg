#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	string d;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите число: ";
	cin >> d;
	cout << "\n";
	if (d[0] == '1')
		cout << "Сто ";
	else if (d[0] == '2')
		cout << "Двести ";
	else if (d[0] == '3')
		cout << "Триста ";
	else if (d[0] == '4')
		cout << "Четыреста ";
	else if (d[0] == '5')
		cout << "Пятьсот ";
	else if (d[0] == '6')
		cout << "Шестьсот ";
	else if (d[0] == '7')
		cout << "Семьсот ";
	else if (d[0] == '8')
		cout << "Восемьсот ";
	else if (d[0] == '9')
		cout << "Девятьсот ";

	if (d[1] == '1')
	{
		if (d[2] == '0')
			cout << "десять";
		else if (d[2] == '1')
			cout << "одинадцать";
		else if (d[2] == '2')
			cout << "двенадцать";
		else if (d[2] == '3')
			cout << "тренадцать";
		else if (d[2] == '4')
			cout << "четырнадцать";
		else if (d[2] == '5')
			cout << "пятнадцать";
		else if (d[2] == '6')
			cout << "шестнадцать";
		else if (d[2] == '7')
			cout << "семнадцать";
		else if (d[2] == '8')
			cout << "восемнадцать";
		else if (d[2] == '9')
			cout << "двадцать";
		return 0;
	}
	else if (d[1] == '2')
		cout << "двадцать ";
	else if (d[1] == '3')
		cout << "тридцать ";
	else if (d[1] == '4')
		cout << "сорок ";
	else if (d[1] == '5')
		cout << "пятьдесят ";
	else if (d[1] == '6')
		cout << "шестьдесят ";
	else if (d[1] == '7')
		cout << "семьдесят ";
	else if (d[1] == '8')
		cout << "восемьдесят ";
	else if (d[1] == '9')
		cout << "девяносто ";

	if (d[2] == '1')
		cout << "один";
	else if (d[2] == '2')
		cout << "два";
	else if (d[2] == '3')
		cout << "три";
	else if (d[2] == '4')
		cout << "четыре";
	else if (d[2] == '5')
		cout << "пять";
	else if (d[2] == '6')
		cout << "шесть";
	else if (d[2] == '7')
		cout << "семь";
	else if (d[2] == '8')
		cout << "восемь";
	else if (d[2] == '9')
		cout << "девять";
	return 0;
}