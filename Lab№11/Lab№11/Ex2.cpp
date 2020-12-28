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
	cout << "Введите две переменные A, B и C: ";
	cin >> A >> B >> C;
	if (A + B >= B + C && A + B >= A + C)
		cout << "\nA + B = " << A + B;
	else if (C + B >= A + C && C + B >= B + C)
		cout << "\nB + C = " << C + B;
	else if (A + C >= B + C && A + C >= A + B)
		cout << "\nA + C = " << A + C;
}