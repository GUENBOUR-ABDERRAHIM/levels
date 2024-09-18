#include <iostream>
using namespace std;

void sum_odd(int nb)
{
	int result = 0;

	for(int i = 1; i <= nb;i += 2)
	{
		result += i;
	}
	cout << result << endl;
}

int main()
{
	int nb;
	cout << "enter a number: ";
	cin >> nb;
	sum_odd(nb);

}
