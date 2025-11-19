#include <iostream>
using namespace std;

int calculate_perimeter(int length, int width);
int calculate_area(int length, int width);

int main()
{
	int rectangle_length;
	int rectangle_width;
	cout << "Enter length and width of the rectangle: ";
	cin >> rectangle_length >> rectangle_width;

	int perimeter = calculate_perimeter(rectangle_length, rectangle_width);
	int area = calculate_area(rectangle_length, rectangle_width);

	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area << endl;
	return 0;
}
int calculate_perimeter(int length, int width)
{
	return 2 * (length + width);
}
int calculate_area(int length, int width)
{
	return length * width;
}