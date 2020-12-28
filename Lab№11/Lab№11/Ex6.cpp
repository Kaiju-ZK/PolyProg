#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int z;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите число: ";
	cin >> z;
	cout << "\n";
	if (z % 2 == 0)
		cout << "Чётное ";
	else
		cout << "Нечётное ";
	if (z / 100 != 0)
		cout << "трёхзначное ";
	else if (z / 10 != 0)
		cout << "двухзначеное ";
	else
		cout << "однозначное ";
	cout << "число";
}