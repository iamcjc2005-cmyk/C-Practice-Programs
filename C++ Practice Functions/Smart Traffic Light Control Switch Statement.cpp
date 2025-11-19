#include<iostream>
using namespace std;

int main()
{
	char light;
	int estimation;
	int emergency;

	cout << "Enter Light color (R,Y,G): ";
	cin >> light;

	switch (light)
	{
		case 'G':
		case 'g':
		{
			cout << "GO" << endl;
			break;
		}
		case 'Y':
		case 'y':
		{
			cout << "Is it safe to stop? (1=Yes, 0=No):" << endl;
			cin >> estimation;
			if (estimation == 1)
			{
				cout << "Stop Immediately" << endl;
			}
			else
			{
				cout << "Proceed with Caution" << endl;
			}
			break;
		}
		case 'R':
		case 'r':
		{
			cout << "Is there an emergency vehicle? 1=Yes 0=No):" << endl;
			cin >> emergency;
			if (emergency == 1)
			{
				cout << "Allow emergency Vehicle" << endl;
			}
			else
			{
				cout << "Stop" << endl;
			}
			break;
		}
		default:
		{
			cout << "Invalid Input" << endl;
			break;
		}
	}
	return 0;
}