#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string task1(float x1, float y1, float x2, float y2)
{
	string strok1;
	float L;
	L = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	strok1 += "Length = ";
	strok1 += to_string(L);
	return strok1;
}

string task2(float A, float B, float C)
{
	string strok2;
	float AC, BC, AC_BC;
	AC = abs(C - A);
	BC = abs(C - B);
	AC_BC = AC + BC;
	strok2 += "AC = ";
	strok2 += to_string(AC);
	strok2 += "; BC = ";
	strok2 += to_string(BC);
	strok2 += "; SUM AC+BC = ";
	strok2 += to_string(AC_BC);
	return strok2;

}

string task3(float A, float B, float C)
{
	string strok3;
	float AC, BC, AC_add_BC;
	AC = abs(C - A);
	BC = abs(B - C);
	AC_add_BC = AC + BC;
	strok3 += "Multiplication AC*BC = ";
	strok3 += to_string(AC_add_BC);
	return strok3;

}

string task4(float x1, float y1, float x2, float y2)
{
	string strok4;
	float AB, AD, s, p;
	AB = y2 - y1;
	AD = x2 - x1;
	s = AB * AD;
	p = 2 * AB + 2 * AD;
	strok4 += "Perimetr = ";
	strok4 += to_string(p);
	strok4 += "; Area of rectangle = ";
	strok4 += to_string(s);
	return strok4;
}

int main()
{
	int z = 0;
	float x1, x2, y1, y2, AC, BC, AC_BC, A, B, C, AC_add_BC;
	cin >> z;
	switch (z)
	{
	case 1:
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << task1(x1, y1, x2, y2) << endl;
	}
	case 2:
	{
		cout << "Pleace enter the values of variables:" << endl;
		cin >> A >> B >> C;
		cout << task2(A, B, C) << endl;
	}
	case 3:
	{
		cout << "Pleace enter the values of variables:" << endl;
		cin >> A >> B >> C;
		cout << task3(A, B, C) << endl; 
	}
	case 4:
	{
		cout << "Pleace enter the values of variables:" << endl;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << task4(x1, y1, x2, y2) << endl;
	}
	}

	return 0;
}