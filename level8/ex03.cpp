#include <iostream>
using namespace std;

int read_nb()
{
	int nb;

	cout << "enter a number: ";
	cin >> nb;

	return nb;
}

int calcule_the_sum_of_even_numbers_until_nb(int nb)
{
	int sum = 0;
	int i = 1;
	
	while(i <= nb)
	{
		if(i % 2 == 0)
		{
			sum += i;
		}
	i++;
	}
	return sum;
}

void print_the_sum_of_even_numbers_until_nb()
{
	int sum = calcule_the_sum_of_even_numbers_until_nb(read_nb());
	cout << "the sum og the even numbers until your number is " << sum << endl;
}
int main()
{
	print_the_sum_of_even_numbers_until_nb();
}
