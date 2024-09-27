#include <iostream>
#include <string>
using namespace std;

int read_number()
{
	int number;

	cout << "enter a number: ";
	cin >> number;

	return number;
}

float calcule_half_of_number(int number)
{
	return (float)number / 2;
}

void print_hulf_of_number(int number)
{
	string result = "the halt of " + to_string(number) + " is " + to_string(calcule_half_of_number(number));

	cout << result << endl;
}

int main()
{
	print_hulf_of_number(read_number());
}
