#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int A, B, C;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите переменные A, B и C: ";
	cin >> A >> B >> C;
	if (A < B && B < C)
		cout << "\nИстинно";
	else
		cout << "\nЛожно";
}