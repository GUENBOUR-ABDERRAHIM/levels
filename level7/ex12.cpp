#include <iostream>
using namespace std;

enum en_numbers {number1, number2, number3};

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

en_numbers check_the_max(st_numbers user)
{
        if(user.number1 > user.number2 && user.number1 > user.number3)
		return en_numbers::number1;
	else if(user.number2 > user.number1 && user.number2 > user.number3)
		return en_numbers::number2;
	else
		return en_numbers::number3;
}

void print_the_max(st_numbers user)
{
        if(check_the_max(user) == en_numbers::number1)
                cout << "the max number is " << user.number1 << endl;
        else if(check_the_max(user) == en_numbers::number2)
                cout << "the max number is " << user.number2 << endl;
	else
		cout << "the max number is " << user.number3 << endl;
}

int main()
{
        print_the_max(read_numbers());
}
