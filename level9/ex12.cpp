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

void print_inverted_pattern(int number)
{
	for (int j = 1; j <= number;j++)
	{
		for(int i = 1; i <= j;i++)
		{
			cout << j;
		}

		cout << endl;
	}
}

int main()
{
	print_inverted_pattern(read_positive_number("enter a positive number: "));
}
