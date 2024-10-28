#include <iostream>
#include <string>
using namespace std;

int read_number(string message)
{
	int number;
	cout << message;
	cin >> number;

	return number;
}

int sum_numbers()
{
	int sum = 0, counter = 1, number = 0;
	
	do {
		number = read_number("enter the  number " + to_string(counter) + " : ");
		if(number == -99)
			break;
		sum += number;
		counter++;
	}while(number != -99);

	return sum;
}

void print_sum()
{
	int sum = sum_numbers();
	cout << "the sum of the numbers is " << sum << endl;
}


int main ()
{
	print_sum();
}
