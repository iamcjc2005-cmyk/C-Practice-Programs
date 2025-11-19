#include <iostream>
using namespace std;

int main()
{
	const int max_number = 5;

	for (int number = 1; number <= max_number; number++)
	{
		for (int multiplier = 1; multiplier <= number; multiplier++)
		{
			cout << number * multiplier << "\t";
		}
		cout << "\n";
	}
	return 0;
}