#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout<<"введите x:";
	cin>>x;
	if (x == 0)
		cout<<"Нулевое";
	else
		if (x > 0)
			cout<<"Положительное";
		else
			cout<<"Отрицательное ";
	if ((x % 2) == 0)
		cout<<" чётное ";
	else
		cout<<" нечётное ";


cout<<"число.";

return 0;
}