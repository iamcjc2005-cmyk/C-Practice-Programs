#include <iostream>
using namespace std;

void swap_numbers(int* first, int* second);

int main()
{
	int first_number = 10;
	int second_number = 20;

	swap_numbers(&first_number, &second_number);

	cout << "First Number = " << first_number << endl;
	cout << "Second Number = " << second_number << endl;
	return 0;
}

void swap_numbers(int* first, int* second)
{
	*first = 20;
	*second = 10;
}