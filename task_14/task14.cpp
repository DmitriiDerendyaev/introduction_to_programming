#include <iostream>
#include <string>

using namespace std;

int a, b, suma = 0, n/*, �*/;

void task1(void)
{
	cout << "������� ����� �:";
	cin >> a;
	cout << "������� ����� B:";
	cin >> b;
	for (a; a <= b; a++)
	{
		cout << a;
		for (int i = 1; i < a; i++)
		{
			cout << ", " << a;
		}
			
		cout << endl;
	}
}

void task2(void)
{
	int count = 0;
	suma = 0;
	cout << "������� ����� �:";
	cin >> a;
	cout << "������� ����� B:";
	cin >> b;
	while (suma <= a)
	{
		suma += b;
		count++;
	}
	cout << endl << count - 1 << endl;
}

void task3()
{
	cout << "������� ����� N:";
	cin >> n;
	int k;
	for (k = 1; k < n; k++)
	{
		suma += k;
		if (suma >= n)
			break;
	}
	cout << "K:" << k << " Sum:" << suma << endl;
	
}

void task4()
{
	float s = 1000, p;
	int count = 0;
	cout << "������� ���������� ������:";
	cin >> p;

	while (s <= 1100)
	{
		s *= 1 + (p * 0.01);
		count++;
	}
	cout << "���������� �������:" << count << " �����:" << s << endl;

}

int NOD(int a, int b) {
	if (a < b) {
		swap(a, b);
	}
	while (a % b != 0) 
	{
		a = a % b;
		swap(a, b);
	}
	return b;
}

void task5()
{
	cout << "������� ����� �:";
	cin >> a;
	cout << "������� ����� B:";
	cin >> b;
	cout << "���: " << NOD(a, b) << endl;
}

void task6()
{
	cout << "������� ����� N:";
	cin >> n;
	int f = 0, f1 = 0, f2 = 1, k = 0;
	while (f < n)
	{
		f = f1 + f2;
		f2 = f1;
		f1 = f;
		k++;
	}
	cout << "����� �:" << k << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count_task, count = 0;
	cout << "������� ���������� ��������:";
	cin >> count_task;
	cout << "�������  ����� �������:";
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
		cin >> z;
	}



	return 0;
}