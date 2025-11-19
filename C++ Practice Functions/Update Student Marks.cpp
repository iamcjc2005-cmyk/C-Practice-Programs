#include <iostream>
using namespace std;

void update_marks(int* marks);

int main()
{
	int student_marks = 72;
	
	cout << "Marks: " << student_marks << endl;

	update_marks(&student_marks);

	cout << "Updated Marks: " << student_marks << endl;

	return 0;
}

void update_marks(int* marks)
{
	*marks = *marks + 5;

}