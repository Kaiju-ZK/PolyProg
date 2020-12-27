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
	cout.precision(0);
	cout << "3*x^6 - 6*x^2 - 7 = " << fixed << 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}