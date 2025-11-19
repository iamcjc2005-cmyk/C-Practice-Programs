#include <iostream>
using namespace std;

int main()
{
	int number;
	int* pointer = nullptr;
	pointer = &number;

	cout << "Enter a number: " << endl;
	cin >> number;

	if (*pointer % 2 == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}
	return 0;
}