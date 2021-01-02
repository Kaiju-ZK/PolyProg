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
	double P, S = 1000;
	int K = 0;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите целое число P : ";
	cin >> P;
	cout << "\n";
	while (S < 1100)
	{
		S = S + S * P / 100;
		K++;
	}
	cout << "Вклад превысит 1100 рублей через " << K << " месяцев\nИтоговый размер вклада S = " << S << " рублей";
}