#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int t;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Номер K-го дня года: ";
	cin >> t;
	cout << "\n Номер дня недели: " << t % 7;
}