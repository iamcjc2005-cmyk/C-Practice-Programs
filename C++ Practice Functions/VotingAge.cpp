#include <iostream>
using namespace std;

int main()
{
	int age;
	bool citizen;

	cout << "How Old are you?" << endl;
	cin >> age;

	cout << "Are you a Citizen?" << endl;
	cin >> citizen;

	if (age < 18)
	{
		cout << "You are not Old enough to vote" << endl;
	}
	else
	{
		if (age >= 18 && citizen == false)
		{
			cout << "You must be a citizen to vote" << endl;

		}
		else
		{
			if (age >= 18 && citizen == true)
			{
				cout << "You are eligible to vote" << endl;
			}
		}
	}
	return 0;
}