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

float calcule_monthly_installment_amount(float loan_amount,float mounths)
{
	return loan_amount / mounths;
}

int main()
{
	float loan_amount = read_number("enter the loan amount: ");
	float mounths = read_number("enter the number of the mounths you need to pay: ");

	cout << "you need to pay " << calcule_monthly_installment_amount(loan_amount,mounths) << " monthly " << endl;
}
