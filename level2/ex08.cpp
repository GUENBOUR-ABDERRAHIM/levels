#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a;
	float b;
	float area;
	const float PI = 3.14;

	cout << "enter the isosceles of the triangle: ";
	cin >> a;
	cout << "enter the base of the triangle: ";
	cin >> b;
	
	area = ( (PI * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
	cout << "the area of your triangle is " << floor(area) << endl; 


}
