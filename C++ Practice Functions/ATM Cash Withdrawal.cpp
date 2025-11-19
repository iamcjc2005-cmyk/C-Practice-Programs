#include <iostream>
using namespace std;

int main()
{
	int amount;
	int balance = 200;

	cout << "Enter Amount" << endl;
	cin >> amount;

	if ((amount < balance || amount == balance))
		cout << "Transaction Successful" << endl;
	else
		cout << "Insufficient Funds" << endl;
	return 0;

}