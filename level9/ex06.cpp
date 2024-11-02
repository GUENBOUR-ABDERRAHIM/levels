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

int revers_number(int number)
{
	int remainder = 0;
	int reverse = 0;

	while(number >0)
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number /= 10;
	}
	
	return reverse;
}

int main()
{

	cout << revers_number(read_positive_number("enter a positive number: ")) << endl;
}
