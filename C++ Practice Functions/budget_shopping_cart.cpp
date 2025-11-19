#include <iostream>
using namespace std;

int main()
{
	int budget;
	cout << "Enter Your Budget: $";
	cin >> budget;

	while (budget < 0)
	{
		cout << "Budget cannot be negative. Reneter: ";
		cin >> budget;
	}

	int total_spent = 0;
	int item_count = 0;

	int price;
	do
	{
		cout << "Enter item price (0 to checkout): ";
		cin >> price;

		bool price_is_valid = false;
		while (price_is_valid == false);
		{
			if (price == 0)
			{
				price_is_valid = true;
			}
			else
			{
				if (price < 0)
				{
					cout << "Price cannot be negative. Re-enter: ";
					cin >> price;
				}
				else
				{
					int remaining = budget - total_spent;

					if (price > remaining)
					{
						cout << "Over Budget! Remaining is " << remaining << ". Re-enter a smaller price(or 0 to checkout): ";
						cin >> price;
					}
					else
					{
						price_is_valid = true;
					}
				}
			}
		}

		if (price > 0)
		{
			total_spent = total_spent + price;
			item_count = item_count + 1;

			int remaining_after = budget - total_spent;
			cout << "Added. Remaining: " << remaining_after << "\n";

			if (remaining_after == 0)
			{
				cout << "You have reached your budget exactly. Enter 0 to checkout.\n";
			}
		}
		while (price != 0);

		cout << "\nItems purchased: " << item_count << "\n";
		cout << "Total spent: " << total_spent << "\n";
		cout << "Remaining: " << (budget - total_spent) << "\n";

		return 0;
	}
}