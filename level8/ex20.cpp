#include <iostream>
using namespace std;

float read_number(string message)
{
	float number;
	do {
		cout << message ;
		cin >> number;
	}while(number < 0);

	return number;
}

float calcule_months(float loan_amount,float monthly_payment)
{
	return loan_amount / monthly_payment;
}

int main()
{
	float loan_amount = read_number("enter the loan amount: ");
	float monthly_payment = read_number("enter the monthly payment: ");

	cout << calcule_months(loan_amount,monthly_payment) << " months " << endl;
}
