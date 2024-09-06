#include <iostream>
#include <cmath>
using namespace std;

float circle_area(float a, float b, float c)
{
	const float PI = 3.1415;
	float p;
	float area;

	p = (a + b + c) / 2;
	area = PI * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);

	return (area);
}
int main()
{
	cout << circle_area(5,6,7) << endl;
}
