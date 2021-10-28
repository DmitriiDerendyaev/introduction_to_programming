#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//vector <int> vec1;
int k, l, n, d, dd;
float sum;
void writing(vector<int>& vec1)
{

	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << " ";
}

void reading(vector<int> &vec1, int vec_size)
{
	int el;
	for (int i = 0; i < vec_size; i++)
	{
		cin >> el;
		vec1.push_back(el);
	}
}


void task1(void)
{
	int count = 0;
	cout << "N: ";
	cin >> n;
	vector <int> vec1;//k < l < n
	cout << endl << "K: ";
	cin >> k;
	cout << endl << "L: ";
	cin >> l;
	vec1.reserve(n);
	reading(vec1, n);
	for (int i = k - 1; i < l; i++)//первый элемент, с него и начинаем
	{
		sum += vec1[i];
		count++;
	}
	sum = sum / count;
	cout << sum;
}

void task2(void)
{
	cout << "N: ";
	cin >> n;
	vector <int> vec2;
	vec2.reserve(n);
	reading(vec2, n);
	d = vec2[1] - vec2[0];
	for (int i = 2; i < n; i++)
		dd = vec2[i] - vec2[i - 1];
	if (dd != d)
		cout << "Не является арифметической прогрессией" << endl;
	else
		cout << "Перед нами арифметическая прогрессия, ее разность: " << dd;
}

void task3(void)
{
	cout << "N: ";
	cin >> n;
	vector <int> vec3;
	vector <int> vec3_sub;
	vec3.reserve(n);
	reading(vec3, n);
	sort(vec3.begin(), vec3.end());
	for (int i = 1; i < vec3.size(); i += 2)//magic string 74
	{
		vec3_sub.push_back(vec3[i]);
	}
	sort(vec3_sub.begin(), vec3_sub.end());
	cout << "Минимальный элемент с четным номером исходного массива(А2): " << vec3_sub[0] << endl;

}

void task4(void)
{

}

void task5(void)
{

}
int main()
{
	setlocale(LC_ALL, "Russian");
	int z, count_while = 0;
	cout << "Введите номер задания, если вы хотите покинуть программу введите 0:";
	cin >> z;
	
	while (count_while < 5)
	{
		switch (z)
		{
		case 1:
		{
			task1();
			count_while++;
			break;
		}
		case 2:
		{
			task2();
			count_while++;
			break;
		}
		case 3:
		{
			task3();
			count_while++;
			break;
		}
		case 4:
		{
			task4();
			count_while++;
			break;
		}
		case 5:
		{
			task5();
			count_while++;
			break;
		}
		case 0:
		{
			cout << "Stop.";
			return 0;
			break;
		}
		default:
		{
			cout << "Wrong number" << endl;
			break;
		}
		}
		cout << "Введите номер задания, если вы хотите покинуть программу введите 0:";
		cin >> z;
	}
	return 0;
}