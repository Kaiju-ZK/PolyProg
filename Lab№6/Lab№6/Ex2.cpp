#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	float A, B, C, temp;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите переменные A, B и C: ";
	cin >> A >> B >> C;
	temp = B;
	B = A;
	A = C;
	C = temp;
	cout << "\n A = " << A << "\n B = " << B << "\n C = " << C;
}