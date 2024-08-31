#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a;
	float b;
	float c;
	float p;
	float area;
	const float PI = 3.14;

	cout << "enter the around an arbitrary triangle (a , b and c): ";
	cin >> a;
	cin >> b;
	cin >> c;

	p = (a + b + c) / 2;

	area = PI * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))) , 2);

	cout << "the area of the circle is " << round(area) << endl;

	

}
