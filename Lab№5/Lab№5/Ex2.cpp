#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float A, B, C;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите координаты точек A, B и C в той же последовательности: ";
	cin >> A >> B >> C;
	cout << "\n Длина отрезка AC = " << abs(C - A) << "\n Длина отрезка BC = " << abs(C - B) << "\n AC + BC = " << abs(C - B) + abs(C - A);
}