#include <iostream>
using namespace std;

int main()
{
	int row = 1;
	while (row <= 4)
	{
		int column = 1;
		while (column <= row)
		{
			cout << "* ";
			column = column + 1;
		}
		cout << endl;
		row++;
	}
	return 0;
}