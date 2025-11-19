#include <iostream>
using namespace std;

int main()
{
	int number1;
	int number2;

	int* pointer1 = nullptr;
	pointer1 = &number1;
	int* pointer2 = nullptr;
	pointer2 = &number2;

	cout << "Enter number1 " << endl;
	cin >> number1;

	cout << "Enter number2 " << endl;
	cin >> number2;

	if (*pointer1 > *pointer2)
	{
		cout << *pointer1 << " is greater" << endl;
	}
	else
	{
		cout << *pointer2 << " is greater" << endl;
	}
}