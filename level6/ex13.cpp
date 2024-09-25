#include <iostream>
using namespace std;

int sum_of_even_numbers(int number)
{
	int sum = 0;

	int i = 1;
	while(i <= number)
	{
		if(i % 2 == 0)
		{
			sum += i;
		}
	    i++;
	}
	return sum;
}

int main()
{
	int number, sum;

	cout << "enter a number: " << endl;
	cin >> number;

	sum = sum_of_even_numbers(number);
	cout << "the sum of the even numbers until your number is: " << sum << endl;

}
