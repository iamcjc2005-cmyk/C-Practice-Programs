#include <iostream>
using namespace std;

int main()
{
	int row = 1;

	while (row <= 5)
	{
		int column = 1;
		
		while (column <= 5)
		{
			cout << row * column << "\t";
			column = column + 1;
		}
		cout << endl;
		row = row + 1;

	}
}