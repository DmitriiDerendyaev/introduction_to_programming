#include <iostream>
#include <string>

using namespace std;

float kbites, bites;
float a, b, lenght;
int amount,num, des, edin, answer;

string task1(float bites)
{
	string strok1;
	kbites = bites / 1024;
	strok1 += "Kb:";
	strok1 += to_string((int)kbites);

	return strok1;
}

string task2(int a, int b)
{
	string strok2;
	amount = a / b;
	strok2 += "Amount:";
	strok2 += to_string(amount);

	return strok2;
}

string task3(float a, float b)
{
	string strok3;
	amount = a / b;
	lenght = amount * b;
	lenght = a - lenght;
	strok3 += "Lenght:";
	strok3 += to_string(lenght);

	return strok3;
}

string task4(int num)
{
	string strok4;
	des = num / 10;
	edin = num % 10;
	answer = edin * 10 + des;
	strok4 += "ReNumder:";
	strok4 += to_string(answer);

	return strok4;
}


int main()
{
	int z;

	cin >> z;

	switch (z)
	{
	case 1:
	{
		cout << "Enter amount of bites:";
		cin >> bites;
		cout << task1(bites);
	}
	case 2:
	{
		cout << "Enter lenght of A:";
		cin >> a;
		cout << "Enter lenght of B:";
		cin >> b;
		cout << task2(a, b);
	}
	case 3:
	{
		cout << "Enter lenght of A:";
		cin >> a;
		cout << "Enter lenght of B:";
		cin >> b;
		cout << task3(a, b);
	}
	case 4:
	{
		cout << "Enter value of number:";
		cin >> num;
		cout << task4(num);
	}
	}

	return 0;
}