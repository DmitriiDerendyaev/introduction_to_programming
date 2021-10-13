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

string task4(int a, int b)
{
	string strok4;
	lenght_ab = abs(b - a);
	lenght_ac = abs(c - a);
	if (lenght_ab < lenght_ac)
	{
		strok3 += "Point B more nearest then C. Lenght AB is:";
		strok3 += to_string(lenght_ab);
	}
	else if (lenght_ab > lenght_ac)
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