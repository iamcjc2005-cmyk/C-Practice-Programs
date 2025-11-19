#include <iostream>
using namespace std;

int main()
{
	for(int row = 5; row >= 1; row--)
	{
		for (int column = 1; column <= row; column++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}