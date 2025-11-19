# include <iostream>
using namespace std;

void control_irrigation(int* moisture, int sunlight, int hours_since_irrigation, int* water_limit);

int main()
{
	int soil_moisture = 10;
	int sun_intensity = 75;
	int hours_passed = 9;
	int daily_water_limit = 15;

	control_irrigation(&soil_moisture, sun_intensity, hours_passed, &daily_water_limit);

	cout << "Updated Soil Moisture: " << soil_moisture << endl;
	cout << "Updated Daily Water Limit: " << daily_water_limit << endl;

	return 0;
}

void control_irrigation(int* moisture, int sunlight, int hours_since_irrigation, int* water_limit)
{
	if (*water_limit < 20)
	{
		*moisture = *moisture;
		cout << "Water Limit too low, irrigation skipped." << endl;
	}
	else if (*moisture < 25 && sunlight >70 && hours_since_irrigation > 8)
	{
		*moisture = *moisture + (*moisture * 0.25);
		*water_limit = *water_limit - 20;
		cout << "Emergency Irrigation Activated" << endl;
	}
	else if (*moisture >= 25 && *moisture <= 40 && sunlight > 50)
	{
		*moisture = *moisture + (*moisture * 0.15);
		*water_limit = *water_limit - 10;
	}
	else if (*moisture >= 40 && *moisture <= 60)
	{
		*moisture = *moisture + (*moisture * 0.05);
		*water_limit = *water_limit - 5;
	}
	else if (*moisture > 60 && sunlight < 40)
	{
		*moisture = *moisture - (*moisture * 0.10);
	}
	else
	{
		*moisture = 80;
		cout << "Warning: Over watering Prevented." << endl;
	}
}