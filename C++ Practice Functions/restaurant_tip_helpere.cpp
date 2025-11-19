#include <iostream>
using namespace std;

int main()
{
	char do_again;
	do
	{
		double bill_amount;
		int tip_percent;

		do
		{
			cout << "Enter bill amount (> 0): $";
			cin >> bill_amount;

			if (bill_amount <= 0)
			{
				cout << "Invalid amount. Please enter a value greater than 0.\n" << endl;
			}
		}
		while (bill_amount <= 0);

		do
		{
			cout << "Choose Tip Percent (10, 15, 20): ";
			cin >> tip_percent;

			if (tip_percent != 10 && tip_percent != 15 && tip_percent != 20)
			{
				cout << "Invalid choice. Please enter 10, 15, 20.\n";
			}

		} 
		while (tip_percent != 10 && tip_percent != 15 && tip_percent != 20);
		
		double tip_amount = bill_amount * tip_percent /100.0;
		double total_amount= bill_amount + tip_amount;
		
		cout << "Tip: $" << tip_amount << endl;
		cout << "Total: $" << total_amount << endl;
		
		cout << "Calculate another bill? (y/n): " << endl;
		cin >> do_again;
	} 
	while (do_again == 'y' || do_again == 'Y');

		cout << "Goodbye!" << endl;

		return 0;
}