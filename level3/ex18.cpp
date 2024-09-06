#include <iostream>
#include <cmath>
using namespace std;

float circle_area(float a,float b)
{
	const float PI = 3.1415;
	float area;

	area = (PI * pow(b , 2) / 4) * ((2 * a - b) / (2 * a + b));
	
	return (area);
}

int main()
{
	cout << circle_area(20,10) << endl;
}
