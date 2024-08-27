#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a;
	float b;

	cout << "please enter the first number A: ";
	cin >> a;
	cout << "please enter the second number B: ";
	cin >> b;

	cout << a << " + " << b << " = " << a + b << endl ;
	cout << a << " - " << b << " = " << a - b << endl ;
	cout << a << " * " << b << " = " << a * b << endl ;
	cout << a << " / " << b << " = " << a / b << endl ;
	cout << a << " % " << b << " = " << fmod(a , b) << endl ;
}
