#include <iostream>
using namespace std;

int main()
{
	int isNight = true;
	int motionDetected = false;

	if (isNight && motionDetected)
	{
		cout << " Lights On" << endl;
	}
	else
	{
		cout << "Lights Off" << endl;
	}
	return 0;
}