#include <iostream>
using namespace std;

int main()
{
	int rows;
	int columns;

	cout << "Enter number of rows: " << endl;
	cin >> rows;

	cout << "Enter number of columns: " << endl;
	cin >> columns;

	int dark_count = 0;
	int milk_count = 0;
	int white_count = 0;

	for (int row = 1; row <= rows; row++)
	{
		for (int column = 1; column <= columns; column++)
		{
			if (column % 2 == 0)
			{
				cout << "D ";
				dark_count++;
			}
			else if (row % 2 == 0)
			{
				cout << "M ";
				milk_count++;
			}
			else
			{
				cout << "W " ;
				white_count++;
			}
		}
		cout << "\n";
	}
	int total_count = dark_count + milk_count + white_count;
	cout << "---  Summary  ---" << endl;
	cout << "Dark Chocolates: " << dark_count << endl;
	cout << "Milk Chocolates: " << milk_count << endl;
	cout << "White Chocolates: " << white_count << endl;
	cout << "Total Chocolates: " << total_count << endl;

	return 0;
}