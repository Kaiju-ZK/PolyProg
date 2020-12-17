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
	cout << "Введите координаты точек A, B и C (должна находиться между A и B) в той же последовательности: ";
	cin >> A >> B >> C;
	if ((A < C && C < B) || (A > C && C > B))
		cout << "\n AC * BC = " << abs(C - B) * abs(C - A);
	else
		cout << "\nERROR";
}