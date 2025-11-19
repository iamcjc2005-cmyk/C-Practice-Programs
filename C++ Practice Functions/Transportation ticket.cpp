#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int transport_type, travel_distance, passenger_age;
	int travel_day, travel_hour, baggage;
	char class_code, is_student, is_member;

	cout << "Enter type (1=Bus, 2=train, 3=Flight)";
	cin >> transport_type;
	if (transport_type == 1 || transport_type == 2 || transport_type == 3)
	{
		cout << " What distance are you traveling? (km)" << endl;
		cin >> travel_distance;

		cout << "How Old Are you?" << endl;
		cin >> passenger_age;

		cout << "What day are you traveling? (1= Mon, 2= Tue, 3= Wed, etc..." << endl;
		cin >> travel_day;

		cout << "What time is it? (0-23)" << endl;
		cin >> travel_hour;

		cout << "Enter class code (S= Sleeper, A=AC, B=Business, N=Normal):" << endl;
		cin >> class_code;

		cout << "Enter baggage weight (kg): ";
		cin >> baggage;

		cout << "Are you a student (y/n): ";
		cin >> is_student;

		cout << "Are you a member? (y/n): ";
		cin >> is_member;


		double base_fare = 0, surcharge_amount = 0, discount_amount = 0;
		double baggage_fee = 0, total_fare = 0;

		switch (transport_type)
		{
		case 1:
		{
			base_fare = travel_distance * 0.5;

			if (class_code == 'S' || class_code == 's')
			{
				base_fare = base_fare * 1.2;
			}
			if (travel_hour >= 18 && travel_hour <= 22)
			{
				surcharge_amount = base_fare * 0.15;
			}
			if (passenger_age <= 12 || passenger_age >= 60)
			{
				discount_amount = discount_amount + (base_fare * 0.5);
			}
			if (is_student == 'Y' || is_student == 'y')
			{
				discount_amount = discount_amount + (base_fare * 0.1);
			}
			if (is_member == 'Y' || is_member == 'y')
			{
				discount_amount = discount_amount + (base_fare * 0.05);
			}
			if (base_fare < 2)
			{
				base_fare = 2;
			}
			if (baggage > 10)
			{
				baggage_fee = (baggage - 10) * 1.0;
			}
		}
		break;

		case 2:
		{
			base_fare = travel_distance * 0.8;

			if (class_code == 'A' || class_code == 'a')
			{
				base_fare = base_fare * 1.5;
			}
			if (travel_hour <= 18 || travel_hour >= 22)
			{
				surcharge_amount = base_fare * 0.15;
			}
			if (passenger_age <= 12 || passenger_age >= 60)
			{
				discount_amount = discount_amount + (base_fare * 0.5);
			}
			if (is_student == 'Y' || is_student == 'y')
			{
				discount_amount = discount_amount + (base_fare * 0.1);
			}
			if (is_member == 'Y' || is_member == 'y')
			{
				discount_amount = discount_amount + (base_fare * 0.05);
			}
			if (base_fare < 5)
			{
				base_fare = 5;
			}
			if (baggage > 10)
			{
				baggage_fee = (baggage - 10) * 1.0;
			}
		}
		break;

		case 3:
		{
			base_fare = travel_distance * 2.5;

			if (class_code == 'B' || class_code == 'b')
			{
				base_fare = base_fare * 2.2;
			}
			if (travel_day == 6 || travel_day == 7)
			{
				surcharge_amount = base_fare * 0.1;
			}
			if (passenger_age <= 12 || passenger_age >= 60)
			{
				discount_amount = discount_amount + (base_fare * 0.5);
			}
			if (is_student == 'Y' || is_student == 'y')
			{
				discount_amount = discount_amount + (base_fare * 0.1);
			}
			if (is_member == 'Y' || is_member == 'y')
			{
				discount_amount = discount_amount + (base_fare * 0.05);
			}
			if (base_fare < 50)
			{
				base_fare = 50;
			}
			if (baggage > 15)
			{
				baggage_fee = (baggage - 15) * 3.0;
			}
		}
		break;

		default:
		{
			cout << "Invalid transport type\n" << endl;
			return 0;
		}

		}
		total_fare = base_fare + surcharge_amount - discount_amount + baggage_fee;

		cout << fixed << setprecision(2);
		cout << "Final Ticket Price: $" << total_fare << endl;


	}
	else
	{
		cout << "Invalid transport type\n" << endl;
	}
	return 0;
}
	
	