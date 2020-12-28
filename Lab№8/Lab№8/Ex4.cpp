#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int is, it, o_, _o;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите исходное число: ";
	cin >> is;
	o_ = is / 10;
	_o = is % 10;
	it = _o * 10 + o_;
	cout << "\n Число полученное при перестоновке цифр исходного числа = " << it;
}