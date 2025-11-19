#include <iostream>
using namespace std;

int main()
{
	int grade;
	grade = 99;

	if (grade > 90)
	{
		cout << "Your grade is an A" << endl;
	}
	else if (grade >= 80)
	{
		cout << "Your Grade is a B" << endl;
	}
	else if (grade >= 70)
	{
		cout << "Your Grade is a C" << endl;
	}
	else if (grade >= 60)
	{
		cout << "Your Grade is a D" << endl;
	}
	else
	{
		cout << "Your Grade is a F" << endl;
	}
	return 0;
		
}