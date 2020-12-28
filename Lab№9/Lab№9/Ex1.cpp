#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	unsigned int t;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Сколько секунд прошло с начала суток: ";
	cin >> t;
	cout << "\n С начала последней минуты прошло " << t % 60 << " сек.";
}