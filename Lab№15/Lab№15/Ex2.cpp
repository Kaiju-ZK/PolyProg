#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int Sign(double X)
{
	if (X < 0)
		return -1;
	else if (X == 0)
		return 0;
	else
		return 1;
}

int main()
{
	double A, B = 0;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите вещественные переменные A и B: ";
	cin >> A >> B;
	cout << "\nSign(A) + Sign(B) = " << Sign(A) + Sign(B);
}