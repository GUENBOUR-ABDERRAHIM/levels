#include <iostream>
using namespace std;

int main ()
{
	int nb;
	int power;
	int result;

	cout << "enter the number: ";
	cin >> nb;
	cout << "enter the power: ";
	cin >> power;

	result = 1;
	while(power >= 1)
	{
		result *= nb ;
		power--;
	}

	cout << nb << " power of " << " is " << result << endl;
	
	



}
