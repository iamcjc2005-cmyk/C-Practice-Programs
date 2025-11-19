#include <iostream>
using namespace std;

int building_min = -2;
int building_max = 10;
int invalid_moves = 0, max_floor = 0, min_floor = 0;

int main()
{
	int current_floor = 0;

	while (true)
	{
		char command;
		cout << "Input Command (U=up D=Down S= Same Floor Q= Quit" << endl;
		cin >> command;
		
		switch (command)
		{
			case 'U':
			{
				if (current_floor < building_max)
				{
					cout << "You went up one floor" << endl;
					current_floor = current_floor + 1;
					cout << "You are on floor: " << current_floor << endl;
				}
				else
				{
					cout << "You're already on the top floor." << endl;
					
				}
				break;
			}
			case 'D':
			{
				if (current_floor > building_min)
				{
					cout << "You went down one floor" << endl;
					current_floor = current_floor - 1;
					cout << "Your are on floor: " << current_floor << endl;
				}
				else
				{
					cout << "You're already on the bottom floor." << endl;
					
				}
				break;
			}
			case 'S':
			{
				cout << "You're still on the same floor" << endl;
				cout << "You are on floor: " << current_floor << endl;
				break;
			}
			case 'Q':
			{
				cout << "Exited Simulation" << endl; 
				break;
				
			}
			default:
			{
				cout << "Invalid input" << endl;
			}
		}
	}
	return 0;
}