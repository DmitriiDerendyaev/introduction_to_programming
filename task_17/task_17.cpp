#include <iostream>
#include <vector>

using namespace std;

vector <int> vec1;
int sum, k, l, n;

void writing(int vec)
{
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << " ";
}

void reading(vector <int> vec1)
{
	for (int i = 0; i < vec1.size(); i++)
		cin >> vec1[i];
}


void task1(void)
{
	cout << "N: ";
	cin >> n;
	cout << endl << "K: ";
	cin >> k;
	cout << endl << "L: ";
	cin >> l;
	vec1.reserve(n);
	vector<int>* p_vector = &vec1;
	reading(p_vector);
	for(int i = k; i < l; i++)
		sum += vec1[i];
	sum = sum / (l - k);
	cout << sum;
}

int main()
{
	task1();

	return 0;
}