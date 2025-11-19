#include <iostream>
using namespace std;

float calculate_gross(int adults, int children);
float calculate_tax(float gross);
float calculate_net(float gross, float tax);

int main()
{
	int adults;
	int children;
	

	cout << "How many adults are attending?" << endl;
	cin >> adults;

	cout << "How many children are attending?" << endl;
	cin >> children;

	float gross = calculate_gross(adults, children);

	float tax = calculate_tax(gross);

	float net = calculate_net(gross, tax);

	cout << "Gross:$ " <<gross << endl;
	cout << "Tax:$ " << tax << endl;
	cout << "Net:$ " << net << endl;

	return 0;
}

float calculate_gross(int adults, int children)
{
	float gross = adults * 12 + children * 8;
	return gross;
}

float calculate_tax(float gross)
{
	float tax = gross * 0.2;
	return tax;
}

float calculate_net(float gross, float tax)
{
	float net = gross - tax;
	return net;
}

