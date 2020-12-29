#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int y;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите номер дня и месяца: ";
	cin >> y;
	cout << "\n";
	y %= 60;
	cout << "Год ";
	if ((y % 12 == 6) || (y % 12 == 7) || (y % 12 == 8))
	{
		if (y / 12 == 0)
		{
			cout << "зелёного ";
		}
		else if (y / 12 == 1)
		{
			cout << "красного ";
		}
		else if (y / 12 == 2)
		{
			cout << "жёлтого  ";
		}
		else if (y / 12 == 3)
		{
			cout << "белого ";
		}
		else if (y / 12 == 4)
		{
			cout << "чёрного ";
		}
	}
	else
	{
		if (y / 12 == 0)
		{
			cout << "зелёной ";
		}
		else if (y / 12 == 1)
		{
			cout << "красной ";
		}
		else if (y / 12 == 2)
		{
			cout << "жёлтой  ";
		}
		else if (y / 12 == 3)
		{
			cout << "белой ";
		}
		else if (y / 12 == 4)
		{
			cout << "чёрной ";
		}
	}
	if (y % 12 == 1)
		cout << "курицы";
	else if (y % 12 == 2)
		cout << "собаки";
	else if (y % 12 == 3)
		cout << "свиньи";
	else if (y % 12 == 4)
		cout << "крысы";
	else if (y % 12 == 5)
		cout << "коровы";
	else if (y % 12 == 6)
		cout << "тигра";
	else if (y % 12 == 7)
		cout << "зайца";
	else if (y % 12 == 8)
		cout << "дракона";
	else if (y % 12 == 9)
		cout << "змеи";
	else if (y % 12 == 10)
		cout << "лошади";
	else if (y % 12 == 11)
		cout << "овцы";
	else if (y % 12 == 0)
		cout << "обезьяны";
	return 0;
}