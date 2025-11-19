#include <iostream>
using namespace std;

int main()
{
	bool hasID = true;
	bool libraryclosed = false;

	
	if (hasID && !libraryclosed)
	{
		cout << "Allow Access" << endl;
	}
	else
	{
		cout << "Deny Access" << endl;
	}
			
	
}