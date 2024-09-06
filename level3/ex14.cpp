#include <iostream>
#include <cmath>
using namespace std;

float circle_area(float r)
{
	const float PI = 3.1415; 
	return (PI * pow(r, 2));
}

int main ()
{
	cout << circle_area(5) << endl;
}
