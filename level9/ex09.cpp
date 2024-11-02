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

int reverse_number(int number)
{
	int remainder = 0;
        int reverse = 0;
	
	while(number > 0)
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number /= 10;
	}
	return reverse;
}

void print_number_in_reverse_order(int number)
{
	int remainder = 0;
	while(number > 0)
	{
		remainder = number % 10;
		cout << remainder << endl;
		number /= 10;
	}

}

int main()
{
	print_number_in_reverse_order(reverse_number(read_positive_number("enter a number: ")));
}
