#include <iostream>
using namespace std;

int read_int_nb_in_range(int from, int to)
{
	int number;

	cout << "enter a number between " << from << " and " << to << " : " ;
	cin >> number;

	while(number < from || number > to)
	{
		cout << "wrong number try again, " << "enter a number between " << from << " and " << to << " : ";
		cin >> number;
	}
	return (number);
}

int main()
{
	cout << "your number is " << read_int_nb_in_range(1,100) << endl;
	return 0;
}

