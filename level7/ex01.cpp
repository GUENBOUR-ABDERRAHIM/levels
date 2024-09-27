#include <iostream>
using namespace std;

enum en_number_type {even, odd};

int read_number()
{
	int number;

	cout << "enter a number: ";
	cin >> number;

	return number;
}

en_number_type check_number_type(int number)
{
	if(number % 2 == 0)
		return en_number_type::even;
	else
		return en_number_type::odd;

}

void print_number_type(en_number_type type)
{
	if(type == en_number_type::even)
		cout << "this number is even. " << endl;
	else
		cout << "this numberis odd. " << endl;
}

int main()
{
	print_number_type(check_number_type(read_number()));
}
