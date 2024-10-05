#include <iostream>
#include <cmath>
using namespace std;

float read_info()
{
	float diameter;
	cout << "enter the diameter of your circle: ";
	cin >> diameter;

	return diameter;
}

float calcule_circle_area(float diameter)
{
	const float PI = 3.14159;

	return (PI * pow(diameter, 2)) / 4;
}

void print_circle_area(float area)
{
	cout << "the area of your circle is: " << area << endl;
}

int main()
{
	print_circle_area(calcule_circle_area(read_info()));
}
