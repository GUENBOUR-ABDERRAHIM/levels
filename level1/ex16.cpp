#include <iostream>
using namespace std;

int main()
{
	int loan_amount;
	int monthly_payment;
	int mounth_nb;

	cout << "enter your loan amount: ";
	cin >> loan_amount;

	cout << "enter your monthly payment: ";
	cin >> monthly_payment;

	mounth_nb = loan_amount / monthly_payment;
	cout << "you need " << mounth_nb << " mounth." << endl;
}
