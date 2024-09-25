#include <iostream>
using namespace std;

int sum_of_numbers(int &number)
{
	int sum = 0;

	while(number != -99)
	{
		sum += number;
		cout << "enter a number: ";
		cin >> number;
	}
	
	return sum;

}
int main()
{	
	int number, sum;

	cout << "enter a number: ";
	cin >> number;
	
	sum = sum_of_numbers(number);
	cout << "the sum of this numbers is: " << sum << endl;


}
