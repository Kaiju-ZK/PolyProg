#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float x;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите x: ";
	cin >> x;
	x = x - 3;
	cout.precision(0);
	cout << "4*(x-3)^6 - 7*(x-3)^3 + 2 = " << fixed << 4 * pow(x, 6) - 7 * pow(x, 3) + 2;
}