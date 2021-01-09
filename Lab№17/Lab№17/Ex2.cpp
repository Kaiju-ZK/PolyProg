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
		cout << "Разность прогрессии = " << m[1] - m[0];
	else if (N == 1)
		cout << "\n" << 0;
	else
	{
		A = m[1] - m[0];
		for (int i = 2; i < N; i++)
		{
			if (A != (m[i] - m[i - 1]))
			{
				A == -1;
				break;
			}
		}
		if (A == -1)
			cout << "\n" << 0;
		else
			cout << "Разность прогрессии = " << A;
	}
}