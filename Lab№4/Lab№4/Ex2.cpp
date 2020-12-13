#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>

using namespace std;

int main()
{
	int d;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите d окружности: ";
	cin >> d;
	cout << "\n Площадь прямоугольника = " << d * 3.14;
	return 0;
}