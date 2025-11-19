#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 50;
	
	int* pointer1 = nullptr;
	pointer1 = &number;

	cout << "Value: " << number << endl;
	cout << "Address (&number): " << &number << endl;
	cout << "Pointer1 (stores): " << pointer1 << endl;
	cout << "Value via *pointer1: " << *pointer1 << endl;
	
	return 0;

}