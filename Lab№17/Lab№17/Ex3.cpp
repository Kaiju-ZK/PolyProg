#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N;
	double A;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	double* m = new double[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: " << "\n";
		cin >> A;
		m[i] = A;
		cout << "\n";
	}
	if (N == 2)
		cout << "Минимальный элемент = " << m[1];
	else if (N == 1)
		cout << "\nМинимальный чётный элемент массива";
	else
	{
		A = m[1];
		for (int i = 1; i < N; i += 2)
		{
			if (A > m[i])
			{
				A = m[i];
			}
		}
		cout << "Минимальный чётный элемент массива = " << A;
	}
}