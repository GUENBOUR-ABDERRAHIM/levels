#include <iostream>
using namespace std;

int read_positive_number(string message)
{
	int number;
	do {
		cout << message;
		cin >> number;
	}while(number < 0);

	return number;
}

bool check_perfect_number(int number)
{
	int sum = 0;
	for (int i = 1; i < number;i++)
	{
		if(number % i == 0)
			sum += i;
	}
	
	return sum == number;
}

void print_perfect_numbers()
{
	int number = read_positive_number("enter a positive number: "); 

	cout << "the perfect numbers between 1 and " << number << " are: \n";

	for(int i = 1;i <= number;i++)
	{
		if(check_perfect_number(i))
			cout << i << "  ";
	}
	cout << endl;
}

int main()
{
	print_perfect_numbers();

}
