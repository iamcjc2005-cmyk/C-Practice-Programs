#include <iostream>
using namespace std;

int main()
{
	int limit;
	cout << "Enter the limit: ";
	cin >> limit;

	int total = 0;

	for (int count = 1; count<= limit; count ++)
	{
		cout << "loop value" << count << "+" << total;
		total = total + count;
		cout << " = " << total << endl;
	}
	cout << "Sum = " << total << "\n";
	return 0;
}