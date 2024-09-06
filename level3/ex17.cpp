#include <iostream>
#include <cmath>
using namespace std;

float circle_area(float l)
{
	const float PI = 3.1415;

	return (pow(l, 2) / (4 * PI));
}

int main ()
{
	cout << circle_area(20) << endl;
}

