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

st_numbers swap_numbers(st_numbers& user)
{
	int tmp;

	tmp = user.number1;
	user.number1 = user.number2;
	user.number2 = tmp;

	return user;
}

void print_numbers(st_numbers user)
{
	swap_numbers(user);

	cout << "the first number value is " << user.number1 << endl;
	cout << "the second number value is " << user.number2 << endl;
}

int main()
{
	print_numbers(read_numbers());
}

