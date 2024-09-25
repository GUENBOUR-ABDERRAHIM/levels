#include <iostream>
using namespace std;

void print_number(int number)
{
	int i = 1; 
	while(i <= number)
	{
		cout << i << endl;
		i++;
	}

}

int main()
{
	int number;
	cout << "enter a number: ";
	cin >> number;

	print_number(number);
}

