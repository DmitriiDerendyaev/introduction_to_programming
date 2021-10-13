#include <iostream>
#include <string>

using namespace std;

int a, b,c, lenght_ab, lenght_ac, sum = 0;

string task1(int a, int b)
{
	string strok1;
	if (a != b)
	{
		a = max(a, b);
		b = max(a, b);
	}
	else
	{
		a = 0;
		b = 0;
	}
	strok1 += "A = ";
	strok1 += to_string(a);
	strok1 += "; B = ";
	strok1 += to_string(b);

	return strok1;
}

string task2(int a, int b, int c)
{
	string strok2;
	int d[] = { a,b,c };
	for(int i = 0; i < 3 - 1; i++)
		for(int j = 0; j < 3 - 1; j++)
			if (d[i] > d[i + 1])
			{
				swap(d[i], d[i + 1]);
			}
	sum = d[1] + d[2];

	strok2 += "Sum of biggest value is: ";
	strok2 += to_string(sum);

	return strok2;
}

string task3(int a, int b, int c)
{
	string strok3;
	lenght_ab = abs(b - a);
	lenght_ac = abs(c - a);
	if (lenght_ab < lenght_ac)
	{
		strok3 += "Point B more nearest then C. Lenght AB is:";
		strok3 += to_string(lenght_ab);
	}
	else if(lenght_ab > lenght_ac)
	{
		strok3 += "Point C more nearest then B. Lenght AC is:";
		strok3 += to_string(lenght_ac);
	}
	else
	{
		strok3 += "Error, when A = B = C or other errors in input data.";
	}
	return strok3;
}

string task4(int x, int y)
{
	string strok4;
	if (x > 0 and y > 0)
		strok4 += "In the first quarter.";
	else if (x < 0 and y > 0)
		strok4 += "In the seconf quarter.";
	else if (x < 0 and y < 0)
		strok4 += "In the third quarter.";
	else if (x > 0 and y < 0)
		strok4 += "In the fourth quarter.";
	else
		strok4 += "The point is on the coordinate axis.";
	return strok4;
}

string task5(int a)
{
	string strok5;
	if (a > 0)
		strok5 += "Positive, ";
	else
		strok5 += "Negative, ";
	if (a % 2 == 0)
		strok5 += "even, ";
	else
		strok5 += "odd, ";
	strok5 += "number";

	return strok5;
}

string task5(int a)
{
	string strok5;
	if (a > 0)
		strok5 += "Positive, ";
	else
		strok5 += "Negative, ";
	if (a % 2 == 0)
		strok5 += "even, ";
	else
		strok5 += "odd, ";
	strok5 += "number";

	return strok5;
}

int main()
{
	int z, count = 0;
	cout << "If you want to interrupt program, enter 0:" << endl;
	cout << "Enter the task number:";
	cin >> z;
	while (count < 6)
	{
		switch (z)
		{

		case 1:
		{
			cout << "Enter the value of A:";
			cin >> a;
			cout << endl << "Enter the value of B:";
			cin >> b;
			cout << task1(a, b) << endl;
			count++;
			break;

		}
		case 2:
		{
			cout << "Enter the value of A:";
			cin >> a;
			cout << endl << "Enter the value of B:";
			cin >> b;
			cout << endl << "Enter the value of C:";
			cin >> c;
			cout << task2(a, b, c) << endl;
			count++;
			break;
		}
		case 3:
		{
			cout << "Enter the value of A:";
			cin >> a;
			cout << endl << "Enter the value of B:";
			cin >> b;
			cout << endl << "Enter the value of C:";
			cin >> c;
			cout << task3(a, b, c) << endl;
			count++;
			break;
		}
		case 4:
		{
			cout << "Enter the value of X:";
			cin >> a;
			cout << endl << "Enter the value of Y:";
			cin >> b;
			cout << task4(a, b) << endl;
			count++;
			break;

		}
		case 5:
		{
			cout << "Enter the value of number:";
			cin >> a;
			cout << task5(a) << endl;
			count++;
			break;

		}
		case 0:
		{
			cout << "Stop.";
			return 0;
			break;
		}
		default:
			cout << "Error";
			break;
		}

		cout << "Enter the task number:";
		cin >> z;
	}


	return 0;
}