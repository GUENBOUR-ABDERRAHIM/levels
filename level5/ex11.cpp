#include <iostream>
using namespace std;

void factorial(int nb)
{
	int result = 1;

	for(int i = nb; i >= 1; i--)
	{
		result *= i;
	}

	cout << result << endl;
}

int main()
{
	int nb;
	cout << "enter a number: ";
	cin >> nb;
	factorial(nb);






}
