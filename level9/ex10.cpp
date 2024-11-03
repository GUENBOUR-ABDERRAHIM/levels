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
	int remainder = 0,reverse = 0;

	while(number > 0)
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number /= 10;
	}

	return reverse;
}

void print_palindrome_number(int number,int reverse)
{
	if(number == reverse)
		cout << "yes, it is a palindrome number.\n";
	else
		cout << "no, it is not a palindrome number.\n";

}

int main()
{
	int number = read_positive_number("enter a positive number: ");
	int reverse = reverse_number(number);
	print_palindrome_number(number,reverse);
}
