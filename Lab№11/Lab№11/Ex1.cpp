#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int A, B;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите две переменные A и B: ";
	cin >> A >> B;
	if (A == B)
	{
		A = 0;
		B = 0;
	}
	else
	{
		if (A > B)
			B = A;
		else
			A = B;
	}
	cout << "\nA = " << A << "\nB = " << B;
}