#include <iostream>
#include <string>

using namespace std;

float kbites, bites;

string task1(float bites)
{
	string strok1;
	kbites = bites / 1024;
	strok1 += "Kb:";
	strok1 += to_string((int)kbites);

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
		cout << "Enter amount of bites:";
		cin >> bites;
		cout << task1(bites);
	}
	}

	return 0;
}