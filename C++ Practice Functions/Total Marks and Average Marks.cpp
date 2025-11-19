#include <iostream>
using namespace std;

int calculate_total(int mark1, int mark2, int mark3);

int calculate_average(int total, int subjects);

int main()
{
	int userinput1;
	int userinput2;
	int userinput3;

	cout << "Enter marks of three subjects: " << endl;
	cin >> userinput1 >> userinput2 >> userinput3;

	int total = calculate_total(userinput1, userinput2, userinput3);

	int average = calculate_average(total, 3);

	cout << "Total Marks = " << total << endl;

	cout << "Average Marks = " << average << endl;

	return 0;
}

int calculate_total(int mark1, int mark2, int mark3)
{
	int total = mark1 + mark2 + mark3;

	return total;
}

int calculate_average(int total, int subjects)
{
	int average = total / 3;

	return average;
}
