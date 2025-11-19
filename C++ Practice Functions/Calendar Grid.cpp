#include <iostream>
using namespace std;

int main()
{
	const int total_weeks = 5;
	const int days_per_week = 7;
	const int days_in_month = 31;

	int current_day= 1;

	for (int row = 1; row <= total_weeks; row++)
	{
		for (int column = 1; column <= days_per_week; column++)
		{
			
			if (current_day <= days_in_month)
			{
				cout << current_day << "\t";
				 current_day += 1;
			}
		}
		cout << "\n";
	}
	return 0;
}