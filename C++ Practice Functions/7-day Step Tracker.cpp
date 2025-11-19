#include <iostream>
using namespace std;

int total_steps=0;
int steps;

int main()
{
	float average;

	for (int day = 1; day <= 7; day++)
	{
		cout << "How many steps did you take today?" << endl;
		cin >> steps;
		total_steps = total_steps + steps;
	}
	average = total_steps / 7;

	cout << "Total steps: " << total_steps << endl;
	cout << "Average steps: " << average << endl;

	return 0;
}
