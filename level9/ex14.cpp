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

void print_letter_pattern(int number)
{
	number += 64;
	for (int j = 65; j <= number;j++)
	{
		for (int i = 65;i <= j;i++)
		{
			cout << (char)j;
		}
		cout << endl;
	}
}

int main()
{
	print_letter_pattern(read_positive_number("enter a positive number: "));

}
