#include <iostream>
using namespace std;

void apply_discount(double* price);

int main()
{
	double price = 450.0;

	cout << "Original Price: " << price << endl;
	apply_discount(&price);

	cout << "Discounted Price: " << price << endl;
	return 0;
}

void apply_discount(double* price)
{
	*price = *price - (*price * 0.10);
}