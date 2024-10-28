#include <iostream>
using namespace std;

float read_billvalue()
{
	float billvalue;

	do { 
		cout << "enter the billvalue: ";
		cin >> billvalue;
	}while(billvalue < 0);

	return billvalue;
}

float callcule_billvalue_after_taxes(float billvalue)
{
	billvalue *= 1.1;
	billvalue *= 1.16;

	return billvalue;
}

void print_billvalue_after_taxes()
{
	float total = callcule_billvalue_after_taxes(read_billvalue());
	cout << "the billvalue after taxes is " << total << endl;
}

int main()
{
	print_billvalue_after_taxes();
}
