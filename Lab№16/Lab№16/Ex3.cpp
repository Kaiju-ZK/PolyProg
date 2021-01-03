#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N, B;
	int A;
	double sum;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	cout << "Введите первый и второй члены массива A и B: ";
	cin >> A >> B;
	double* m = new double[N];
	m[0] = A;
	sum = A;
	m[1] = B;
	for (int i = 2; i < N; i++)
	{
		sum += m[i-1];
		m[i] = sum;
	}
	cout.precision(0);
	for (int i = 0; i < N; i++)
	{
		cout << "Значение " << i + 1 << "-го элемента массива = " << fixed << m[i] << "\n";
	}
}