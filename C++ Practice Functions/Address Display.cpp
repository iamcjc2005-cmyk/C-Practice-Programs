#include <iostream>
using namespace std;

int main()
{
	int number_1 = 5;
	int number_2 = 9;
	int* pointer_1 = nullptr;
	int* pointer_2 = nullptr;
	pointer_1 = &number_1;
	pointer_2 = &number_2;

	cout << "Valie of number_1: " << number_1 << endl;
	cout << "Address of A: " << &number_1 << endl;
	cout << "Pointer pointer_1 stores: " << pointer_1 << endl;
	cout << "Value at address pointer_1: " << number_1 << endl;

	cout << "Valie of number_2: " << number_2 << endl;
	cout << "Address of B: " << &number_2 << endl;
	cout << "Pointer pointer_2 stores: " << pointer_2 << endl;
	cout << "Value at address pointer_2: " << number_2 << endl;

	return 0;
}