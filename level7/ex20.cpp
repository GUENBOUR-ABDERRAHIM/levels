#include <iostream>
#include <cmath>
using namespace std;

int read_circumference()
{
	int circumference;

	cout << "enter the circumference: ";
	cin >> circumference;

	return circumference;
}

float calcule_circle_area(int circumference)
{
	const float PI = 3.14159;

	return (float) pow(circumference, 2) / (4 * PI);

}

void print_the_area(float area)
{
	cout << "the circle area along the circumference is " << area << endl;

}

int main()
{
	print_the_area(calcule_circle_area(read_circumference()));
}
