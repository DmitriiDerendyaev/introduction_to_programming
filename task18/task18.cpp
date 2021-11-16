#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

float el, summ = 0;
vector<float> vec;
vector<float> vec1;
vector<float> vec2;

void reading(vector<float>& vec)
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

void writing(vector<float>& vec)
{
	cout << vec[0];
	for (int i = 1; i < vec.size(); i++)
	{
		cout << ", " << vec[i];
	}

	cout << endl;
}

void clearing(void)
{
	vec1.clear();
	vec2.clear();
}

void task1(void)
{
	cout << "You should fill two similar arrays." << endl;
	reading(vec1);
	reading(vec2);

	for (int i = 0; i < vec1.size(); i++)
	{
		swap(vec1[i], vec2[i]);
	}

	writing(vec1);
	writing(vec2);

}

void task2(void)
{
	clearing();

	reading(vec1);
	/*vec2.reserve(vec1.size() + 1);
	fill_n(vec2.begin(), vec1.size(), 0);*/
	
	//reading(vec2);

	vector<float> vec3(vec1.size());
	summ = 0;

	for (int i = 0; i < vec1.size(); i++)
	{
		summ += vec1[i];
		vec3[i] = summ / (float)(i + 1);
	}


	/*cout << vec3[0];
	for (int i = 1; i < vec3.size(); i++)
	{
		cout << ", " << vec3[i];
	}*/
	//writing(vec1);
	writing(vec3);

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