#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int Quarter(double x, double y)
{
	if (x > 0 && y > 0)
		return 1;
	else if (x < 0 && y > 0)
		return 2;
	else if (x < 0 && y < 0)
		return 3;
	else if (x > 0 && y < 0)
		return 4;
}

int main()
{
	double A, B = 0;
	SetConsoleOutputCP(CP_UTF8);
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите коррдинаты " << i << " точки на осях x и y: ";
		cin >> A >> B;
		cout << "\n" << Quarter(A, B) << " четверть \n\n";
	}
}