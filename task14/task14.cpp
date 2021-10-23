#include <iostream>
#include <string>

using namespace std;

int a, b, suma = 0;

void task1(void)
{
	cout << "Введите число А:";
	cin >> a;
	cout << "Введите число B:?";
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
	cout << "Введите число А:";
	cin >> a;
	cout << "Введите число B:";
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

}

void task4()
{

}
void task5()
{

}

int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count_task, count = 0;
	cout << "Введите количество операций:";
	cin >> count_task;
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