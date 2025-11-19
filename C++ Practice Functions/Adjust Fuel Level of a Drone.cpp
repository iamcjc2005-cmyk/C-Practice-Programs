#include <iostream>
using namespace std;

void update_fuel(int* fuel, int wind_speed);

int main()
{
	int drone_fuel = 100;
	int wind_speed;

	cout << "What speed is the wind today?" << endl;
	cin >> wind_speed;

	update_fuel(&drone_fuel, wind_speed);

	cout << "Remaining Fuel: " << drone_fuel << endl;
	return 0;
}

void update_fuel(int* fuel, int wind_speed)
{
	if (wind_speed < 20)
	{
		*fuel = *fuel - (*fuel * 0.05);
	}
	else if (wind_speed >= 20 && wind_speed <= 40)
	{
		*fuel = *fuel - (*fuel * 0.10);
	}
	else
	{
		*fuel = *fuel - (*fuel * 0.15);
	}
}