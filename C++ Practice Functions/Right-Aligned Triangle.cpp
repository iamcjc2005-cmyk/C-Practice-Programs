#include <iostream>
using namespace std;

int main()
{
	const int height = 5;
	int column;

	for (int row = 1; row <= height; row++)
	{
		
		for (column = 1; column <= height - row; column++)
		{
				cout << " ";
		}
		
		for (int star = column; star <= height; star++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}