#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float x1, x2, y1, y2;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите координаты x и y для первой точки: ";
	cin >> x1 >> y1;
	cout << "Введите координаты x и y для второй точки: ";
	cin >> x2 >> y2;
	cout << "\n Расстояние между точками = " << (sqrt(pow((x1*+x2),2) + pow((y1+y2),2)));
}