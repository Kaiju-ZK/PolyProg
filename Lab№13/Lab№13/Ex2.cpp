#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	long double Z;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите количество сомножителей: ";
	cin >> N;
	Z = 1;
	setprecision(0);
	for (double i = 1; i <= N; i++)
	{
		Z = Z * (1 + i/10);
	}
	cout << "\nПроизведение всех сомножителей = " << fixed << Z;
}