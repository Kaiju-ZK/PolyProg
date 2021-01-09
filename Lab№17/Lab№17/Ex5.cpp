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
	double A, B = 0;
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
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (m[i] == m[j])
			{
				A = i;
				B = j;
				break;
			}
		}
		if (B != 0)
			break;
	}
	cout << "\nНомера элементов в порядке возрастания: " << A + 1 << ", " << B + 1;
}