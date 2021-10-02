#include <iostream>
#include <string>

using namespace std;

int sec, day;

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

int main()
{
    int z;
    cin >> z;

	switch (z)
	{
	case 1:
	{
		cin >> sec;
		cout << task1(sec);
		break;
	}
	case 2:
	{
		cin >> day;
		cout << task2(day);
		break;
	}
	default:
		break;
	}
}
