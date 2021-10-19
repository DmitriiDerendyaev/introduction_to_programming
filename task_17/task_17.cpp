#include <iostream>
#include <vector>

using namespace std;

//vector <int> vec1;
int k, l, n;
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
		cout << "Massive is't progressive";
	else
}

int main()
{
	int z, count_while = 0;
	cin >> z;

	while(count_while < 5)
	switch (z)
	{
	case 1:
	{
		task1();
		count_while++;
		break;
	}
	default:
		break;
	}

	return 0;
}