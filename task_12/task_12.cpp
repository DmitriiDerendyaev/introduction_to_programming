#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int day, month, direction, n;
char c;

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
		break;
		strok1 += "Eighteenth";
		break;
	case 19:
		strok1 += "Nineteenth";
		break;
	case 20:
		strok1 += "Twenteenth";
		break;
	case 21:
		strok1 += "Twenty first";
		break;
	case 22:
		strok1 += "Twenty second";
		break;
	case 23:
		strok1 += "Twenty third";
		break;
	case 24:
		strok1 += "Twenty fourth";
		break;
	case 25:
		strok1 += "Twenty fifth";
		break;
	case 26:
		strok1 += "Twenty sixth";
		break;
	case 27:
		strok1 += "Twenty seventh";
		break;
	case 28:
		strok1 += "Twenty eight";
		break;
	case 29:
		strok1 += "Twenty nineth";
		break;
	case 30:
		strok1 += "Thirtieth";
		break;
	case 31:
		strok1 += "Thirty first";
		break;
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

string task2(char c, int n)//восприятие кириллицы оставляет желать лучшего
{
	setlocale(LC_ALL, "");
	string strok2, dir[4] = { "Север", "Восток", "Юг", "Запад"};
	if ((int)c == 67 or (int)c == 99 or (int)c == 145 or (int)c == 225)
	{
		direction = 0;
	}
	else if ((int)c == 69 or (int)c == 101 or (int)c == 130 or (int)c == 162)
	{
		direction = 1;
	}
	else if ((int)c == 83 or (int)c == 115 or (int)c == 158 or (int)c == 238)
	{
		direction = 2;
	}
	else if ((int)c == 87 or (int)c == 119 or (int)c == 135 or (int)c == 167)
	{
		direction = 3;
	}
	else
	{
		strok2 += "Error.";
		return strok2;
	}

	direction = (direction + n)%4;
	strok2 += dir[direction];
	return strok2;
}

string task3(int n)
{
	string strok3;
	if ((n >= 10 and n <= 40) and n != 21 and n != 31)
	{
		switch (n)
		{
		case 10:
			{
				strok3 += "Десять";
				break;
			}
		case 11:
			{
				strok3 += "Одиннадцать";
				break;
			}
		case 12:
			{
				strok3 += "Двеннадцать";
				break;
			}
		case 13:
			{
				strok3 += "Тринадцать";
				break;
			}
		case 14:
			{
				strok3 += "Четырнадцать";
				break;
			}
		case 15:
			{
				strok3 += "Пятнадцать";
				break;
			}
		case 16:
			{
				strok3 += "Шестнадцать";
				break;
			}
		case 17:
			{
				strok3 += "Семнадцать";
				break;
			}
		case 18:
			{
				strok3 += "Восемнадцать";
				break;
			}
		case 19:
			{
				strok3 += "Девятнадцать";
				break;
			}
		case 20:
			{
				strok3 += "Двадцать";
				break;
			}
		case 30:
			{
				strok3 += "Дридцать";
				break;
			}
		case 40:
			{
				strok3 += "Сорок";
				break;
			}
		case 22:
		{
			strok3 += "Двадцать два";
			break;
		}
		case 23:
		{
			strok3 += "Двеннадцать три";
			break;
		}
		case 24:
		{
			strok3 += "Двадцать четыре";
			break;
		}
		case 25:
		{
			strok3 += "Двадцать пять";
			break;
		}
		case 26:
		{
			strok3 += "Двадцать шесть";
			break;
		}
		case 27:
		{
			strok3 += "Двадцать семь";
			break;
		}
		case 28:
		{
			strok3 += "Двадцать восемь";
			break;
		}
		case 29:
		{
			strok3 += "Двадцать девять";
			break;
		}
		case 32:
		{
			strok3 += "Тридцать три";
			break;
		}
		case 33:
		{
			strok3 += "Тридцать три";
			break;
		}
		case 34:
		{
			strok3 += "Тидцать четыре";
			break;
		}
		case 35:
		{
			strok3 += "Тридцать пять";
			break;
		}
		case 36:
		{
			strok3 += "Тридцать шесть";
			break;
		}
		case 37:
		{
			strok3 += "Тридцать семь";
			break;
		}
		case 38:
		{
			strok3 += "Тридцать восемь";
			break;
		}
		case 39:
		{
			strok3 += "Тридцать девять";
			break;
		}
			default:
				break;
		}

		strok3 += " учебных заданий.";
	}
	if (n == 21 or n == 31)
	{
		switch (n)
		{
		case 21:
		{
			strok3 += "Двадцать одно";
			break;
		}
		case 31:
		{
			strok3 += "Тридцать одно";
			break;
		}
		
		default:
			break;
		}

		strok3 += " учебное задание.";
	}

	return strok3;
}

int main()
{
	setlocale(LC_ALL, "");
	int z, count = 0;
	cin >> z;
	while (count <= 6)
	{
		switch (z)
		{
		case 1:
		{
			cout << "Enter the day number: ";
			cin >> day;
			cout << "Enter the month number: ";
			cin >> month;
			cout << task1(day, month) << endl;
			count++;
			break;
		}
		case 2:
		{
			cout << "Enter the direction: ";
			cin >> c;
			cout << "Enter the count of operation: ";
			cin >> n;
			cout << task2(c, n) << endl;
			count++;
			break;
		}
		case 3:
		{
			cout << "Введите количество заданий: ";
			cin >> n;
			cout << task3(n) << endl;
			count++;
			break;
		}
		case 4:
		{

		}
		case 5:
		{

		}
		case 0:
		{
			cout << "Stop.";
			return 0;
			break;
		}
		default:
			break;
		}
		cin >> z;
	}

	return 0;
}