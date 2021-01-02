#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите цену 1 килограмма конфет: ";
	cin >> N;
	for (float i = 0.1; i < 1.1; i += 0.1)
	{
		cout << "\nЦена " << i << " кг. конфет = " << N * i;
	}
}