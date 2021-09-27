#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
#include <iomanip>

using namespace std;

string task1_6(float a, float b)
{
	setlocale(LC_ALL, "Russian");
	string strok1;
	float buf;
	buf = b;
	b = a;
	a = buf;
	strok1 += "Values of A: ";
	strok1 += to_string(a);
	strok1 += "; Values of B: ";
	strok1 += to_string(b);
	strok1 += " //Задача реализована с использованием 3й переменной, но могла быть также реализована посредством функции swap";
	return strok1;
}

string task2_6(float a, float b, float c)
{
	string strok2;
	float a1, b1, c1;
	a1 = a;
	b1 = b;
	c1 = c;
	swap(a1, b);
	swap(b1, c);
	swap(c1, a);
	strok2 += "Value of A: ";
	strok2 += to_string(a);
	strok2 += "; Value of B: ";
	strok2 += to_string(b);
	strok2 += "; Value of C: ";
	strok2 += to_string(c);

	return strok2;
}


int main()
{
	cout << setprecision(3);

	int z;
	cout << "Pleace, enter task number(1-5): " << endl;
	cin >> z;
	float a, b,c;
	switch (z)
	{
	case 1:
	{
		cout << "Enter value of variables..." << endl;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << task1_6(a, b) << endl;
	}
	case 2:
	{
		cout << "Enter value of variables..." << endl;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		cout << task2_6(a, b, c) << endl;
	}
	}

	return 0;
}