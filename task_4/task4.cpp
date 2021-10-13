#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string task1(float a, float b)
{
	string strok1;
	float S, P;
	S = a * b;
	P = 2 * (a + b);
	strok1 += "S = ";
	strok1 += to_string(S);
	strok1 += ", P = ";
	strok1 += to_string(P);
	return strok1;
}

string task2(float d)
{
	string strok2;
	float D;
	const float pi = 3.14;
	D = d * pi;
	strok2 += "D = ";
	strok2 += to_string(D);
	return strok2;
}

string task3(float a, float b)
{
	string strok3;
	float ans;
	ans = (a + b) / 2;
	strok3 += "Average is:";
	strok3 += to_string(ans);
	return strok3;
}

string task4(float a, float b)
{
	string strok4;
	float sum, dif, add, div;
	a = pow(a, 2);
	b = pow(b, 2);
	sum = a + b;
	dif = a - b;
	add = a * b;
	div = a / b;
	strok4 += "Sum:";
	strok4 += to_string(sum);
	strok4 += "; Dif:";
	strok4 += to_string(dif);
	strok4 += "; Add:";
	strok4 += to_string(add);
	strok4 += "; Div:";
	strok4 += to_string(div);
	return strok4;
}

string task5(float a, float b)
{
	string strok5;
	float sum, dif, add, div;
	a = abs(a);
	b = abs(b);
	sum = a + b;
	dif = a - b;
	add = a * b;
	div = a / b;
	strok5 += "Sum:";
	strok5 += to_string(sum);
	strok5 += "; Dif:";
	strok5 += to_string(dif);
	strok5 += "; Add:";
	strok5 += to_string(add);
	strok5 += "; Div:";
	strok5 += to_string(div);
	return strok5;
}

int main()
{
	float a, b, d;
	int z = 0;
	cout << "Choose the task, please:" << endl;
	cin >> z;
	switch (z)
	{
	case 1:
	{
		cin >> a >> b;
		cout << task1(a, b);
	}
	case 2:
	{
		cin >> d;
		cout << task2(d);
	}
	case 3:
	{
		cin >> a >> b;
		cout << task3(a, b);
	}
	case 4:
	{
		cin >> a >> b;
		cout << task4(a, b);
	}
	case 5:
	{
		cin >> a >> b;
		cout << task5(a, b);
	}
	}



	return 0;
}