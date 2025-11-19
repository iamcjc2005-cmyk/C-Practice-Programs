#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	srand(time(0));


	string user;
	cout << "Rock, Paper, or Scissors?" << endl;
	cin >> user;

	int random_values = rand() % 3;

	string computer;
	if (random_values == 0)
	{
		computer = "Rock";
	}

	else if (random_values == 1)
	{
		computer = "Paper";
	}
	else
	{
		computer = "Scissors";
	}

	cout << "You Chose:" << user << endl;
	if (user == "Rock" || user == "Paper" || user == "Scissors")
	{
		cout << "Computer chose:" << computer << endl;

		if (user == computer)
		{
			cout << "It's a tie" << endl;
		}
		else
		{
			if (user == "Rock")
			{
				if (computer == "Scissors")
				{

					cout << "You Win!" << endl;
				}
				else
				{
					cout << "You Lose!" << endl;
				}
			}
			else if (user == "Paper")
			{
				if (computer == "Rock")
				{
					cout << "You Win!" << endl;
				}
				else
				{
					cout << "You Lose!" << endl;
				}
			}
			else if (user == "Scissors")
			{
				if (computer == "Paper")
				{
					cout << "You Win!" << endl;
				}
				else
				{
					cout << "You Lose!" << endl;
				}
			}
		}
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	return 0;

}