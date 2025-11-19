#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row <= 5; row++)
	{
		for (int column = 1; column <= 5; column++)
		{
			if (row == column || row +column == 6)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}