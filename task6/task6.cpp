#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
#include <iomanip>
#include <math.h>

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

string task3_6(float a, float b, float c)
{
	string strok3;
	float a1, b1, c1;
	a1 = a;
	b1 = b;
	c1 = c;
	swap(a1, c);
	swap(c1, b);
	swap(b1, a);
	strok3 += "Value of A: ";
	strok3 += to_string(a);
	strok3 += "; Value of B: ";
	strok3 += to_string(b);
	strok3 += "; Value of C: ";
	strok3 += to_string(c);

	return strok3;
}

string task4_6(float x)
{
	string strok4;
	float y;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	strok4 += "Value of y: ";
	strok4 += to_string(y);

	return strok4;
}

string task5_6(float x)
{
	string strok5;
	float y;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	strok5 += "Value of y: ";
	strok5 += to_string(y);

	return strok5;
}

string task6_6(float a)
{
	string strok6;
	float b;
	b = a * a;
	a = b * b;
	b = a * a;
	strok6 += "Value of A: ";
	strok6 += to_string(b);

	return strok6;
}

string task7_6(float a)
{
	string strok7;
	float b, c;
	b = a * a;
	c = a * b;
	c = c * b;
	b = c * c;
	c = b * c;
	strok7 += "Value of A: ";
	strok7 += to_string(c);

	return strok7;
}

int main()
{
	cout << setprecision(3);

	int z;
	cout << "Pleace, enter task number(1-7): " << endl;
	cin >> z;
	float a, b, c, x, y;
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
	case 3:
	{
		cout << "Enter value of variables..." << endl;
		cout << "A = ";
		cin >> a;
		cout << "B = ";
		cin >> b;
		cout << "C = ";
		cin >> c;
		cout << task3_6(a, b, c) << endl;
	}
	case 4:
	{
		cout << "Enter value of variables..." << endl;
		cout << "X = ";
		cin >> x;
		cout << task4_6(x) << endl;
	}
	case 5:
	{
		cout << "Enter value of variables..." << endl;
		cout << "X = ";
		cin >> x;
		cout << task5_6(x) << endl;
	}
	case 6:
	{
		cout << "Enter value of variables..." << endl;
		cout << "A = ";
		cin >> x;
		cout << task6_6(x) << endl;
	}
	case 7:
	{
		cout << "Enter value of variables..." << endl;
		cout << "A = ";
		cin >> x;
		cout << task7_6(x) << endl;
	}
	}
	
	return 0;
}