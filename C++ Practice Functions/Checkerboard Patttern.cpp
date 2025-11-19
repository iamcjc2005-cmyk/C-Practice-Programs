#include <iostream>
using namespace std;

int main()
{
	const int board_size = 8;

	for (int row = 1; row <= board_size; row++)
	{
		for (int column = 1; column <= board_size; column++)
		{
			if ((row + column) % 2 == 0)
			{
				cout << "#";
			}
			else
			{
				cout << ".";
			}

		}
		cout << "\n";
	}
	return 0;
}