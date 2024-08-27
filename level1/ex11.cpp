#include <iostream>
using namespace std;

int main ()
{
	unsigned short penny;
	unsigned short nickel;
	unsigned short dime;
	unsigned short quarter;
	unsigned short dollar;
	float pennies;
	float dollars;

	cout << "enter how many pennys: ";
	cin >> penny;
	cout << "enter how many nickels: ";
	cin >> nickel;
	cout << "enter how many dimes: ";
	cin >> dime;
	cout << "enter how many quarters: ";
	cin >> quarter;
	cout << "enter how many dollars: ";
	cin >> dollar;
	
	pennies = penny + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100);
	dollars = pennies / 100;

	cout << "your total in pennies is: " << pennies << endl;
	cout << "and in dollars is: " << dollars << endl;





}
