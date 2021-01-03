#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

void PowerA3(double A, double* B)
{
	*B = A * A * A;
}

int main()
{
	double A, B = 0;
	SetConsoleOutputCP(CP_UTF8);
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 << " вещественную A: ";
		cin >> A;
		PowerA3(A, &B);
		cout << "\nA^3 = " << B << "\n\n";
	}
}