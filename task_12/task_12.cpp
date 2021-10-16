#include <iostream>
#include <string>

using namespace std;

int day, month;

string task1(int day, int month)
{
	string strok1;
	
	switch (day)
	{
	case 1:
		strok1 += "First";
		break;
	case 2:
		strok1 += "Second";
		break;
	case 3:
		strok1 += "Third";
		break;
	case 4:
		strok1 += "Fourth";
		break;
	case 5:
		strok1 += "Fifth";
		break;
	case 6:
		strok1 += "Sixth";
		break;
	case 7:
		strok1 += "Seventh";
		break;
	case 8:
		strok1 += "Eighth";
		break;
	case 9:
		strok1 += "Nineth";
		break;
	case 10:
		strok1 += "Tenth";
		break;
	case 11:
		strok1 += "Eleventh";
		break;
	case 12:
		strok1 += "Twelfth";
		break;
	case 13:
		strok1 += "Thirteenth";
		break;
	case 14:
		strok1 += "Fourteenth";
		break;
	case 15:
		strok1 += "Fiveteenth";
		break;
	case 16:
		strok1 += "Sixteenth";
		break;
	case 17:
		strok1 += "Seventeenth";
		break;
	case 18:
		strok1 += "Eighteenth";
	case 19:
		strok1 += "Nineteenth";
	case 20:
		strok1 += "Twenteenth";
	case 21:
		strok1 += "Twenty first";
	case 22:
		strok1 += "Twenty second";
	case 23:
		strok1 += "Twenty third";
	case 24:
		strok1 += "Twenty fourth";
	case 25:
		strok1 += "Twenty fifth";
	case 26:
		strok1 += "Twenty sixth";
	case 27:
		strok1 += "Twenty seventh";
	case 28:
		strok1 += "Twenty eight";
	case 29:
		strok1 += "Twenty nineth";
	case 30:
		strok1 += "Thirtieth";
	case 31:
		strok1 += "Thirty first";
	default:
		break;
	}

	strok1 += " ";

	switch (month)
	{
	case 1:
		strok1 += "January";
		break;
	case 2:
		strok1 += "February";
		break;
	case 3:
		strok1 += "April";
		break;
	case 4:
		strok1 += "March";
		break;
	case 5:
		strok1 += "May";
		break;
	case 6:
		strok1 += "June";
		break;
	case 7:
		strok1 += "July";
		break;
	case 8:
		strok1 += "August";
		break;
	case 9:
		strok1 += "September";
		break;
	case 10:
		strok1 += "October";
		break;
	case 11:
		strok1 += "November";
		break;
	case 12:
		strok1 += "December";
		break;
	default:
		break;
	}
	return strok1;
}

int main()
{
	int z;
	cin >> z;
	switch (z)
	{
	case 1:
	{
		cout << "Enter the day number: ";
		cin >> day;
		cout << "Enter the month number: ";
		cin >> month;
		cout << task1(day, month);
	}
	case 2:
	{

	}
	case 3:
	{

	}
	case 4:
	{

	}
	case 5:
	{

	}
	default:
		break;
	}

	return 0;
}