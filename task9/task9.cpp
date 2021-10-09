#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int a, b, c, sec, day, n, area_AB, area_C, amount, year, century;

string task1(int n)
{
	string strok1;
	sec = n % 216000;
	strok1 += "In last minute:";
	strok1 += to_string(sec);

	return strok1;
}

string task2(int day)
{
	string strok2;
	day = day % 7;
	switch (day)
	{
	case 0:
	{
		strok2 += "Current weekday: Sunday";
		break;
	}
	case 1:
	{
		strok2 += "Current weekday: Monday";
		break;
	}
	case 2:
	{
		strok2 += "Current weekday: Tuesday";
		break;
	}
	case 3:
	{
		strok2 += "Current weekday: Wednesday";
		break;
	}
	case 4:
	{
		strok2 += "Current weekday: Thursday";
		break;
	}
	case 5:
	{
		strok2 += "Current weekday: Friday";
		break;
	}
	case 6:
	{
		strok2 += "Current weekday: Saturday";
		break;
	}
	}

	return strok2;
}

string task3(int day, int n)
{
	string strok3;
	day = (day + n - 1)  % 7;
	switch (day)
	{
	case 7:
	{
		strok3 += "Current weekday: Sunday";
		break;
	}
	case 1:
	{
		strok3 += "Current weekday: Monday";
		break;
	}
	case 2:
	{
		strok3 += "Current weekday: Tuesday";
		break;
	}
	case 3:
	{
		strok3 += "Current weekday: Wednesday";
		break;
	}
	case 4:
	{
		strok3 += "Current weekday: Thursday";
		break;
	}
	case 5:
	{
		strok3 += "Current weekday: Friday";
		break;
	}
	case 6:
	{
		strok3 += "Current weekday: Saturday";
		break;
	}
	}

	return strok3;
}

string task4(int a, int b, int c)
{
	string strok4;
	area_AB = a * b;
	area_C = pow(c, 2);
	if (area_C == 0)
	{
		cout << "Error" << endl;
		return 0;
	}
	if (area_C > a or area_C > b)
	{
		strok4 += "Error";
		return strok4;
	}
	else
	{
		amount = area_AB / area_C;
		area_AB = area_AB % area_C;
	}
	strok4 += "The rectangle fits ";
	strok4 += to_string(amount);
	strok4 += " squares; Cells left: ";
	strok4 += to_string(area_AB);

	return strok4;
}

string task5(int year)
{
	string strok5;
	century = year / 100 + 1;
	strok5 += "Century is: ";
	strok5 += to_string(century);
	strok5 += " ";
	return strok5;
}

int main()
{
    int z, count = 0;
	cout << "Enter the task number:" << endl;
    cin >> z;
	while(count <= 5)
	{
		switch (z)
		{
		case 1:
		{
			cin >> sec;
			cout << task1(sec) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 2:
		{
			cin >> day;
			cout << task2(day) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 3:
		{
			cin >> day >> n;
			cout << task3(day, n) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 4:
		{
			cin >> a >> b >> c;
			cout << task4(a, b, c) << endl;
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 5:
		{
			cin >> year;
			cout << task5(year);
			cout << "If you want to stop the programm, enter 0." << endl;
			count++;
			break;
		}
		case 0:
		{
			cout << "Closing the program." << endl;
			return 0;
			break;
		}
		default:
			break;
		}
	}
	return 0;
}
