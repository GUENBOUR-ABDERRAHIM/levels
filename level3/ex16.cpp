#include <iostream>
#include <cmath>
using namespace std;

float circle_area(float a)
{
	float area;
	const float PI = 3.1415;

	area = (PI * pow(a,2)) / 4;
	return (area);
}

int main()
{
	cout << circle_area(10) << endl;
}
