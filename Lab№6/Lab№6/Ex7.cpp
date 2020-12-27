#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	long double A, t1, t2;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите переменную A: ";
	cin >> A;
	t1 = A;
	A = A * A;
	A = A * A;
	A = A * t1;
	t2 = A;
	A = A * A;
	A = A * t2;
	cout.precision(0);
	cout << "\n A^15 = " << fixed << A; // А зачем нам вспомогательная переменная???
}