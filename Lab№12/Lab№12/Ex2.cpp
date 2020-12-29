#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	int N,c = 0;
	wchar_t C;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите исходное направление C и посланную ему команду N: ";
	wcin >> C;
	cin >> N;
	if (C == 145)
		c = 1;
	if (C == 135)
		c = 2;
	if (C == 158)
		c = 3;
	if (C == 130)
		c = 4;
	c += N;
	if (c == 1 || c == 5)
		cout << "После выполнения команды направление робота: С";
	if (c == 2)
		cout << "После выполнения команды направление робота: З";
	if (c == 3)
		cout << "После выполнения команды направление робота: Ю";
	if (c == 4 || c == 0)
		cout << "После выполнения команды направление робота: В";
}