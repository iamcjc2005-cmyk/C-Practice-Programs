#include <iostream>
using namespace std;

int find_sum(int first_number, int second_number);

int find_product(int first_number, int second_number);

int main()
{
	int user_input1;
	int user_input2;

	cout << "Enter two numbers: " << endl;
	cin >> user_input1 >> user_input2;

	int sum_result = find_sum(user_input1, user_input2);
	int product_result = find_product(user_input1, user_input2);

	cout << "Sum = " << sum_result << endl;
	cout << "Product = " << product_result << endl;
}

int find_sum(int first_number, int second_number)
{
	int sum;

	sum = first_number + second_number;

	return sum;
}

int find_product(int first_number, int second_number)
{
	int product;

	product = first_number * second_number;

	return product;
}