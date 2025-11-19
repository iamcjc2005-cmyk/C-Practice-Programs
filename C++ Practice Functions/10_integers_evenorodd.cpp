#include <iostream>
using namespace std;

int main()
{
	int number;
	int even=0;
	int odd=0;

	for (int count = 1; count <= 10; count++)
	{
		cout << "Enter Number " << count << ": " << endl;
		cin >> number;

		if (number % 2 == 0)
		{
			even = even + 1;
		}
		else
		{
			odd = odd + 1;
		}
	}

	cout << "Total Even: " << even << endl;
	cout << "Total Odd: " << odd << endl;

	return 0;
}