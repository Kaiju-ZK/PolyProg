#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N, K, L;
	double A;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	double* m = new double[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите " << i+1 << " элемент массива: " << "\n";
		cin >> A;
		m[i] = A;
		cout << "\n";
	}
	cout << "Введите промежуток в котором надо посчитать среднее арифметическое: ";
	cin >> K >> L;
	A = 0;
	for (int i = K-1; i < L; i++)
	{
		A += m[i];
	}
	A = A / (L - K + 1);
	cout << "Среднее арифметическое чисел от K до L включительно = " << A;
}