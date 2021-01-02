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
	unsigned int F1, F2, F3, N, K = 2;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите число Фибоначчи N : ";
	cin >> N;
	cout << "\n";
	F1 = 0;
	F2 = 1;
	if (N == 0)
		K = 1;
	else if (N == 1)
		K = 2;
	else
		while (true)
		{
			F3 = F1 + F2;
			K++;
			if (F3 == N)
				break;
			F1 = F2;
			F2 = F3;
		}
	cout << "Порядковый номер числа Фибоначчи N -- K = " << K;
}