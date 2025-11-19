#include <iostream>
using namespace std;

int main()
{
	int capacity;
	cout << "Enter the Bus Capacity: " << capacity << endl;
	cin >> capacity;

	int stops;
	cout << "Enter the number of stops: " << stops << endl;
	cin >> stops;

	int people = 0;
	int maxPeople = 0;
	int violations = 0;
	int safeCount = 0;
	int longestSafe = 0;

	cout << "Enter passenger changes for each stop (use + for boarding, - for leaving): " << endl;

	for (int i = 1; i <= stops; i++)
	{
		int change;
		cout << "stop " << i << ": ";
		cin >> change;

		people = people + change;

		if (people < 0)
		{
			people = 0;
		}
		if (people > maxPeople)
		{
			maxPeople = people;
		}
		if (people <= capacity)
		{
			safeCount++;

			if (safeCount > longestSafe)
			{
				longestSafe = safeCount;
			}
		}
		else
		{
			violations++;
			safeCount = 0;
		}
	}

	cout << "\n=== Trip Summary ===\n";
	cout << "Maximum occupancy: " << maxPeople << endl;
	cout << "Number of violations: " << violations << endl;
	cout << "Longest safe streak: " << longestSafe << endl;

	return 0;
}