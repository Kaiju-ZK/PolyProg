#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

double RingS(double R1, double R2)
{
	return 3.1415 * R1 * R1 - 3.1415 * R2 * R2;
}

int main()
{
	double A, B = 0;
	SetConsoleOutputCP(CP_UTF8);
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите радиусы двух окружностей R1 и R2: ";
		cin >> A >> B;
		cout << "\nПлощадь колца = " << RingS(A, B) << "\n\n";
	}
}