#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	cout << "������� a � b, ������� ��������������: ";
	cin >> a >> b;
	cout << "\n ������� �������������� = " << a * b << "\n �������� �������������� = " << 2 * (a + b);
}