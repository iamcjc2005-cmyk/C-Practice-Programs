#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;

	char user_input;

	int* pointer1 = nullptr;
	pointer1 = &number1;
	int* pointer2 = nullptr;
	pointer2 = &number2;

	cout << "Enter two numbers: ";
	cin >> number1 >> number2;
	
	cout << "Enter operator (+, -, *, /): ";
	cin >> user_input;

	int result = 0;
	switch(user_input)
	{
		case '+':
		{
			cout << "Result: " << *pointer1 + *pointer2 << endl;
		}
		break;
		case '-':
		{
			cout << "Result: " << *pointer1 - *pointer2 << endl;
		}
		break;
		case '*':
		{
			cout << "Result: " << *pointer1 * *pointer2 << endl;
		}
		break;
		case '/':
		{
			cout << "Result: " << *pointer1 / *pointer2 << endl;
		}
		break;
		default:
		{
			cout << "Invalid Choice" << endl;
		}
	}
	return 0;
}