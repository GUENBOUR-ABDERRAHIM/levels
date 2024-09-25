#include <iostream>
using namespace std;

void print_the_numbers_in_reverse(int number)
{
	int i = number;
	while(i >= 1)
	{
		cout << i << endl;
		i--;
	}
}

int main()
{
	int number;

	cout << "enter a number: ";
	cin >> number;

	print_the_numbers_in_reverse(number);
}
