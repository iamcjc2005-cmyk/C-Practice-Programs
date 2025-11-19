#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	char play_again;

	do
	{
		int match_length;
		cout << "Enter an ODD match length (e.g., 3/5/7): " << endl;
		cin >> match_length;

		while (match_length < 1 || (match_length % 2 == 0))
		{
			cout << "Invalid. Enter an ODD number >= 1: " << endl;
			cin >> match_length;
		}

		int user_wins = 0;
		int computer_wins = 0;
		int wins_needed = match_length / 2 + 1;

		while (user_wins < wins_needed && computer_wins < wins_needed)
		{
			char user_move;
			cout << "\n Your move (r/p/s): " << endl;
			cin >> user_move;

			while (user_move != 'r' && user_move != 'p' && user_move != 's')
			{
				cout << "Invalid. Enter r, p, or s): " << endl;
				cin >> user_move;
			}

			int roll = rand() % 3;
			char computer_move;
			if (roll == 0)
			{
				computer_move = 'r';
			}
			else if (roll == 1)
			{
				computer_move = 'p';
			}
			else
			{
				computer_move = 's';
			}

			cout << "Computer: " << computer_move << "\n";

			if (user_move == computer_move)
			{
				cout << "Tie.\n";
			}
			else if ((user_move == 'r' && computer_move == 's') || (user_move == 'p' && computer_move == 'r') || (user_move == 's' && computer_move == 'p'))
			{
				cout << "You win the round!\n";
				user_wins = user_wins + 1;
			}
			else
			{
				cout << "Computer wins the round!\n";
				computer_wins = computer_wins + 1;
			}

			cout << "Score You-Comp: " << user_wins << "" << computer_wins << "\n";
		}
		if (user_wins > computer_wins)
		{
			cout << "\nYou win the match!\n";
		}
		else
		{
			cout << "\nComputer wins the match!\n";
		}

		cout << "Play again? (y/n): ";
		cin >> play_again;
		while (play_again != 'y' && play_again != 'n')
		{
			cout << "Enter y or n: ";
			cin >> play_again;
		}

	} while (play_again == 'y');

	cout << "Bye!\n";
	return 0;
}