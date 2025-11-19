#include <iostream>
using namespace std;

bool is_strong_code(int code);

int main()
{
	int user_input;

	cout << "Input 4-Digit Code" << endl;
	cin >> user_input;

	if (int code = is_strong_code(user_input))
	{
		cout << "Your code is strong" << endl;
	}
	else
	{
		cout << "Your code is weak" << endl;
	}

}

bool is_strong_code(int code)
{
	
}

