#include <iostream>
using namespace std;

int main()
{
	int count = 0;

	int* ptr = nullptr;
	ptr = &count;

	int target;
	cout << "Enter a target number: " << endl;
	cin >> target;

	while (*ptr < target)
	{
		(*ptr)++;
		cout << *ptr << endl;
	}

	cout << "Reached Target: " << target;
	return 0;
}