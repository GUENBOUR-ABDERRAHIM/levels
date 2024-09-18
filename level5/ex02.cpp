#include <iostream>
using namespace std;

int main()
{
	int nb1, nb2;
	char operation;

	cout << "enter the first number: ";
	cin >> nb1;
	cout << "enter the second number: ";
	cin >> nb2;
	cout << "enter the operation: ";
	cin >> operation;

	switch (operation)
	{
		case '+':
			cout << nb1 + nb2 << endl;
			break;
		case '-':
			cout << nb1 - nb2 << endl;
			break;
		case '*':
			cout << nb1 * nb2 << endl;
			break;
		case '/':
			cout << nb1 / nb2 << endl;
			break;
		default:
			cout << "the operation it is not correct.\n";
	}

}
