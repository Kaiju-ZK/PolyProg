#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int n, l, r, m1, m2;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите число относительно которого проверяется высказывание: ";
	cin >> n;
	n = abs(n);
	l = n / 1000;
	r = n % 10;
	m1 = n / 100 - l * 10;
	m2 = (n % 100) / 10;
	if (l == r && m1 == m2)
		cout << "\nВысказывание истинно";
	else
		cout << "\nВысказывание ложно";
}