#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	unsigned int A, B, C, I;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите A, B и C, где A и B это стороны прямоугольника, а C сторона квадрата: ";
	cin >> A >> B >> C;
	I = (A/C) * (B/C);
	cout << "\nКоличество квадратов со сторой C умещающихся в прямоугольник со сторонами A и B: " << I;
}