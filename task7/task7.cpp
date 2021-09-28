#include <iostream>
#include <string>

using namespace std;
const float pi = 3.1415926535;
float deg, rad, a, amount_x, amount_y, price, total_x, total_y;

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

string task3_7(float amount_x, float total_x/*, float amount_y*/)
{
	string strok3;
	price = total_x / amount_x;
	cout << "Enter value of amount_y: ";
	cin >> amount_y;
	total_y = price * amount_y;
	strok3 += "1kg costs:";
	strok3 += to_string(price);
	strok3 += "; ";
	strok3 += to_string(amount_y);
	strok3 += "kg costs:";
	strok3 += to_string(total_y);

	return strok3;
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
	
	case 3:
	{
		cout << "Enter value of amount_X:";
		cin >> amount_x;
		cout << "Enter value of total_X:";
		cin >> total_x;
		cout << task3_7(amount_x, total_x);
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
	*/
	}

	return 0;
}