#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int el;
vector<int> vec;

void reading(vector<int> vec)
{
	while (cin >> el)
	{
		if (el != 0)
		{
			vec.push_back(el);
		}
		else
		{
			break;
		}
	}
}

void writing(vector<int> vec)
{
	cout << vec[0];
	for (int i = 1; i < vec.size(); i++)
	{
		cout << ', ' << vec[i];
	}
}

void task1(void)
{

}

void task2(void)
{

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
	cout << "Enter the number of operations:";
	cin >> count_task;
	cout << "Enter the number of task: ";
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
		cout << "If you want to exit the program press 0, otherwise enter the task number:";
		cin >> z;
	}
	return 0;
}