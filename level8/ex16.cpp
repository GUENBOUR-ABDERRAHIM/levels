#include <iostream>
using namespace std;

struct st_info
{
	float seconds, minutes, hours, days;
};

int read_positive_number(string message)
{
	int number;
	do {
		cout << message << endl;
		cin >> number;
	}while(number < 0);

	return number;
}

int number_of_seconds()
{
	int seconds = read_positive_number("enter the number of the seconds: ");

	return seconds;
}

st_info calcule_days_mins_secs_hours(int seconds)
{
	st_info user;
	int remainder;

	user.days = seconds / (3600 * 24);
	remainder = seconds % (3600 * 24);
	user.hours = remainder / 3600;
	remainder = remainder % 3600;
	user.minutes = remainder / 60;
	user.seconds = remainder % 60;
	
	return user;
}

void print_days_mins_secs_hours(st_info user)
{
	cout << "the number of the days is " << user.days << endl;
	cout << "the number of the hours is " << user.hours << endl;
	cout << "the number of the minutes is " << user.minutes << endl;
	cout << "the number of the seconds is " << user.seconds << endl;
}

int main()
{
	print_days_mins_secs_hours(calcule_days_mins_secs_hours(number_of_seconds()));
}
