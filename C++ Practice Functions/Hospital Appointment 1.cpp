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
			slot_time = day_text + "09:00";

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
				day_text = "Sun";
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
				day_text = "??";
			}
			slot_time = day_text + "09:00";
		}
	}
	else if (type == 2)
	{
		base = 250;

		if (hour >= 22 || hour < 6)
		{
			surcharge = surcharge + 50;
		}
		else
		{
			
		}
		slot_time = "Immediate";
	}
	else if (type == 3)
	{
		base = 150;

		cout << "Do you have a referral? (Y/N):";
		cin >> referral_needed;

		if (referral_needed == 'N' || referral_needed == 'n')
		{
			surcharge = surcharge + 40;
		}
		else
		{

		}
		if (day == 6 || day == 7)
		{
			slot_time = "Mon 10:00";
		}
		else
		{
			if (hour < 10)
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
					day_text = "??";
				}
				slot_time = day_text + "10:00";
			}
			else if (hour >= 10 && hour < 16)
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
					day_text = "??";
				}
				slot_time = day_text + "" + to_string(hour + 1) + ":00";
			}
			else
			{
				int next_day = (day % 7) + 1;
				if (next_day == 6 || next_day == 7)
				{
					next_day = 1;
				}
				else
				{

				}
				string day_text = "??";
				if (next_day == 1)
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
					day_text = "??";
				}
				slot_time = day_text + "10:00";

			}



		}

	}
	else
	{
		cout << "Invalid service type" << endl;
		return 0;
	}
	total = base + surcharge;

	cout << fixed << setprecision(2);
	cout << "/n--- Appointment Summary ---" << endl;
	cout << "Base cost : $" << base << endl;
	cout << "Surcharge : $" << surcharge << endl;
	cout << "Total cost : $" << total << endl;
	cout << "Next slot :" << slot_time << endl;

	return 0;
}
