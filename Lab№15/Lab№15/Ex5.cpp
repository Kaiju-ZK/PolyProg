#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

double Fact2(int N)
{
	double K=1;
	if (N % 2 == 1)
	{
		for (int i = 1; i <= N; i += 2)
			K *= i;
		return K;
	}
	else
	{
		for (int i = 2; i <= N; i += 2)
			K *= i;
		return K;
	}
}

int main()
{
	int N;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целое число N: ";
	cin >> N;
	cout.precision(0);
	cout << "\nДвойной факториал N = " << fixed << Fact2(N);
}