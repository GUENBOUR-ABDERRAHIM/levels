#include <iostream>
using namespace std;

struct st_info
{
	float nb1, nb2;
	char operation;
};

st_info read_info()
{
	st_info user;

	cout << "enter the first number: ";
	cin >> user.nb1;
	cout << "enter the secon number: ";
	cin >> user.nb2;

	do {
		cout << "enter the operation(+,-,*,/): ";
		cin >> user.operation;
	}while(user.operation != '-' && user.operation != '+' && user.operation != '*' && user.operation != '/');
	return user;
}

float calcule_the_numbers(st_info user)
{
	if(user.operation == '-')
		return user.nb1 - user.nb2;
	else if (user.operation == '+')
		return user.nb1 + user.nb2;
	else if (user.operation == '*')
		return user.nb1 * user.nb2;
	else
		return user.nb1 / user.nb2;
}

void print_the_result()
{
	float result = calcule_the_numbers(read_info());
	cout << "the result is " << result << endl;
}

int main()
{
	 print_the_result();
}
