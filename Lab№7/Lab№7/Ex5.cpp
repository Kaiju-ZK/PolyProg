#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	long double A, B;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите коэффициенты A и B: ";
	cin >> A >> B;
	cout << "\n A*x + B = 0  =>  x = " << -B/A;
}