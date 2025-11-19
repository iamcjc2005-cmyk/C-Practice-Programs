#include <iostream>
using namespace std;

int main()
{
	int first_number;
	int second_number;
	int result;
	char operation;

	cout << "Enter the first number: ";
	cin >> first_number;

	cout << "Enter the operation (+,-,*,/): ";
	cin >> operation;

	cout << "Enter the second number:";
	cin >> second_number;

	switch (operation)
	{
		case '+':
			result = first_number + second_number;
			cout << "Result = " << result << endl;
			break;

		case '-':
			result = first_number - second_number;
			cout << "Result = " << result << endl;
			break;
		case '*':
			result = first_number * second_number;
			cout << first_number << "*" << second_number << "=" << result << endl;
			break;
		case '/':
		{
			if (second_number == 0)
			{
				cout << "Error:Division by zero is not allowed!" << endl;
			}
			else
			{
				result = first_number / second_number;
				cout << first_number << "/" << second_number << "=" << result << endl;
			}
			break;
		}
		default:
		{
			cout << "Invalid Operator" << endl;
		}
	}
	return 0;
}