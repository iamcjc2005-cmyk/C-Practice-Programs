#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter N: ";
	cin >> number;

	for (int count = 1; count <= number; count++)
	{
		cout << count << " ";
	}
	return 0;
}