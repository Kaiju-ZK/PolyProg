#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	long double alf, ralf;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите значение угла в градусах: ";
	cin >> alf;
	ralf = alf * (3.1415926535 / 180);
	cout << "\n Значение угла в радианах = " << ralf;
}