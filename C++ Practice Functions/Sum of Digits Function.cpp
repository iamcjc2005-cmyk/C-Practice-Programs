#include <iostream>
using namespace std;

int sum_of_digits(int number);

int main()
{
	int user_input;
	cout << "Enter a number: " << endl;
	cin >> user_input;

	int sum_value = sum_of_digits(user_input);
	
	cout << "Sum of digits = " << sum_value << endl;

	return 0;
}

int sum_of_digits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		int digit = number % 10;
		sum += digit;
		number = number / 10;
	}
	return sum;
}