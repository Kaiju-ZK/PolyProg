#include<iostream>
#include<vector>
#include<cmath>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N;
	int A;
	int z;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	int* m = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: " << "\n";
		cin >> A;
		m[i] = A;
		cout << "\n";
	}
	int ch = 0, nc = 0;
	for (int i = 0; i < N; i++)
	{
		if (m[i] % 2 == 0)
			ch++;
		else
			nc++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (abs(m[i] % 2) == abs(m[j] % 2))
			{
				if (m[i] > m[j] && j > i)
				{
					z = m[i];
					m[i] = m[j];
					m[j] = z;
				}
				else if (m[i] < m[j] && j < i)
				{
					z = m[i];
					m[i] = m[j];
					m[j] = z;
				}
			}
			else if (abs(m[i] % 2) == 0 && abs(m[j] % 2) == 1 && j > i)
			{
				z = m[i];
				m[i] = m[j];
				m[j] = z;
			}
			else if (m[i] % 2 == 1 && m[j] % 2 == 0 && j < i)
			{
				z = m[i];
				m[i] = m[j];
				m[j] = z;
			}
		}
	}
	/*cout.precision(0);
	for (int i = 0; i < N; i++)
	{
		cout << "Значение " << i + 1 << "-го элемента массива = " << fixed << m[i] << "\n";
	}*/
	if (ch + nc == 0)
	{
		cout << "\nМассива нет!";
	}
	else if (ch == 0)
	{
		cout << "\nНечётные числа в порядке возрастания: \n";
		for (int i = 0; i < N; i++)
		{
			cout << m[i] << "\n";
		}
		cout << "\nЧётных чисел нет";
	}
	else if (nc == 0)
	{
		cout << "\nНечётных чисел нет \n";
			cout << "\nЧётные числа в порядке убывания: \n";
			for (int i = N - 1; i >= 0; i--)
			{
				cout << m[i] << "\n";
			}
	}
	else
	{
		cout << "Нечётные числа в порядке возрастания: \n";
		for (int i = 0; i < nc; i++)
		{
			cout << m[i] << "\n";
		}
		cout << "\nЧётные числа в порядке убывания: \n";
		for (int i = N - 1; i >= N - ch; i--)
		{
			cout << m[i] << "\n";
		}
	}
}