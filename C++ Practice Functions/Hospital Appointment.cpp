#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int type;
	int day;
	int hour;
	char referral_needed;
	double base = 0, surcharge = 0, total = 0;
	string slot_time = "";

	cout << "Enter type (1= General Checkup, 2= Emergency, 3 = Specialist: " << endl;
	cin >> type;

	cout << " Enter Day (Type 1-7)" << endl;
	cin >> day;

	cout << "Enter Hour (0-23): " << endl;
	cin >> hour;

	if (type == 1)
	{
		base = 80;

		if (day == 6 || day == 7)
		{
			surcharge = surcharge + 20;
		}
		else
		{

		}
		if (hour < 9)
		{
			string day_text = "??";
			if (day == 1)
			{
				day_text = "Mon";
			}
			else if (day == 2)
			{
				day_text = "Tue";
			}
			else if (day == 3)
			{
				day_text = "Wed";
			}
			else if (day == 4)
			{
				day_text = "Thu";
			}
			else if (day == 5)
			{
				day_text = "Fri";
			}
			else if (day == 6)
			{
				day_text = "Sat";
			}
			else if (day == 7)
			{
				day_text = "Sun";
			}
			else
			{
				day_text == "??";
			}
			slot_time = day_text + "09:00"

		}
		else if (hour >= 9 && hour < 17)
		{
			string day_text = "??";
			if (day == 1)
			{
				day_text = "Mon";
			}
			else if (day == 2)
			{
				day_text = "Tue";
			}
			else if (day == 3)
			{
				day_text = "Wed";
			}
			else if (day == 4)
			{
				day_text = "Thu";
			}
			else if (day == 5)
			{
				day_text = "Fri";
			}
			else if (day == 6)
			{
				day_text = "Sat";
			}
			else if (day == 7)
			{
				day_text = "Sun"
			}
			else
			{
				day_text = "??";
			}
			slot_time = day_text + "" + to_string(hour + 1) + ":00";
		}
		else
		{
			int next_day = (day % 7) + 1;

			string day_text = "??";
			if (next_day == 1)
			{
				day_text = "Mon";
			}
			else if (next_day == 2)
			{
				day_text = "Tue";
			}
			else if (next_day == 3)
			{
				day_text == "Wed";
			}
			else if (next_day == 4)
			{
				day_text = "Thu";
			}
			else if (next_day == 5)
			{
				day_text = "Fri";
			}
			else if (next_day == 6)
			{
				day_text = "Sat";
			}
			else if (next_day == 7)
			{
				day_text = "Sun";
			}
			else
			{
				day_text = "??"
			}
			slot_time = day_text + "09:00";
		}
	}
}
	

