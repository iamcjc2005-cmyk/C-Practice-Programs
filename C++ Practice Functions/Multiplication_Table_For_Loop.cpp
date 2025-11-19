#include <iostream>
using namespace std;

int main()
{
	for (int row = 1; row <= 5; row++)
	{
		for (int multiplier = 1; multiplier <= 10; multiplier++)
		{
			cout << row * multiplier << "\t";
		}
		cout << "\n";
	}
	return 0;
}