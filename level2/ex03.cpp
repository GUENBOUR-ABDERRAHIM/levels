#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a;
	float b;
	float area;

	cout << "enter the perimeter of rectangle: ";
	cin >> a;
	cout << "enter the diagrame of rectangle: ";
	cin >> b;
	
	area = a * sqrt(pow(b, 2) - pow(a, 2));
	cout << "the area of your rictangle is " << area << endl;



}
