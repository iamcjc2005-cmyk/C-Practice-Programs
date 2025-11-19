#include <iostream>
using namespace std;

int main()
{
	int number = 200;
	int* pointer_1 = nullptr;
	pointer_1 = &number;

	*pointer_1 = 100;

	cout << "New Value of number: " << *pointer_1 << endl;

	return 0;
}