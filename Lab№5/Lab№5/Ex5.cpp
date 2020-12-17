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
	cout << "\n Сумма = " << abs(a) + abs(b) << "\n Разность = " << abs(a) - abs(b) << "\n Произведение = " << abs(a) * abs(b) << "\n Частное = " << abs(a) / abs(b);
	return 0;
}