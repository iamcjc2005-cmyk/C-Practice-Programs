#include <iostream>
using namespace std;

int main()
{
	char play_again;
	do
	{
		
		int entered_pin;
		int correct_pin = 4321;

		cout << "Phone Locked. Enter four digit pin.\n" << endl;
		do
		{
			cout << "PIN: ";
			cin >> entered_pin;

			if (entered_pin != correct_pin)
			{
				cout << "Incorrect. Try Again.\n";
			}
		} while (entered_pin != correct_pin);

		cout << "Unlocked" << endl;

		cout << "Lock Phone and Try Again? (y/n): " << endl;
		cin >> play_again;
	} while (play_again == 'y' || play_again == 'Y');

	cout << "Goodbye!\n";
	return 0;
		
	
}
	