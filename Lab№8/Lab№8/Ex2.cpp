#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	unsigned int A, B;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите длины A и B: ";
	cin >> A >> B;
	cout << "\n Целое количество отрезков B помещающихся в отрезок A = " << A/B;
}