#include <iostream>
using namespace std;

int main ()
{
	float square;
	float area;
	float PI = 3.14;

	cout << "enter the square: ";
	cin >> square;

	area =(PI * square * square) / 4;

	cout << "the area of your square is: " << area << endl;

}
