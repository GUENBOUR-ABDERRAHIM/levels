#include <iostream>
using namespace std;

struct st_numbers
{
	int number1;
	int number2;
	int number3;
};

st_numbers read_numbers()
{
	st_numbers user;

	cout << "enter the first number: ";
	cin >> user.number1;

	cout << "enter the second number: ";
	cin >> user.number2;

	cout << "enter the third number: ";
	cin >> user.number3;

	return user;
}

int calcule_numbers_sum(st_numbers user)
{
	return (user.number1 + user.number2 + user.number3);
}

void print_sum_of_numbers(int sum)
{
	cout << "the sum of your numbers is " << sum << endl;
}

int main()
{
	print_sum_of_numbers(calcule_numbers_sum(read_numbers()));
}
