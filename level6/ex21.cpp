#include <iostream>
using namespace std;

int ft_sum(int &number)
{
	int sum = 0;

	for(int i = 1; i <= 10;i++)
	{
		cout << "enter " << i << " number less than 50: ";
		cin >> number;

		if(number > 50)
		{
			cout << "this number more the 50 can't be calculated. \n";
			i--;
			continue;
		
		}

		sum += number;
	
	}
	return sum;

}

int main()
{
	int number, sum;

	sum = ft_sum(number);
	cout << "the sum is " << sum << endl;

}
