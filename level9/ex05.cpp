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

int calcule_sum_of_digits(int number)
{
	int remainder = 0;
	int sum = 0;

	while(number > 0)
	{
		remainder = number % 10;
		sum += remainder;
		number /= 10;
	}
	
	return sum;	
}

int main()
{
	int number = read_positive_number("enter a positive number: ");
	cout << "the sum of this digits is: ";
	cout <<  calcule_sum_of_digits(number) << endl;


}
