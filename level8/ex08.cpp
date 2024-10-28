#include <iostream>
using namespace std;

struct st_money
{
	float penny;
	float nickel;
	float dime;
	float quarter;
	float dollar;
};

st_money read_money()
{
	st_money user;

	cout << "enter the pennys: ";
	cin >> user.penny;
	cout << "enter the nickels: ";
	cin >> user.nickel;
	cout << "enter the dimes: ";
	cin >> user.dime;
	cout << "enter the quarters: ";
	cin >> user.quarter;
	cout << "enter the dollars: ";
	cin >> user.dollar;

	return user;
}

float calcule_the_pennies(st_money user)
{
	return user.penny + user.nickel * 5 + user.dime * 10 + user.quarter * 25 + user.dollar * 100;
}

float calcule_the_dollars(float pennies)
{
	return pennies / 100;
}

void print_total_of_pennies_and_dollars()
{
	st_money money = read_money();
	float pennies = calcule_the_pennies(money);
	float dollars = calcule_the_dollars( calcule_the_pennies(money));

	cout << "the total of the pennies is " << pennies << endl;
	cout << "the total of the dollars is " << dollars << endl;
}

int main()
{
	 print_total_of_pennies_and_dollars();
}
