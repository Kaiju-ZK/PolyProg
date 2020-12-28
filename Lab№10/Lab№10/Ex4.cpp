#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int n, o__, _o_, __o;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите число относительно которого проверяется высказывание: ";
	cin >> n;
	n = abs(n);
	o__ = n / 100;
	__o = n % 10;
	_o_ = (n % 100) / 10;
	if ((o__ < _o_ && _o_ < __o) || (o__ > _o_ && _o_ > __o))
		cout << "\nВысказывание истинно";
	else
		cout << "\nВысказывание ложно";
}