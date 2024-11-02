#include <iostream>
#include <cmath>
using namespace std;

int read_positive_number(string message)
{
	int number;
	do {
		cout << message ;
		cin >> number;
	}while(number < 0);

	return number;
}

bool check_prime(int number)
{
	int halfnumber = number - 1;

	if(number == 1)
		return 0;
	for(int i = 2;i <= halfnumber; i++)
	{
		if(number % i == 0)
			return 0;
	}
	return 1;
}

void print_prime_numbers()
{
	int number = read_positive_number("enter a positive number: ");

	cout << "the prime numbers between 1 and " << number << " are: \n";  
	for(int i = 1; i <= number ; i++)
	{
		if(check_prime(i))
			cout << i << "  ";
	}
	cout << endl;
}

int main()
{
	print_prime_numbers();
}
