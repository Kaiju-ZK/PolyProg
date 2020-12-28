#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float A, X, Y, T;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите количество X кг конфет и цену A за них: ";
	cin >> X >> A;
	cout << "\nВведите количество Y кг конфет: ";
	cin >> Y;
	T = A / X;
	cout.precision(2);
	cout << "\n Цена за 1 кг = " << fixed << T*1 << "\n Цена за Y кг = " << fixed << T*Y;
}