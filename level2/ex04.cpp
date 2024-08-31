#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float radius;
	float area;
	float PI = 3.14;
	cout << "enter the radius of the circle: ";
	cin >> radius;

	area = 	PI * pow(radius, 2);
	cout << "the area of your circle is: " << ceil(area) << endl;

}
