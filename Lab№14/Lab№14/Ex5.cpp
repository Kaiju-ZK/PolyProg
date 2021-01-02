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
	unsigned int A, B, ans;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целые положительные числа A и B : ";
	cin >> A >> B;
	cout << "\n";
	while (true)
	{
		if (A > B)
		{
			if (A % B == 0)
			{
				ans = B;
				break;
			}
			else
			{
				A = A % B;
			}
		}
		if (A < B)
		{
			if (B % A == 0)
			{
				ans = A;
				break;
			}
			else
			{
				B = B % A;
			}
		}
	}
	cout << "НОД = " << ans;
}