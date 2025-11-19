#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "What is your grade" << endl;
	cin >> grade;

	if (grade >= 60)
	{
		if (grade >= 70)
		{
			if (grade >= 80)
			{
				if (grade >= 90)
				{
					cout << "Your Grade is an A" << endl;
				}
				else
				{
				  cout << "Your grade is a B" << endl;
				}
			}
			else
			{
				cout << "Your Grade is a C" << endl;
			}
		}
		else
		{
			cout << "Your Grade is a D" << endl;
		}
	}
	else
	{
		cout << "Your Grade is a F" << endl;
	}

}