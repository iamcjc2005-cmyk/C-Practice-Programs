#include <iostream>
using namespace std;

float apply_discount(float price);

int main()
{
	float price;

	cout << "Enter Price of items:$ " << endl;
	cin >> price;

	float discount = apply_discount(price);

	cout << "Final Price After Discount:$ " << discount << endl;
}

float apply_discount(float price)
{
	int discount = 0;

	if (price > 1000)
	{
		discount = price - price* 0.3;
	}
	else if (price >= 501 && price <= 1000)
	{
		discount = price - price * 0.2;
	}
	else if (price >= 101 && price <= 500)
	{
		discount = price - price * 0.1;
	}
	else
	{
		discount = price - price * 1;
	}
	return discount;
}