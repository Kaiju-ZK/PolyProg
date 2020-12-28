#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int is, it, o__;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите исходное число: ";
	cin >> is;
	o__ = is / 100;
	it = (is % 100) * 10 + o__;
	cout << "\n Число полученное при перестоновке первой слева цифры исходного числа в конец = " << it;
}