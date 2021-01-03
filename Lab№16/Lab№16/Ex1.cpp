#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N, Z = 1;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер массива: ";
	cin >> N;
	int *m = new int[N];
	for (int i = 0; i < N; i++)
	{
		m[i] = Z;
		Z += 2;
	}
	for (int i = 0; i < N; i++)
	{
		cout << "Значение " << i + 1 << "-го элемента массива = " << m[i] << "\n";
	}
}