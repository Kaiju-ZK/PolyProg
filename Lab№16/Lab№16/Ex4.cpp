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
	int A;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	int* m = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите " << i+1 << " элемент массива: " << "\n";
		cin >> A;
		m[i] = A;
		cout << "\n";
	}
	cout.precision(0);
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			cout << "Значение " << i / 2 + 1 << "-го элемента массива = " << fixed << m[i / 2] << "\n";
		else
			cout << "Значение " << N - i / 2 << "-го элемента массива = " << fixed << m[N-i/2 - 1] << "\n";
	}
}