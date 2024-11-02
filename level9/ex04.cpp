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

void print_digits(int number)
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
	print_digits(read_positive_number("enter a number: "));

}
