#include <iostream>
using namespace std;

int find_smallest(int first_number, int second_number, int third_number);

int find_largest(int first_number, int second_number, int third_number);

int main()
{
	int user_input1;
	int user_input2;
	int user_input3;

	cout << "Enter three numbers: " << endl;
	cin >> user_input1 >> user_input2 >> user_input3;

	int smallest = find_smallest(user_input1, user_input2, user_input3);

	int largest = find_largest(user_input1, user_input2, user_input3);

	cout << "Smallest = " << smallest << endl;
	cout << "Largest = " << largest << endl;

	return 0;
}

int find_smallest(int first_number, int second_number, int third_number)
{
	int smallest = first_number;

	if (second_number < smallest)
	{
		smallest = second_number;
	}
	if (third_number < smallest)
	{
		smallest = third_number;
	}
	return smallest;
}

int find_largest(int first_number, int second_number, int third_number)
{
	int largest = first_number;

	if (second_number > largest)
	{
		largest = second_number;
	}
	if (third_number > largest)
	{
		largest = third_number;
	}
	
	return largest;
}