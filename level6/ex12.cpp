#include <iostream>
using namespace std;

int sum_of_odd_numbers(int number)
{
	int sum = 0;

	int i = 1;
	while(i <= number)
	{
		if(i % 2 != 0)
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

	cout << "enter a number: ";
	cin >> number;
	
	sum = sum_of_odd_numbers(number);
	cout << "the sum of odd numbers until the number is: " << sum << endl;

}
