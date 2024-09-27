#include <iostream>
using namespace std;

struct st_numbers
{
	int number1;
	int number2;
};

st_numbers read_numbers()
{
	st_numbers user;

	cout << "enter the first number: ";
	cin >> user.number1;
	
	cout << "enter the second number: ";
	cin >> user.number2;

	return user;
}

bool check_the_max(st_numbers user)
{
	return (user.number1 > user.number2);
}

void print_the_max(st_numbers user)
{
	if(check_the_max(user))
		cout << "the max number is " << user.number1 << endl;
	else
		cout << "the max number is " << user.number2 << endl;
}

int main()
{
	print_the_max(read_numbers());
}
