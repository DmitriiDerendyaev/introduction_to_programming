#include <iostream>
#include <string>
#include <clocale>
#include <cmath>

using namespace std;

int n, a;
float price;

void task1(void)
{
	cout << "���� ���������� ������:";
	cin >> n;
	for (int i = 1; i <= 10; i++)
	{
		cout.precision(3);
		price = n * (i * 0.1);
		cout << "���� " << i * 0.1 << "�� ������ �����:" << price << endl;
	}
}

void task2(void)
{
	cout << "������� �����:";
	cin >> n;
	float additional = 1;
	for (int i = 1; i <= n; i++)
	{
		cout.precision(3);
		additional *= 1 + (i * 0.1);
		cout << "������������ �����:" << additional << endl;
	}
}

void task3(void)
{
	cout << "������� �����:";
	cin >> n;
	float kv = 0;
	for (int i = 1; i <= n; i++)
	{
		cout.precision(3);
		kv += 2 * i - 1;
		cout << "������������ �� ����� " << i << " �����:" << kv << endl;
	}
}

void task4(void)
{
	cout << "������� ����� A:";
	cin >> a;
	cout << "������� ����� N:";
	cin >> n;
	float suma = 0;
	for (int i = 0; i <= n; i++)
	{
		cout.precision(3);
		suma += pow(a, i);
		cout << "����� �����:" << suma << endl;
	}
}

void task5(void)
{
	cout << "������� ����� A:";
	cin >> a;
	cout << "������� ����� N:";
	cin >> n;
	float suma = 0;
	for (int i = 0; i <= n; i++)
	{
		cout.precision(3);
		suma += pow(-a, i);
		cout << "����� �����:" << suma << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count = 0;
	cout << "������� ����� �������:";
	cin >> z;
	while (n < 6)
	{
		switch (z)
		{
		case 1:
		{
			task1();
			count++;
			break;
		}
		case 2:
		{
			task2();
			count++;
			break;
		}
		case 3:
		{
			task3();
			count++;
			break;
		}
		case 4:
		{
			task4();
			count++;
			break;
		}
		case 5:
		{
			task5();
			count++;
			break;
		}
		case 0:
		{
			cout << "Stop";
			return 0;
			break;
		}
		default:
			break;
		}
		cout << "���� �� ������� ���������� ���������, ������� 0, ����� ������� ����� �������:";
		cin >> z;
	}

	return 0;
}