#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int x, y;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите координаты x и y: ";
	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << "\nI четверть.";
	else if (x < 0 && y > 0)
		cout << "\nII четверть.";
	else if (x < 0 && y < 0)
		cout << "\nIII четверть.";
	else if (x > 0 && y < 0)
		cout << "\nIV четверть.";
}