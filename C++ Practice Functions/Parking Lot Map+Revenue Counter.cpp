#include <iostream>
using namespace std;

int main()
{
	const int rows = 3;
	const int columns = 3;
	int regular_rate;
	int ev_rate;
	int handicap_rate;

	cout << " Enter the rates (regular): " << endl;
	cin >> regular_rate;

	cout << "Enter the rates (ev): " << endl;
	cin >> ev_rate;

	cout << "Enter the rates (handicap): " << endl;
	cin >> handicap_rate;

	int row1, col1, row2, col2;
	int row3, col3, row4, col4;
	cout << "Enter 4 occupied spots (row col): " << endl;
	cin >> row1 >> col1;
	cin >> row2 >> col2;
	cin >> row3 >> col3;
	cin >> row4 >> col4;

	int ev_total = 0, handicap_total = 0, regular_total = 0;
	int ev_occ = 0, handicap_occ = 0, regular_occ = 0;
	double total_revenue = 0;

	cout << "\nLegend: e=ev  h=handicap  x=occupied  .=free\n\n";

	for (int row = 1; row <= rows; row++)
	{
		for (int column = 1; column <= columns; column++)
		{
			char spot_type;

			if (column == 3)
			{
				spot_type = 'e';
				ev_total++;
			}
			else if (row == 1)
			{
				spot_type = 'h';
				handicap_total++;
			}
			else
			{
				spot_type = '.';
				regular_total++;
			}

			bool is_occupied =
				(row == row1 && column == col1) ||
				(row == row2 && column == col2) ||
				(row == row3 && column == col3) ||
				(row == row4 && column == col4);
			if (is_occupied)
			{
				cout << "x ";
				if (spot_type == 'e')
				{
					ev_occ++;
					total_revenue += ev_rate;
				}
				else if (spot_type == 'h')
				{
					handicap_occ++;
					total_revenue += handicap_rate;
				}
				else
				{
					regular_occ++;
					total_revenue += regular_rate;
				}
			}
			else
			{
				cout << spot_type << " ";
			}
		}
		cout << "\n";
	}
	cout << "--- Summary ---" << endl;
	cout << "Ev spots: " << ev_total << " (occupied " << ev_occ << ")\n";
	cout << "Handicap: " << handicap_total << " (occupied " << handicap_occ << ")\n";
	cout << "Regular: " << regular_total << " (occupied " << regular_occ << ")\n";
	cout << "Revenue: $" << total_revenue << "\n";

	return 0;
}