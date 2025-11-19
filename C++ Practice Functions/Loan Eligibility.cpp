#include <iostream>
using namespace std;

int main()
{
	int age;
	int salary;
	int credit;

	cout << "How Old are You?" << endl;
	cin >> age;
	
	cout << "What is your salary?" << endl;
	cin >> salary;

	cout << "What is your credit score?" << endl;
	cin >> credit;
	
	if (age < 21)
	{
		cout << "Not Eligible ( too young)" << endl;
	}
	else
	{
		if (age >= 21 && salary < 30000)
		{
			cout << "Not Eligible (Low Income)" << endl;
		}
		else
		{
			if (salary >= 30000 && credit < 650)
			{
				cout << "Not eligible( low credit score)" << endl;

			}
			else
			{
				cout << "Loan Approved!" << endl;
			}
		}
	}
}