#include <iostream>
using namespace std;

int main()
{
	float nb1, nb2, result;
	char operation; 
	
	cout << "enter the first number: ";
	cin >> nb1;
	cout << "enter the second number: ";
	cin >> nb2;
	cout << "enter the operation: ";
	cin >> operation;

	if(operation == '+')
	{
		result = nb1 + nb2;
		cout << "the result is: " << result << endl;
	}
	else if(operation == '-')
        {
                result = nb1 - nb2;
                cout << "the result is: " << result << endl;
        }
	else if(operation == '*')
        {
                result = nb1 * nb2;
                cout << "the result is: " << result << endl;
        }
	else if(operation == '/')
        {
                result = nb1 / nb2;
                cout << "the result is: " << result << endl;
        }
}
