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
	int A, B, ci, ct;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целые положительные числа A и B : ";
	cin >> A >> B;
	cout << "\n";
	ct = 0;
	ci = 0;
	for (int i = 0; i < A; i++)
	{
		ct++;
		if (ct == B)
		{
			ct = 0;
			ci++;
		}
	}
	cout << "На отрезке A можно расположить отрезок B " << ci << " раза";
}