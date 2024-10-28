#include <iostream>
using namespace std;

float read_number(string message)
{
	float number;
	do {
		cout << message;
		cin >> number;
	}while(number < 0);

	return number;
}

void print_balance(float number)
{
	if(number == 1234)
		cout << "your balance is: 7500\n";
	else
		cout << "wrogn PIN\n";
}

int main()
{
	print_balance(read_number("enter the ATM PIN: "));
}
