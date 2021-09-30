#include <iostream>
#include <string>

using namespace std;
const float pi = 3.1415926535;
float deg, rad, a, b, x,y, amount_x, amount_y, price, total_x, total_y, v1, v2, s, t;
float a11, a12, a21, a22, c1, c2, detA, detX, detY;

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

string task4_7(float v1, float v2, float s, float t)
{
	string strok4;
	s = s + (v1 * t) + (v2 * t);
	strok4 += "In ";
	strok4 += to_string(t);
	strok4 += " hours the distance will be ";
	strok4 += to_string(s);
	strok4 += " km.";

	return strok4;
}

string task5_7(float a, float b)
{
	string strok5;
	x = -b / a;
	strok5 += "X equals:";
	strok5 += to_string(x);

	return strok5;
}

string task6_7(float a11, float a12, float a21, float f22, float c1, float c2)
{
	string strok6;
	detA = a11 * a22 - a12 * a21;
	if (detA == 0)
	return "Error";
	detX = a12 * c2 - c1 * a22;
	detY = a11 * c2 - a12 * c1;
	x = detX / detA;
	y = detY / detA;
	strok6 += "X equals:";
	strok6 += to_string(x);
	strok6 += "; Y equals:";
	strok6 += to_string(y);

	return strok6;
}

int main()
{

	setlocale(LC_ALL, "Russian");

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
	
	case 4:
	{
		cout << "Enter the speed value of first car:";
		cin >> v1;
		cout << "Enter th speed value of second car:";
		cin >> v2;
		cout << "Enter the distance:";
		cin >> s;
		cout << "Enter value of the all time:";
		cin >> t;
		cout << task4_7(v1, v2, s, t);
	}
	case 5:
	{
		cout << "Enter value of coefficient A:";
		cin >> a;
		cout << "Enter value of coefficient B:";
		cin >> b;
		cout << task5_7(a, b);
	}
	case 6:
	{
		cout << "Enter the value of A1:";
		cin >> a11;
		cout << "Enter the value of B1:";
		cin >> a12;
		cout << "Enter the value of C1:";
		cin >> c1;
		cout << "Enter the value of A2:";
		cin >> a21;
		cout << "Enter the value of B2:";
		cin >> a22;
		cout << "Enter the value of C2:";
		cin >> c2;
		cout << task6_7(a11, a12, a21, a22, c1, c2) << endl;
		cout << "Система решена с помощью матрицы";
	}
	}
	return 0;
}