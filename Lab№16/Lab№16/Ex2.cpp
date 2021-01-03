#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N, D;
	double A;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	cout << "Введите первый член массива A и знаменатель геометрической прогрессии D: ";
	cin >> A >> D;
	double* m = new double[N];
	m[0] = A;
	for (int i = 1; i < N; i++)
	{
		A = A * D;
		m[i] = A;
	}
	cout.precision(0);
	for (int i = 0; i < N; i++)
	{
		cout << "Значение " << i + 1 << "-го элемента массива = " << fixed << m[i] << "\n";
	}
}