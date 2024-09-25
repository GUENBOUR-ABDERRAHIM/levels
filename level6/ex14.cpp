#include <iostream>
using namespace std;

int factorial(int &number)
{
	int sum = 1;

	while(number < 0)
	{
		cout << "enter a positive number: ";
		cin >> number;
	}

	int i = number;
	while(i >= 1)
	{
		sum *= i;
	   i--;
	}
	return sum;
}

int main()
{
	int number,sum;

	cout << "enter a number: ";
	cin >> number;

	sum = factorial(number);
	cout << "the factorial of your number is: " << sum << endl;

}
