#include <iostream>
#include <string>

using namespace std;

int a, b;
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

int Sign(float a)
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
	cout << "";
	cin >> a;
	cout << "";
}

void task3()
{

}

void task4()
{

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