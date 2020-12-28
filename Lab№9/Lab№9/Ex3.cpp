#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N, K, I;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите номер K-го дня года, а зачем число N (день с которого начинается год): ";
	cin >> K >> N;
	I = (K + N - 1) % 7;
	if (I == 0)
		I = 7;
	cout << "\n Номер дня недели: " << I;
}