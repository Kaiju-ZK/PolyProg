#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int xA, xB, xC, yA, yB, yC;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите координаты x и y для точки A: ";
	cin >> xA >> yA;
	cout << "\nВведите координаты x и y для точки B: ";
	cin >> xB >> yB;
	cout << "\nВведите координаты x и y для точки C: ";
	cin >> xC >> yC;
	if (sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB)) <= sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC)))
		cout << "\nБлиже точка B \nРасстояние от B до A = " << sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
	else
		cout << "\nБлиже точка C \nРасстояние от C до A = " << sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC));
}