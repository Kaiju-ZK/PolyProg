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
	int A, B;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целые положительные числа A и B : ";
	cin >> A >> B;
	cout << "\n";
	for (int i = A; i <= B; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " " << i;
		}
	}
}