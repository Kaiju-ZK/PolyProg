#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float A, B, temp;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите переменные A и B: ";
	cin >> A >> B;
	temp = A;
	A = B;
	B = temp;
	cout << "\n A = " << A << "\n B = " << B;
}