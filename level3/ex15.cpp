#include <iostream>
#include <cmath>
using namespace std;

float circle_area(float d)
{
	const float PI = 3.1415;
	return ((PI * pow(d, 2)) / 4);
}

int main()
{
	cout << circle_area(10) << endl;
}
