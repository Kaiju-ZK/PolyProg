#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int d;
	setlocale(LC_ALL, "Rus");
	cout << "Введите d окружности: ";
	cin >> d;
	cout << "\n Площадь прямоугольника = " << d * 3.14;
}