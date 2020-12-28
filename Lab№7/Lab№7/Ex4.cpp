#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float V1, V2, S, T;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите скорость V1 км/ч и V2 км/ч: ";
	cin >> V1 >> V2;
	cout << "\nВведите S - изначально расстояние между автомобилями и T - время их удаления друг от друга: ";
	cin >> S >> T;
	cout.precision(2);
	cout << "\n Расстояние между автомобилями спустя время T = " << fixed << S + abs(V1)*T + abs(V2)*T << " км.";
}