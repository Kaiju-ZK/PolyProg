#include<iostream>
#include<vector>
#include<assert.h>
#include<algorithm>
#include<string>
#include <windows.h>

using namespace std;

int main()
{
	float a, b;
	SetConsoleOutputCP(CP_UTF8);
	cout << "������� ��� �����: ";
	cin >> a >> b;
	cout << "\n ����� = " << abs(a) + abs(b) << "\n �������� = " << abs(a) - abs(b) << "\n ������������ = " << abs(a) * abs(b) << "\n ������� = " << abs(a) / abs(b);
	return 0;
}