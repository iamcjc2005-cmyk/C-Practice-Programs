#include <iostream>
using namespace std;

float calculate_bill(int units);

int main()
{
	int units;

	cout << "Enter the number of units. (0-500)";
	cin >> units;

	int bill = calculate_bill(units);

	cout << "Your total bill is: $" << bill << endl;

	return 0;
}

float calculate_bill(int units)
{
	int bill = 0;
	if (units > 500)
	{
		bill = units * 5;
		
	}
	else if (units >= 301 && units < 500)
	{
		bill = units * 3;
		
	}
	else if (units >= 101 && units < 300)
	{
		bill = units * 2;
	}
	else
	{
		bill = units * 2;
		
	}
	return bill;
}