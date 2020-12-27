#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	long double A, temp;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите переменную A: ";
	cin >> A;
	A = A * A; //A = A * A;
	A = A * A; //A = A * A;
	A = A * A; //temp = A; A = A * temp;
	cout.precision(0);
	cout << "\n A^8 = " << fixed << A; // А зачем нам вспомогательная переменная???
}