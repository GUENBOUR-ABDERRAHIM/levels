#include <iostream>
using namespace std;

unsigned int read_total_sales()
{
	unsigned int total_sales;

	do {
		cout << "enter your total sales: ";
		cin >> total_sales;
	
	}while(total_sales <= 0);

	return total_sales;
}	

unsigned int calcule_the_commission(unsigned int total_sales)
{
	if( total_sales >= 1000000)
		return total_sales * 0.01;
	else if ( total_sales >= 500000)
		return total_sales * 0.02;
	else if ( total_sales >= 100000)
		return total_sales * 0.03;
	else if ( total_sales >= 50000)
		return total_sales * 0.05;
	else
		return 0; 
}

void print_the_commission()
{
	unsigned int commission = calcule_the_commission(read_total_sales());
	cout << "your commission is " << commission << endl;
}

int main()
{
	 print_the_commission();
}
