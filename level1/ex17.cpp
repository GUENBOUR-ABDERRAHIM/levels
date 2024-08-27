#include <iostream>
using namespace std;

int main ()
{
	int loan_amount;
	int mounth;
	int mounthly_salary;

	cout << "how much your loan amount: ";
	cin >> loan_amount;

	cout << "how many months you need to settle the loan: ";
	cin >> mounth;
	
	mounthly_salary = loan_amount / mounth;

	cout << "the montly installment amount is " << mounthly_salary << endl; 

}
