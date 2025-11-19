#include <iostream>
using namespace std;

double read_recharge_amount(double balance, double recharge_amount);

double compute_fare(int ending_zone, int ending_hour, int start_zone, int start_hour);

int main()
{
	int user_input;
	double balance = 0;
	bool in_trip = false;
	int start_zone;
	int start_hour;
	int ending_zone;
	int ending_hour;
	bool last_trip = false;
	double last_fare = 0;



	do
	{
		cout << "=== SMART TRANSIT CARD ===" << endl;
		cout << "1) Recharge" << endl;
		cout << "2) Tap-In" << endl;
		cout << "3) Tap Out" << endl;
		cout << "4) Show Balance" << endl;
		cout << "5) Show Last Trip" << endl;
		cout << "6) Admin/Debug" << endl;
		cout << "7) Exit" << endl;
		cout << "Choose:_" << endl;
		cin >> user_input;

		switch (user_input)
		{
		case 1:
		{
			double recharge_amount;

			cout << "Enter recharge amount: " << endl;
			cin >> recharge_amount;

			if (recharge_amount <= 0)
			{
				cout << "Invalid Amount! Please Try Again." << endl;
			}
			else
			{
				double total = read_recharge_amount(balance, recharge_amount);
				balance = total;

				cout << "Recharge successful. New Balance: $" << total << endl;

			}
			break;
		}
		case 2:
		{



			if (in_trip == true)
			{
				cout << "You are already in a trip! Please Tap out first" << endl;
			}
			else
			{
				cout << "Enter Starting Zone (1-3): " << endl;
				cin >> start_zone;
				while (start_zone < 1 || start_zone > 3)
				{
					cout << "Invalid Zone Try Again" << endl;
					cout << "Enter Starting Zone (1-3): " << endl;
					cin >> start_zone;
				}
				cout << "Enter Starting Hour (0-23): " << endl;
				cin >> start_hour;
				while (start_hour < 0 || start_hour > 23)
				{
					cout << "Invalid Hour Try Again" << endl;
					cout << "Enter Starting Hour (0-23): " << endl;
					cin >> start_hour;
				}
				cout << "Tap-In recorded successfully" << endl;

				in_trip = true;
			}
		}
		break;
		case 3:
		{


			if (in_trip == false)
			{
				if (balance >= 6)
				{
					cout << "Penalty Charged:$6.00" << endl;
					balance = balance - 6;
				}
				else
				{
					cout << "Insufficient balance to pay penalty. Please recharge." << endl;
				}
				cout << "New balance:$ " << balance << endl;
			}
			else
			{
				cout << "Enter Ending Zone (1-3)" << endl;
				cin >> ending_zone;

				cout << "Enter Ending Hour (0-23): " << endl;
				cin >> ending_hour;

				last_fare = compute_fare(ending_zone, ending_hour, start_zone, start_hour);

				cout << "Trip completed. You're fare is:$ " << last_fare << endl;
				balance = balance - last_fare;
				cout << "Remaining Balance:$ " << balance << endl;

				in_trip = false;
				last_trip = true;
			}
		}
		break;
		case 4:
		{
			void show_balance_screen(double balance);
			cout << "You're current balance is:$ " << balance << endl;
			break;
		}
		case 5:
		{

			void show_last_trip(int last_start_zone, int last_end_zone, int last_start_hour, int last_end_hour, float last_fare);
			if (last_trip == false)
			{
				cout << "No Previous Trip Found" << endl;
			}
			else
			{
				cout << "Last Trip Summary" << endl;
				cout << "Start Zone: " << start_zone << endl;
				cout << "End Zone: " << ending_zone << endl;
				cout << "Start Hour: " << start_hour << endl;
				cout << "End Hour: " << ending_hour << endl;
				cout << "Fare Paid:$" << last_fare << endl;
			}
			break;
		}
		case 6:
		{
			double* ptr_balance = &balance;
			bool* ptr_in_trip = &in_trip;
			int* ptr_start_zone = &start_zone;
			int* ptr_end_zone = &ending_zone;
			int* ptr_start_hour = &start_hour;
			int* ptr_end_hour = &ending_hour;

			cout << "balance " << *ptr_balance << " = " << balance << endl;
			cout << "in_trip " << *ptr_in_trip << " = " << in_trip << endl;
			cout << "last_start_zone " << ptr_start_zone << " = " << start_zone << endl;
			cout << "last_end_zone " << ptr_end_zone << " = " << ending_zone << endl;
			cout << "last_start_hour " << ptr_start_hour << " = " << start_hour << endl;
			cout << "last_end_hour " << ptr_end_hour << " = " << ending_hour << endl;

			break;
		}
		case 7:
		{
			cout << "You exited" << endl;
			return 0;
		}
		default:
		{
			cout << "Invalid Choice Try Again." << endl;
		}
		}
	} while (user_input >= 1 && user_input <= 7);

	return 0;
}

double read_recharge_amount(double balance, double recharge_amount)
{
	double total = balance + recharge_amount;

	return total;
}

double compute_fare(int ending_zone, int ending_hour, int start_zone, int start_hour)
{
	double last_fare = 2.50;

	while (ending_zone < 1 || ending_zone > 3)
	{
		cout << "Invalid Zone Try Again" << endl;
		cout << "Enter Ending Zone (1-3): " << endl;
		cin >> ending_zone;
	}
	while (ending_hour < 0 || ending_hour > 23)
	{
		cout << "Invalid Hour Try Again" << endl;
		cout << "Enter Ending Hour (0-23): " << endl;
		cin >> ending_hour;
	}

	if (start_hour >= 7 && start_hour <= 9 || start_hour >= 17 && start_hour <= 19 ||
		ending_hour >= 7 && ending_hour <= 9 || ending_hour >= 17 && ending_hour <= 19)
	{
		last_fare = last_fare + 1.25;

	}

	if (start_zone == 1 && ending_zone == 3)
	{
		last_fare = last_fare + 1.75;
	}


	return last_fare;
}