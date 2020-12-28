#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
	unsigned int b;
	SetConsoleOutputCP(CP_UTF8);
	cout << "Введите размер файла в байтах: ";
	cin >> b;
	cout << "\n Размер файла в килобайтах = " << b/1024;
}