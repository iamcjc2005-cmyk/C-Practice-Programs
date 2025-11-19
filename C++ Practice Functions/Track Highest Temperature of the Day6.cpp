#include <iostream>
using namespace std;

void update_highest(int* highest, int new_reading);

int main()
{
	int highest_temp = 32;
	
	int new_reading;
	cout << "What temperature is it now?" << endl;
	cin >> new_reading;
	
	update_highest(&highest_temp, new_reading);

	cout << "Highest Temp: " << highest_temp << endl;

	return 0;
}

void update_highest(int* highest, int new_reading)
{
	if (new_reading > *highest)
	{
		*highest = new_reading;
	}
	else
	{

	}
}
