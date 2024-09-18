#include <iostream>
using namespace std;

void read(int &nb, int &power)
{
	cout << "enter the number: ";
	cin >> nb;
	cout << "enter the power: ";
	cin >> power;
}

int ft_power(int nb,int power)
{
	int result = 1;

	for (int i = power; i >= 1 ; i--)
	{
		result *= nb;
	}

	return (result);
}

int main()
{
	int nb, power;

	read(nb,power);

	cout << ft_power(nb,power) << endl;



}
