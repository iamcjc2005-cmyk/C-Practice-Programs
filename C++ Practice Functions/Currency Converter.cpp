#include <iostream>
using namespace std;

float usd_to_cny(float usd);

float usd_to_zar(float usd);

int main()
{
	int usd_amount;
	int choice;

	cout << "Enter USD amount you are converting.:$ " << endl;
	cin >> usd_amount;

	cout << "What currency are you converting to? (CNY=1 or ZAR=2)" << endl;
	cin >> choice;

	if (choice == 1)
	{
		float conversion = usd_to_cny(usd_amount);
	}
	else if (choice == 2)
	{
		float conversion = usd_to_zar(usd_amount);
	}
	else
	{
		cout << "Invaldid Choice" << endl;
	}
	return 0;
}


float usd_to_cny(float usd)
{

	float conversion = usd * 7.25;
	cout << "Converted Total:$ " << conversion;
	return conversion;
}

float usd_to_zar(float usd)
{
	float conversion = usd * 18.30;
	cout << "Converted Total:$ " << conversion;
	return conversion;
}