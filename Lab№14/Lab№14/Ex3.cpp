#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
	unsigned int N, s, t;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целое число N : ";
	cin >> N;
	cout << "\n";
	s = 0;
	t = 0;
	for (int i = 1; i < N; i++)
	{
		s += i;
		t = i;
		if (s >= N)
		{
			break;
		}
	}
	cout << "Наименьшее из целых чисел K = " << t << "\nCумма чисел от 1 до K = " << s;
}