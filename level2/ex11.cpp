#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a;
	float b;

	cout << "enter a first number: ";
	cin >> a;
	cout << "enter a second number: ";
	cin >> b;

	cout << "first number ^ second number = " << round(pow(a, b)) << endl; 

}
