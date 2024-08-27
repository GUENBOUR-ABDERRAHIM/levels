#include <iostream>
using namespace std;

int main ()
{
	float a;
	float b;
	float rectangle_area;

	cout << "enter the length of the rectangle: ";
	cin >> a;
	cout << "enter the width of the rectangle: ";
	cin >> b;

	rectangle_area = a * b;
	cout << "the area of the rectangle is: " << rectangle_area << endl;

}
