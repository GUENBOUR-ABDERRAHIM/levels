#include <iostream>
using namespace std;

int main ()
{
	float diameter;
	const float PI = 3.14;
	float area;

	

	cout << "enter the diameter of your circle: ";
	cin >> diameter;
	
	area = (PI * diameter * diameter) / 4;
	cout << "the area for your circle is " << area << endl;


}
