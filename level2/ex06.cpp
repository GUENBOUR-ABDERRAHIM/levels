#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float square;
	const float PI = 3.14;
	float area;

	cout << "enter the perimeter of the square surrounding the circle: ";
	cin >> square;

	area = (PI * pow(square, 2)) / 4;
	cout << "the circle area inscribed in a square is " << area << endl; 

}
