#include <iostream>
using namespace std;

struct st_paid
{
	float total_bill;
	float cash_paid;
};

st_paid read_number()
{
	st_paid customer;
	do {
		cout << "enter the total bill: ";
		cin >> customer.total_bill;	
	}while(customer.total_bill < 0);

	do {
		cout << "enter the cash paid: ";
		cin >> customer.cash_paid;
	}while(customer.cash_paid < 0);

	return customer;
}

float calcule_the_remainder(st_paid customer)
{
	return customer.cash_paid - customer.total_bill;
}

void print_the_remainder()
{
	float remainder = calcule_the_remainder(read_number());
	cout << "the remainder is " << remainder << endl;

}

int main()
{
	print_the_remainder();
}
