#include <iostream>
using namespace std;


int main()
{
	char ch;
	cout << "Enter a single case letter" << endl;
	cin >> ch;

	if (ch >= 'a' && ch <= 'z')
	{
		switch (ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			{
				cout << "Vowel" << endl;
			}
			break;
			default:
			{
				cout << "Consonant" << endl;
			}
		}
	}
	else
	{
		cout << "Invalid" << endl;
	}
}