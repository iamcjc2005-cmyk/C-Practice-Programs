#include <iostream>
using namespace std;

int main()
{
	int a1;
	int a2;
	int a3;

	cout << "What is 5+5?" << endl;
	cin >> a1;
	if (a1 == 10)
	{
		cout << "Correct answer!! Next Question" << endl;

		cout << "What is 15+ 20?" << endl;
		cin >> a2;
		if (a2 == 35)
		{
			cout << "Correct answer!! Next Question" << endl;

			cout << "What is 10 x 10" << endl;
			cin >> a3;
			if (a3 == 100)
			{
				cout << "Correct Answer. YOU WIN!" << endl;

			}
			else
			{
				cout << "Game Over" << endl;
			}
		}
		else
		{
			cout << "Game Over" << endl;
		}
	}
	else
	{
		cout << "Game Over" << endl;
	}


	return 0;

}