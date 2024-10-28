#include <iostream>
using namespace std;

int read_a_positive_number()
{
	int nb;

	do{
		cout << "enter a positive number: ";
		cin >> nb;

	}while(nb < 0);

	return nb;
}

int factorial(int nb)
{
	int sum = 1;
	int i = nb;

	while(i >= 1)
	{
		sum *= i;
	
	i--;
	}

	return sum;
}

void print_the_factorial_of_a_number()
{
	int sum = factorial(read_a_positive_number());
	cout << "the factorial of the number that you choose is " << sum << endl;
}

int main()
{
	print_the_factorial_of_a_number();
}
