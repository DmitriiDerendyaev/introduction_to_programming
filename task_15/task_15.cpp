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
	cout << "Введите число А:";
	cin >> a;
	cout << "3 cтепень " << a << " = " << PowerA3(a) << endl;

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
	cout << "Введите число А:";
	cin >> a;
	cout << "Введите число В:";
	cin >> b;
	cout << "Значение выражение равно: " << Sign(a) + Sign(b) << endl;
}

float RingS(float R1, float R2)
{
	s = pi * (pow(R1, 2) - pow(R2, 2));
	return s;
}
void task3()
{
	cout << "Введите число R1(Наиболший радиус):";
	cin >> a;
	cout << "Введите число R2(Наименьший радиус):";
	cin >> b;
	cout << "Значение выражение равно: " << RingS(a, b) << " квадратных единиц" << endl;
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
	cout << "Введите число X:";
	cin >> a;
	cout << "Введите число Y:";
	cin >> b;
	cout << "Точка нахожится в четверти №" << Quarter(a, b) << endl;
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