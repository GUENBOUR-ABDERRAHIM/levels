#include <iostream>
#include <cmath>
using namespace std;

float rectangle_area(float a, float b)
{
	return(a * sqrt(pow(b, 2) - pow(a, 2)));
}
int main ()
{
	cout << rectangle_area(5, 40) << endl;
}
