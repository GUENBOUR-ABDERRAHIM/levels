#include <iostream>
using namespace std;

int ft_power(int nb, int power)
{
	int result = 1;

	int i = power;
	while(i >= 1)
	{
		result *= nb;
	   i--;
	}
	return result;
}

int main()
{
	int number, power, result;

	cout << "enter a number: ";
	cin >> number;
	cout << "enter the power: ";
	cin >> power;

	result =  ft_power(number,power);
	cout << "the resutl is: " << result << endl;


}
