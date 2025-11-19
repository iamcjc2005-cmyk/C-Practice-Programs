#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int rain;
	int total_rain{};
	double average_rain;

	for (int day= 1; day < 8; day++)
	{
		cout << "Enter rainfall for day " << day << ": " << endl;
		cin >> rain;

		total_rain += rain;
	}

	average_rain = total_rain / 7;

	cout << " Total rain: " << total_rain << endl;
	cout << "Average rain: " << fixed << setprecision(2) << average_rain << endl;

	return 0;
}