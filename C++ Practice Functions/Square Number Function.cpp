#include <iostream>
using namespace std;

int square_number(int number);

int main()
{
	int user_number;
	cout << "Enter an integer: " << endl;
	cin >> user_number;

	int squared_value = square_number(user_number);

	cout << "The square of " << user_number << " is: " << squared_value << endl;

	return 0;
}

int square_number(int number)
{
	int square_result = number * number;
	return square_result;
}
