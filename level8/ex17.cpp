#include <iostream>
using namespace std;

short read_positive_number(string message)
{
	short number;

	do {
		cout << message << endl;
		cin >> number;
	}while(number < 0);

	return number;
}

string days_of_week(short number)
{
	switch(number)
	{
		case 1: return "sunday";
		case 2: return "monday";
		case 3: return "tuesday";
		case 4: return "wednesday";
		case 5: return "thursday";
		case 6: return "friday";
		case 7: return "saturday";
		default:
			return "wrogn day";
	}
}

void print_day()
{
	string day = days_of_week(read_positive_number("a number between 1 and 7: "));
	cout << day << endl;
}

int main()
{
	print_day();
}
