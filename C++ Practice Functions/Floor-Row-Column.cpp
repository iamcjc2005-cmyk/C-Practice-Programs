#include <iostream>
using namespace std;

int main()
{
	for(int floor = 1; floor <= 2; floor++)
	{
		for (int row = 1; row <= 3; row++)
		{
			for (int column = 1; column <= 4; column++)
			{
				cout << "Room code: " << floor << row << column << endl;
			}
		}
	}
	return 0;
}