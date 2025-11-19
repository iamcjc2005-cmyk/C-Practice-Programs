#include <iostream>
using namespace std;

int max_of_two(int first_number, int second_number);

int main()
{
	int user_input1;
	int user_input2;
	
	cout << "Enter two numbers: " << endl;
	cin >> user_input1 >> user_input2;

	int max_value = max_of_two(user_input1, user_input2);

	cout << "The larger number is: " << max_value << endl;

	return 0;
}

int max_of_two(int first_number, int second_number)
{
	if (first_number > second_number)
	{
		return first_number;
	}
	else
	{
		return second_number;
	}
}