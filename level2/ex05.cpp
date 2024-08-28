#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float diameter;
	float area;
	const float PI = 3.14;

	cout << "enter the diameter of the circle: ";
	cin >> diameter;

	area = (PI * pow(diameter, 2)) / 4;
	cout << "the area of your circle is " << area << endl;


}
