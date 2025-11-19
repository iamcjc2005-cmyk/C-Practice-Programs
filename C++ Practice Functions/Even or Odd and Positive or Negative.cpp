#include <iostream>
using namespace std;

int check_even_or_odd(int number);

int check_positive_or_negative(int number);

int main()
{
	int user_input;
	cout << "Enter a number: " << endl;
	cin >> user_input;

	int evenodd = check_even_or_odd(user_input);
	if (user_input % 2 == 0)
	{
		cout << user_input << " is Even" << endl;
	}
	else
	{
		cout << user_input << " is Odd" << endl;
	}
	
	int postivenegative = check_positive_or_negative(user_input);
	if (user_input >= 0)
	{
		cout << user_input << " is  Positive" << endl;

	}
	else
	{
		cout << user_input << " is Negative" << endl;
	}

	return 0;
}

int check_even_or_odd(int number)
{
	if (number % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int check_positive_or_negative(int number)
{
	if (number >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}