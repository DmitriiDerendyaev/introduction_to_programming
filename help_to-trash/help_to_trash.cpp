#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout<<"������� x:";
	cin>>x;
	if (x == 0)
		cout<<"�������";
	else
		if (x > 0)
			cout<<"�������������";
		else
			cout<<"������������� ";
	if ((x % 2) == 0)
		cout<<" ������ ";
	else
		cout<<" �������� ";


cout<<"�����.";

return 0;
}