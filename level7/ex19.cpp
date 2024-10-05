#include <iostream>
#include <cmath>
using namespace std;

float read_square()
{
	float square;

	cout << "enter the square area: ";
	cin >> square;

	return square;
}

float calcule_circle_area(float square)
{
	const float PI = 3.14159;

	return (PI * pow(square, 2)) / 4;
}

void print_circle_area(float area)
{
	cout << "the circle area inscribed in your square is " << area << endl;
}

int main()
{
	print_circle_area(calcule_circle_area(read_square()));
}

