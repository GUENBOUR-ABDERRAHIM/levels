#include <iostream>
using namespace std;

int read_number(string message)
{
	int number;
	do {
		cout << message;
		cin >> number;
	}while(number < 0);

	return number;
}

bool login()
{
	int pin;

	for(int i = 3; i >= 1; i--)
	{
		pin = read_number("enter your ATM PIN: ");

		if(pin == 1234)
			return 1;
		else
		{
			cout << "wrong PIN try again.\n" ;
			
		}
	}

	return 0;
}

int main()
{
	if(login())
	{
		cout << "your balance is " << 7500 << endl;
	}
	else
		cout << "your account is blocked.\n";
}
