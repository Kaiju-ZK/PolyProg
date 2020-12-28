#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int A, B;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите переменные A и B: ";
	cin >> A >> B;
	if (A > 2 && B <= 3)
		cout << "\nИстинно";
	else
		cout << "\nЛожно";
}