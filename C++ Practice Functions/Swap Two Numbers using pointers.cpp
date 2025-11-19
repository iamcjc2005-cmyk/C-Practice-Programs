#include <iostream>
using namespace std;

int main()
{
	int number1 = 10;
	int number2 = 20;

	int* pointer1 = nullptr;
	pointer1 = &number1;
	int* pointer2 = nullptr;
	pointer2 = &number2;

	cout << "After swapping : number_1 = " << *pointer2 << "\t";
	cout << "number_2 = " << *pointer1 << endl;

	return 0;
}