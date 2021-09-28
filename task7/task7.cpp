#include <iostream>
#include <string>

using namespace std;
const float pi = 3.1415926535;
float deg, rad, a;

string task1_7(float a)
{
	string strok1;
	rad = a / pi;
	strok1 += "Angle: ";
	strok1 += to_string(rad);
	strok1 += " rad";

	return strok1;

}

string task2_7(float rad)
{
	string strok2;
	deg = rad * pi;
	strok2 += "The angle is: ";
	strok2 += to_string(deg);

	return strok2;
}

int main()
{
	int z;

	cout << "Enter the task number: " << endl;
	cin >> z;

	switch (z)
	{
	case 1:
	{
		cout << "Enter value of angle:";
		cin >> a;
		cout << task1_7(a);
	}
	case 2:
	{
		cout << "Enter value of rad:";
		cin >> rad;
		cout << task2_7(rad);
	}
	/*
	case 1:
	{
		cout << "Enter value of angle:";
		cin >> a;
		cout << task1_7(a);
	}
	case 1:
	{
		cout << "Enter value of angle:";
		cin >> a;
		cout << task1_7(a);
	}
	case 1:
	{
		cout << "Enter value of angle:";
		cin >> a;
		cout << task1_7(a);
	}
	case 1:
	{
		cout << "Enter value of angle:";
		cin >> a;
		cout << task1_7(a);
	}
	*/
	}

	return 0;
}