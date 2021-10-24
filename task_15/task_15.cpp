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
	cout << "Введите число А:";
	cin >> a;
	cout << "3 cтепень " << a << " = " << PowerA3(a) << endl;

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
	cout << "Введите количество операций:";
	cin >> count_task;
	cout << "Выберите номер задания:";
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
		cout << "Выберите номер задания или 0 для завершение работы:";
		cin >> z;
	}
	return 0;
}