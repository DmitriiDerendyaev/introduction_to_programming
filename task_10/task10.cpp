#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int a, a1, a2, a3, b, c, buf;

string task1(int a, int b)
{
	string strok1;
	if (a > 2 and b <= 3)
	{
		strok1 += "True";
	}
	else
	{
		strok1 += "False";
	}
	return strok1;
}

string task2(int a, int b, int c)
{
	string strok2;
	if (c > b and b > a)
	{
		strok2 += "True";
	}
	else
	{
		strok2 += "False";
	}
	return strok2;
}

string task3(int a)
{
	string strok3;
	if ((a % 2 == 0) and (a / 100 == 0))
	{
		strok3 += "True";
	}
	else
	{
		strok3 += "False";
	}
	return strok3;
}

string task4(int a)
{
	string strok4;
	a1 = a % 10;
	a2 = a / 10 % 10;
	a3 = a / 100;
	if ((a2 > a1) and (a3 > a2))
		strok4 += "Descending";
	else if ((a2 < a1) and (a3 < a2))
	strok4 += "Increasing";
	else
	{
		strok4 += "Error";
	}
	return strok4;
}

string task5(int a)
{
	string strok5;
	a1 = a % 100;
	a2 = a / 100;
	buf = a2 % 10;//2442
	a2 = a2 / 10;
	a2 = buf * 10 + a2;
	if ((a2 == a1))
		strok5 += "The word is mirrored";
	else
	{
		strok5 += "Error";
	}
	return strok5;
}

string task6(int a, int b, int c)
{
	string strok6;
	
	if (pow(c,2) == pow(a,2) + pow(b, 2))
		strok6 += "Right triangle";
	else if (pow(b, 2) == pow(a, 2) + pow(c, 2))
		strok6 += "Right triangle";
	else if (pow(a, 2) == pow(c, 2) + pow(b, 2))
		strok6 += "Right triangle";
	else
	{
		strok6 += "Error";
	}
	return strok6;
}

string task7(int a, int b, int c)
{
	string strok7;

	if (((a + b) <= c) or ((a + c) <= b) or ((b + c) <= a))
		strok7 += "Triangle exist";
	else
	{
		strok7 += "Does not exist";
	}
	return strok7;
}

int main()
{
	int z, count = 0;

	cout << "Enter the task number:" << endl;
	cin >> z;

	while (count <= 7)
	{
		switch (z)
		{
		case 1:
		{
			cin >> a >> b;
			cout << task1(a, b) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 2:
		{
			cin >> a >> b >> c;
			cout << task2(a, b, c) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 3:
		{
			cin >> a;
			cout << task3(a) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 4:
		{
			cin >> a;
			cout << task4(a) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 5:
		{
			cin >> a;
			cout << task5(a) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 6:
		{
			cin >> a >> b >> c;
			cout << task6(a, b, c) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 7:
		{
			cin >> a >> b >> c;
			cout << task7(a, b, c) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 0:
		{
			cout << "Stopping programm.";
			return 0;
			break;
		}
		default:
			break;
		}
		cout << "Enter the task number:" << endl;
		cin >> z;
	}

	return 0;
}