#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int day, month, direction, n, h, d, u, last_year, color_cur, animal_cur;
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
	if ((int)c == 78 or (int)c == 110 or (int)c == 145 or (int)c == 225)
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
	if ((n >= 10 and n < 21) or (n == 20) or (n == 30) or (n == 40))
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
		}
		strok3 += " учебных заданий.";
	}
	if ((n >= 25 and n < 30) or (n >= 35 and n < 40))
	{
		switch (n)
		{
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
	if ((n > 21 and n < 25) or (n > 31 and n < 35))
	{
		switch (n)
		{
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
			strok3 += "Тридцать четыре";
			break;
		}
		default:
			break;
		}
		strok3 += " учебных задания.";
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

string task4(int n)
{
	string strok4, hundreds[9] = {"Сто", "Двести", "Триста", "Четыреста", 
		"Пятьсот", "Шестьсот", "Семьсот", "Восемьсот", "Девятьсот" }, 
		dozens_0[9] = { "Десять", "Двадцать", "Тридцать", "Сорок", "Пятьдесят", "Шестьдесят", 
		"Семьдесят", "Восемьдесят", "Девяносто" }, dozens_1[9] = { " десять", " двадцать", " тридцать", " сорок", " пятьдесят", " шестьдесят",
		" семьдесят", " восемьдесят", " девяносто" }, units_1[9] = { " один", " два",
		" три", " четыре", " пять", " шесть",
		" семь", " восемь", " девять" }, units_0[9] = { "Один", "Два",
		"Три", "Четыре", "Пять", "Шесть",
		"Семь", "Восемь", "Девять" };;
	
	h = n / 100;
	d = n % 100 / 10;
	u = n % 10;
	if (h != 0 and d != 0)
	{
		strok4 += hundreds[h - 1];
		if(d == 1 and u == 1)
			strok4 += " одиннадцать";
		else
		{
			strok4 += dozens_1[d - 1];
			strok4 += units_1[u - 1];
		}
	}
else if (h == 0)
	{
		strok4 += dozens_0[d - 1];
		strok4 += units_1[u - 1];
	}
	else if (d == 0 and h == 0)
	strok4 += units_0[u-1];

	return strok4;
}

string task5(int n)
{
	string strok5, color[5] = {"зелен", "красн", "желт", "бел", "черн"},
		animal[12] = {"ой крысы","ой коровы","ого тигра","ого зайца","ого дракона","ой змеи", "ой лошади",
		"ой овцы","ой обезьяны", "ой курицы","ой собаки","ой свиньи" };
	last_year = (n - 1984) % 60;
	color_cur = last_year / 12;
	animal_cur = last_year % 12;
	strok5 += "Год ";
	strok5 += color[color_cur];
	strok5 += animal[animal_cur];
	
	return strok5;
}

int main()
{
	setlocale(LC_ALL, "");
	int z, count = 0;
	cout << "Введите номер задания:";
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
			cout << "Введите число: ";
			cin >> n;
			cout << task4(n) << endl;
			count++;
			break;
		}
		case 5:
		{
			cout << "Введите год: ";
			cin >> n;
			cout << task5(n) << endl;
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
			break;
		}
		cout << "Если вы хотите выйти из программы, введите '0', иначе выберите задание:";
		cin >> z;
	}

	return 0;
}
	