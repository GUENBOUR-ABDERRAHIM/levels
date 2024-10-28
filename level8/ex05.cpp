#include <iostream>
using namespace std;

struct st_info
{
	int nb;
	int power;
};

st_info read_the_info()
{
	st_info user;

	cout << "enter a number: ";
	cin >> user.nb;

	do{
	
		cout << "enter the power(it should be positive): ";
		cin >> user.power;
	}while(user.power < 0);

	return user;
}

int power(st_info user)
{
	int sum = 1;

	for(int i = user.power;i >= 1;i--)
	{
		sum *= user.nb;	
	
	}

	return sum;
}
void print_the_power()
{
	int sum = power(read_the_info());
	cout << "the power of your number is " << sum << endl;
}

int main()
{
	print_the_power();
}
