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
	if (z == 0)
		cout << "Нулевое ";
	else if (z < 0)
	{
		cout << "Отрицательное ";
		if (z % 2 == 0)
			cout << "чётное ";
		else
			cout << "нечётное ";
	}
	else
	{
		cout << "Положительное ";
		if (z % 2 == 0)
			cout << "чётное ";
		else
			cout << "нечётное ";
	}
	cout << "число";
}