#include <iostream>
using namespace std;

int main()
{
	int count;
	int number;
	int total = 0;
	double average;

	cout << "Enter number count " << endl;
	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		cout << "Enter the "<< i <<" number " << endl;
		cin >> number;
		total = total + number;
	}
	average = total / count;
	cout << "Average is " << average;
	return 0;
}