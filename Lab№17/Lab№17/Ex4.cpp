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
	if (N == 1)
		cout << "\nНомер последнего локального максимума = 1";
	else
	{
		for (int i = 1; i < N; i++)
		{
			if (i != 0 && i != N - 1)
			{
				if (m[i] > m[i - 1] && m[i] > m[i + 1])
					A = i + 1;
			}
			else if (i == 0)
			{
				if (m[i] > m[i + 1])
					A = i + 1;
			}
			else if (i == 0)
				if (m[i] > m[i - 1])
					A = i + 1;
		}
		cout << "\nНомер последнего локального максимума = " << A;
	}
}