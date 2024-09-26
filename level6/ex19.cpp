#include <iostream>
using namespace std;

int print_nb_in_range(int from, int to)
{
	int number;

	do
	{
		cout << "enter a number between " << from << " and " << to << " : ";
		cin >> number;
	}while(number < from || number > to);
	
	return number;

}

int main()
{
	int number, from, to;
	
	cout << "enter a number: ";
	cin >> from;
	cout << "enter the second number: ";
	cin >> to;

	number = print_nb_in_range(from,to);
	cout  <<  "your number is " << number << endl;
}
