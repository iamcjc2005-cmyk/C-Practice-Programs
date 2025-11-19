#include <iostream>
using namespace std;

int main()
{
	int number1 = 50;
	int number2 = 25;

	int* pointer1 = nullptr;
	pointer1 = &number1;
	int* pointer2 = nullptr;
	pointer2 = &number2;

	cout << "Sum: " << *pointer1 + *pointer2 << endl;

	return 0;
}