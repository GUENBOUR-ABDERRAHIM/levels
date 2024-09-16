#include <iostream>
using namespace std;

int main()
{
	short pin;

	cout << "enter your ATM PIN: ";
	cin >> pin;

	if(pin == 1234)
	{
		cout << "you have 7500DH in your acount.\n";
	}
	else
	{
		cout << "wrong PIN.\n";
	}


}
