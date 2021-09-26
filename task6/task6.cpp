#include <iostream>
#include <string>
#include <locale>

using namespace std;

string task1(float a, float b)
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
	strok1 += "//Задача реализована с использованием 3й переменной, но могла быть также реализована посредством функции swap";
	return strok1;
}


int main()
{
	int z;
	cout << "Pleace? enter task number(1-5): " << endl;
	cin >> z;
	float a, b;
	switch (z)
	{
	case 1:
	{
		cout << "Enter value of variables..." << endl;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << task1(a, b) << endl;
	}
	}

	return 0;
}