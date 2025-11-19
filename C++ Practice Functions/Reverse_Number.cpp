#include <iostream>
using namespace std;

int main()
{
	int number;
	int reverse = 0;
	int remainder;

	cout << "Enter a number to reverse: " << endl;
	cin >> number;

	while (number != 0)
	{
		remainder = number % 10;

		reverse = reverse * 10 + remainder;

		number /= 10;	
	}
	
	cout << "Reverse: " << reverse << endl;

	return 0;	
}