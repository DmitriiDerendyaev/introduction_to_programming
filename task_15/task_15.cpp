#include <iostream>
#include <string>

using namespace std;

int a, b, answ;
const float pi = 3.14;
float s, R1, R2, fac = 1, n = 0, i = 1;
int PowerA3(int a)
{
	b = a * a * a;

	return b;
}
void task1(void)
{
	cout << "������� ����� �:";
	cin >> a;
	cout << "3 c������ " << a << " = " << PowerA3(a) << endl;

}

int Sign(float x)
{
	if (x < 0)
		return -1;
	else if (x == 0)
		return 0;
	else if (x > 0)
		return 1;
}

void task2(void)
{
	cout << "������� ����� �:";
	cin >> a;
	cout << "������� ����� �:";
	cin >> b;
	cout << "�������� ��������� �����: " << Sign(a) + Sign(b) << endl;
}

float RingS(float R1, float R2)
{
	s = pi * (pow(R1, 2) - pow(R2, 2));
	return s;
}
void task3()
{
	cout << "������� ����� R1(��������� ������):";
	cin >> a;
	cout << "������� ����� R2(���������� ������):";
	cin >> b;
	cout << "�������� ��������� �����: " << RingS(a, b) << " ���������� ������" << endl;
}

int Quarter(int x, int y)
{
	if (x > 0 and y > 0)
		answ = 1;
	else if (x < 0 and y > 0)
		answ = 2;
	else if (x < 0 and y < 0)
		answ = 3;
	else if (x > 0 and y < 0)
		answ = 4;
	else
		answ = 0;
	return answ;
}

void task4()
{
	cout << "������� ����� X:";
	cin >> a;
	cout << "������� ����� Y:";
	cin >> b;
	cout << "����� ��������� � �������� �" << Quarter(a, b) << endl;
}

float Fact2(float n)
{
	if (n % 2 == 0)
	{
		while (i < n)
		{
			fac *= i;
			i += 2;
		}
	}
}

void task5()
{

}

void task6()
{

}

int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count_task, count = 0;
	cout << "������� ���������� ��������:";
	cin >> count_task;
	cout << "�������� ����� �������:";
	cin >> z;
	while (count < count_task)
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
		case 6:
		{
			task6();
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
		cout << "�������� ����� ������� ��� 0 ��� ���������� ������:";
		cin >> z;
	}
	return 0;
}