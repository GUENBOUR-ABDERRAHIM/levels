#include <iostream>
using namespace std;

int main ()
{
	float a;
	float b;
	const float PI = 3.14159265359;
	float area;

	cout << "enter a to calcule the area of the circle: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;

	area = ((PI * b * b) / 4) * ((2 * a - b) / (2 * a + b));
	cout << "your circle area is: " << area << endl;

}
