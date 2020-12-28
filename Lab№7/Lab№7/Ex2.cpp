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
	cout << "Введите значение угла в радианах: ";
	cin >> ralf;
	alf = ralf * (180 / 3.1415926535);
	cout << "\n Значение угла в градусах = " << alf;
}