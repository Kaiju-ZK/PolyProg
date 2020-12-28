#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int a, b, c;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите величины a, b, c: ";
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
		cout << "\nТреугольник существует";
	else
		cout << "\nТреугольник не существует";
}