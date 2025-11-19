#include <iostream>
using namespace std;

int readings_count;

int main()
{
	cout << "What the current temperature <15 = Cold >30 = Hot)" << readings_count << endl;
	cin >> readings_count;

	if (readings_count < 15)
	{
		cout << "Cold" << endl;
	}
	else if (readings_count > 30)
	{
		cout << "Hot" << endl;
	}
	else
	{
		cout << "Warm" << endl;
	}
	return 0;
}