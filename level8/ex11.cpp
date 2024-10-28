#include <iostream>
#include <cmath>
using namespace std;

enum en_number_type {not_prime = 0,prime = 1};

int read_number()
{
	int number;
	do {
		cout << "enter a number: "<< endl;
		cin >> number;
	}while(number < 0);

	return number;
}

en_number_type check_prime(int number)
{
	int i = 2;
	while(i <= round(number / 2))
	{
		if(number % i == 0)
			return en_number_type::not_prime; 
	i++;
	}
	return en_number_type::prime;
}

void print_prime(en_number_type prime)
{
	switch (prime)
	{
		case (en_number_type::not_prime):
			cout << "this is not a prime number.\n";
			break;
		case (en_number_type::prime):
			cout << "this is a prime number.\n";
			break;
	}
}

int main()
{
	print_prime(check_prime(read_number()));
}
