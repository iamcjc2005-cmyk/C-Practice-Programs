#include <iostream>
using namespace std;

int total_fee = 0;

int main()
{
	int books;
	

	cout << "How many books are you turning in late?" << endl;
	cin >> books;
	
	while (books >=1)
	{
		int days_late=0;
		int book_fee = 0;
		cout << "How many days is this book late?" << endl;
		cin >> days_late;

		if (days_late >= 1 || days_late <=5)
		{
			book_fee = 1 * days_late;
			cout << "Your late fee for book "<< books << " is: " << book_fee << endl;
			total_fee = book_fee + total_fee;
		}
		else if (days_late >= 6 || days_late <=10)
		{
			book_fee = 2 * days_late;
			cout << "Your late fee for book " << books << "is : " << book_fee << endl;
			total_fee = book_fee + total_fee;
		}
		else if (days_late >10)
		{
			book_fee = 5;
			cout << "Your late fee for book " << books << "is: " << book_fee << endl;
			total_fee = book_fee + total_fee;
		}
		else
		{
			cout << "No fee" << endl;
		}
		cout << "Your total fee is " << total_fee << endl;
	}
	return 0;
}