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

int digit_frequency(int number,int digit)
{
	int remainder = 0;
	int frequency = 0;

	while(number > 0)
	{
		remainder = number % 10;
		
		if(remainder == digit)
			frequency++;
		number /= 10;
	}

	return frequency;
}

int main()
{
	int number = read_positive_number("enter the number: ");
	int digit = read_positive_number("enter the digit: ");
	cout << "digit " << digit << " frequency is " << digit_frequency(number,digit) << " time(s) \n";

}
