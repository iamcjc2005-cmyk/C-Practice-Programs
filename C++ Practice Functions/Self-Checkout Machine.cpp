#include <iostream>
using namespace std;

int main()
{
	double price1;
	
	double price2;

	double price3;

	int quantity1;

	int quantity2;

	int quantity3;

	double total;
	

	cout << "Enter Price1: ";
	cin >> price1;

	cout << "Enter quantity1: ";
	cin >> quantity1;

	cout << "Enter Price2: ";
	cin >> price2;

	cout << "Enter quantity2: ";
	cin >> quantity2;

	cout << "Enter price3: ";
	cin >> price3;

	cout << "Enter quantity3: ";
	cin >> quantity3;

	total = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3);
	cout << "Total Bill = " << total << endl;

	return 0;
}