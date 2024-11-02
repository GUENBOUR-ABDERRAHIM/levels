#include <iostream>
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

bool check_perfect_number(int number)
{
	int sum = 0;
	for(int i = 1;i <= number - 1;i++)
	{
		if(number % i == 0)
			sum += i;
	}

	return sum == number;
}

void print_perfect_number(int number)
{
	if(check_perfect_number(number))
		cout << "this number is a perfect number.\n";
	else
		cout << "this number is not a perfect number.\n";
}

int main()
{
	print_perfect_number(read_positive_number("enter a positive number: "));

}
