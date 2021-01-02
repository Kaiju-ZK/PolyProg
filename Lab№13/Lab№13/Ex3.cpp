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
	int N;
	int Z;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целое число N : ";
	cin >> N;
	Z = 0;
	for (int i = 1; i <= (N * 2 - 1); i += 2)
	{
		Z = Z + i;
	}
	cout << "\nN^2 = " << Z;
}