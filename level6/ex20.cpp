#include <iostream>
using namespace std;

int ft_sum(int &number)
{
       int sum = 0;

        for(int i = 1 ; i <= 10;i++)
        {	 
 		cout << "enter a number: ";	
		cin >> number;
		if(number > 50)
		{
			cout << "this number more than 50 can't be calculated." << endl;						  break;
		}

		sum += number;
	}												         
	return sum;
}

int main()
{
       int sum, number;

        sum = ft_sum(number);
	cout << "the sum is " << sum << endl;
}
