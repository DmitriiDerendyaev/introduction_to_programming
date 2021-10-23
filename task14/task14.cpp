#include <iostream>
#include <string>

using namespace std;

int a, b;

void task1(void)
{
	cout << "Введите число А:";
	cin >> a;
	cout << "Введите число B:";
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

		}
		case 3:
		{

		}
		case 4:
		{

		}
		case 5:
		{

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
	}



	return 0;
}