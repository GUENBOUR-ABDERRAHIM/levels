#include <iostream>
using namespace std;

int main ()
{
	float nb1;
	float nb2;
	float c;

	cout << "enter the namber A: ";
	cin >> nb1;
	cout << "enter the number B: ";
	cin >> nb2;

	c = nb1;
	nb1 = nb2;
	nb2 = c;

	cout << "after the swap the number A is " << nb1 << " and B is " << nb2 << endl;

}
