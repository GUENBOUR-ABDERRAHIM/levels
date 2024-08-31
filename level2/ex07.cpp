#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float l;
	float area;
	const float PI = 3.14;

	cout << "enter the circumference: ";
	cin >> l;

	area = pow(l, 2) / (4 * PI);
	cout << "the area of the circle is " << floor(area) << endl;


}
