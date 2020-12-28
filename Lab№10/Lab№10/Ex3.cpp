#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	unsigned int n;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите число относительно которого проверяется высказывание: ";
	cin >> n;
	if (n < 100 && n > 9 && n % 2 == 0)
		cout << "\nВысказывание истинно";
	else
		cout << "\nВысказывание ложно";
}