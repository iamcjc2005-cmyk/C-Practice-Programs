#include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	double pi = 3.14159265359;

	cout << fixed << setprecision(3) << pi << endl;
	cout << fixed << setprecision(5) << pi << endl;
	cout << fixed << setprecision(10) << pi << endl;

	return 0;
}