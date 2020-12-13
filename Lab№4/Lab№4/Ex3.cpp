#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>

using namespace std;

int main()
{
	float a, b;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите два числа: ";
	cin >> a >> b;
	cout << "\n Среднее арифметическое чисел = " << (a+b)/2;
	return 0;
}