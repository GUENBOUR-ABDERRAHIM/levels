#include <iostream>
using namespace std;

int main ()
{
	float l;
	float area;
	float PI = 3.14159265;

	cout << "enter your circle l: ";
	cin >> l;

	area = (l * l) / (4 * PI);
	cout << "your circle area is: " << area << endl;

}
