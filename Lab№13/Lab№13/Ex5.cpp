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
	double Z;
	double A, AT;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите вещественное число A и целое число N : ";
	cin >> A >> N;
	AT = -A;
	Z = 1;
	for (int i = 1; i <= N; i++)
	{
		Z = Z + AT;
		AT *= (-A);
	}
	cout << "\n1-A^2+A^3...±A^N = " << Z;
}