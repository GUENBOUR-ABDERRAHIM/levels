#include <iostream>
using namespace std;

struct st_info
{
	float seconds, minutes, hours, days;
};

st_info read_number()
{
	st_info user;

	cout << "enter the seconds: ";
	cin >> user.seconds;
	cout << "enter the minutes: ";
	cin >> user.minutes;
	cout << "enter the hours: ";
	cin >> user.hours;
	cout << "enter the days: ";
	cin >> user.days;

	return user;
}

float calcule_the_seconds(st_info user)
{
	return (user.seconds + user.minutes * 60 + user.hours * 3600 + user.days * 3600 * 24);	
}

void print_the_seconds(float seconds)
{
	cout << "the sum of the seconds is " << seconds << endl;
}

int main()
{
	print_the_seconds(calcule_the_seconds( read_number()));

}
