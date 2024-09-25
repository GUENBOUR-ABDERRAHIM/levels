#include <iostream>
using namespace std;

void ATM_PIN_checker(int pin)
{
	int i = 1;
	while(i < 3 && pin != 1234)
	{
		cout << "wrong ATM PIN, try again: ";
		cin >> pin;
	  i++;
	}
	if(pin == 1234)
	{
		cout << "you have 7500 in your bank account: " << endl;
	}
	else
		cout << "card is locked!" << endl;
}

int main()
{
	int pin;
	cout << "enter the ATM PIN: ";
	cin >> pin;
	
	ATM_PIN_checker(pin);

}



