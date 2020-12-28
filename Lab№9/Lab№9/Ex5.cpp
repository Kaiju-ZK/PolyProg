#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int y, v;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите номер года: ";
	cin >> y;
	v = y / 100;
	if (y % 100 > 0)
		v++;
	cout << "\nСтолетие частью которого является год y = " << v;
}