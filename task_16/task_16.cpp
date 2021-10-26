#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int n, a, b, d, suma, pos, ras;


void task1(void)
{
	vector<int> vec1;

	cout << "Введите число N:";
	cin >> n;

	int el;
	for (int i = 1; i <= n; i += 2)
	{
		el = i;
		vec1.push_back(el);
	}

	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << " ";
}

void task2(void)
{
	vector<int> vec2;

	cout << "Введите число N:";
	cin >> n;
	cout << "Введите первый член геометрической прогрессии A:";
	cin >> a;
	cout << "Введите знаменатель прогрессии D:";
	cin >> d;

	int el;
	for (int i = 1; i <= n; i += 2)
	{
		el = a * pow(d, i - 1);
		vec2.push_back(el);
	}

	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i] << " ";

}

void task3()
{
	vector<int> vec3;

	cout << "Введите размер массива N:";
	cin >> n;
	cout << "Введите первый элемент последовательности A:";
	cin >> a;
	cout << "Введите второй элемент последовательности B:";
	cin >> b;

	int el;
	vec3.push_back(a);
	vec3.push_back(b);

	suma = vec3[0] + vec3[1];

	for (int i = 2; i <= n; i++)
	{
		
		vec3.push_back(suma);
		suma += vec3[i];
	}

	for (int i = 0; i < vec3.size(); i++)
		cout << vec3[i] << " ";
}

void task4()
{
	vector<int> vec4;

	cout << "Введите число N:";
	cin >> n;

	int el;
	for (int i = 0; i < n; i++)
	{
		cin >> el;
		vec4.push_back(el);
	}
	////cout << vec4[0] << " ";
	//int i = 0, pos = 1;
	//while(i < (vec4.size()/2) + 1)
	//{
	//	if (pos % 2 != 0)
	//	{
	//		cout << vec4[i] << " ";
	//		i++;
	//	}
	//	else if (pos % 2 == 0)
	//	{
	//		cout << vec4[vec4.size() - 1 - pos + 2] << " ";
	//		//pos++;
	//		//i++;
	//	}
	//	pos++;

	//}
	/*for (int i = 0; i < n; i++)
	{*/
		pos = 0;
		ras = n - 1;
		while (pos <= ras)
		{
			cout << vec4[pos] << " ";
			if (pos == ras)
			{
				break;
			}
			cout << vec4[ras] << " ";
			pos++;
			ras--;
		}
	/*}*/
}


void task5()
{
	vector<int> vec5;
	vector<int> vec_odd;//нечетный
	vector<int> vec_even;//четный


	cout << "Введите число N:";
	cin >> n;

	int el;
	for (int i = 0; i < n; i++)
	{
		cin >> el;
		vec5.push_back(el);
	}

	for (int i = 0; i < vec5.size(); i++)
	{
		if (i % 2 == 0)
		{
			vec_even.push_back(vec5[i]);
		}
		else if (i % 2 != 0)
		{
			vec_odd.push_back(vec5[i]);
		}
	}
	sort(vec_even.begin(), vec_even.end());
	reverse(vec_odd.begin(), vec_odd.end());
	cout << "Программа выводит НЕчетные значения в порядке возрастания:" << endl;
	for (int i = 0; i < vec_even.size(); i++)
		cout << vec_even[i] << " ";
	
	cout << endl;

	cout << "Программа выводит Четные значения в порядке убывания:" << endl;
	for (int i = 0; i < vec_odd.size(); i++)
		cout << vec_odd[i] << " ";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count_task, count = 0;
	cout << "Введите количество операций:";
	cin >> count_task;
	cout << "Выберите номер задания : ";
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
		cout << "Чтобы завершить программу, введите 0, иначе введите номер задания:";
		cin >> z;
	}
	return 0;
}