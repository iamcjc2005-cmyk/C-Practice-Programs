#include <iostream>
using namespace std;

int main()
{
	int grade;
	int exam;
	bool sports;
	cout << "What is your overall grade" << endl;
	cin >> grade;

	cout << "What did you score on the entrace exam?" << endl;
	cin >> exam;

	cout << "Are you here on a sports quota?" << endl;
	cin >> sports;

	if (grade >= 60)
	{
		if (grade >= 85 && exam >= 80)
		{
			cout << "Addmission in Honors Program" << endl;
		}
		else
		{
			if (grade >= 70 && exam >= 60)
			{
				cout << "Admission in Regular Program" << endl;
			}
			else
			{
				if (grade >= 60 && sports == true)
				{
					cout << "Admission under Sports Quota" << endl;
				}

			}
		}
	
	}
	else
	{
		cout << "Application Rejected" << endl;
	}
}