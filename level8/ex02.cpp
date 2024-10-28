#include <iostream>
using namespace std;

int read_number()
{
	int nb;

	cout << "enter a number: ";
	cin >> nb;

	return nb;
}

int calcule_sum_of_odd_numbers_until_nb(int nb)
{
	int sum = 0;

	for(int i = 1; i <= nb;i++)
	{	
		if(i % 2 != 0)
		{
			sum += i; 
		}
	}
	return sum;
}

void print_sum_of_odd_numbers_until_nb()
{
	int sum ;

	sum = calcule_sum_of_odd_numbers_until_nb(read_number());
	cout << "the sum of odds numbers until your number is " << sum << endl;
}

int main()
{
	print_sum_of_odd_numbers_until_nb();

}
