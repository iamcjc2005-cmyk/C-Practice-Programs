# include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int service_type, appointment_day, appointment_hour;
	char referral_needed;

	double base_cost = 0, surcharge_cost = 0, total_cost = 0;
	string slot_time;
	
	cout << "Enter type (1-General, 2- Emergency, 3-Specialist):";
	cin >> service_type;
	
	cout << " Enter day (1-7) : ";
	cin >> appointment_day;

	cout << "Enter hour (0-23): ";
	cin >> appointment_hour;

	if (service_type == 1)
	{
		base_cost = 80;
		
		if (appointment_day == 6 || appointment_day == 7)
		{
			surcharge_cost = surcharge_cost + 20;
		}
		if (appointment_hour < 9)
		{
			string day_text = "??";

			switch (appointment_day)
			{
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + " 09:00";
		}
		else if (appointment_hour >= 9 && appointment_hour < 17)
		{
			string day_text = "??";

			switch (appointment_day)
			{
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3:day_text = "Wed";
				break;
			case 4:day_text = "Thu";
				break;
			case 5:day_text = "Fri";
				break;
			case 6:day_text = "Sat";
				break;
			case 7:day_text = "Sun";
				break;
			default:day_text = "??";
				break;
			}
			slot_time = day_text + "" + to_string(appointment_hour + 1) + ":00";
		}
		else
		{
			int next_day = (appointment_day % 7) + 1;
			string day_text = "??";

			switch(next_day)
			{
			case 1: day_text = "Mon";
				break;
			case 2:day_text = "Tue";
				break;
			case 3:day_text = "Wed";
				break;
			case 4:day_text = "Thu";
				break;
			case 5:day_text = "Fri";
				break;
			case 6:day_text = "Sat";
				break;
			case 7:day_text = "Sun";
				break;
			default:day_text = "??";
				break;
			}
			slot_time = day_text + " 09:00";
		}
	}
	else if (service_type == 2)
	{
		base_cost = 250;

		if (appointment_hour >= 22 || appointment_hour < 6)
		{
			surcharge_cost = surcharge_cost + 50;
		}
		slot_time = "Immediate";
	}
	else if (service_type == 3)
	{
		base_cost = 150;

		cout << "Do you have a referral? (Y/N): ";
		cin >> referral_needed;

		if (referral_needed == 'N' || referral_needed == 'n')
		{
			surcharge_cost = surcharge_cost + 40;
		}
		if (appointment_day == 6 || appointment_day == 7)
		{
			slot_time = "Mon 10:00";
		}
		else
		{
			if (appointment_hour < 10)
			{
				string day_text = "??";
				switch(appointment_day)
				{
				case 1: day_text = "Mon";
					break;
				case 2:day_text = "Tue";
					break;
				case 3:day_text = "Wed";
					break;
				case 4:day_text = "Thu";
					break;
				case 5:day_text = "Fri";
					break;
				case 6:day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default:day_text = "??";
					break;
				}
				slot_time = day_text + " 10:00";
			}
			else if (appointment_hour >= 10 && appointment_hour < 16)
			{
				string day_text = "??";
				
				switch (appointment_day)
				{
				case 1:day_text = "Mon";
					break;
				case 2:day_text = "Tue";
					break;
				case 3:day_text = "Wed";
					break;
				case 4:day_text = "Thu";
					break;
				case 5:day_text = "Fri";
					break;
				case 6:day_text = "Sat";
					break;
				case 7:day_text = "Sun";
					break;
				default:day_text = "??";
					break;
				}
				slot_time = day_text + "" + to_string(appointment_hour + 1) + ":00";
			}
			else
			{
				int next_day = (appointment_day % 7) + 1;
				
				if (next_day == 6 || next_day == 7)
				{
					next_day = 1;
				}
				string day_text = "??";

				switch (next_day)
				{
				case 1:day_text = "Mon";
					break;
				case 2:day_text = "Tue";
					break;
				case 3:day_text = "Wed";
					break;
				case 4:day_text = "Thu";
					break;
				case 5:day_text = "Fri";
					break;
				case 6:day_text = "Sat";
					break;
				case 7:day_text = "Sun";
					break;
				default:day_text = "??";
					break;
				}
				slot_time = day_text + " 10:00";
			}
		}
	}
	else
	{
		cout << "Invalid service type" << endl;
		return 0;
	}
	total_cost = base_cost + surcharge_cost;

	cout << fixed << setprecision(2);
	cout << "/n--- Appointment Summary ___" << endl;
	cout << "Base cost  : $" << base_cost << endl;
	cout << "Surcharge  : $" << surcharge_cost << endl;
	cout << "Total cost : $" << total_cost << endl;
	cout << "Next slot  : " << slot_time << endl;

	return 0;
}