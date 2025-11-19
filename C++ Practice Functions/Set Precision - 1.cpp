#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi = 3.14159265359;

	cout << setprecision(2) << pi << endl;
	cout << setprecision(6) << pi << endl;
	cout << setprecision(8) << pi << endl;

	return 0;
}