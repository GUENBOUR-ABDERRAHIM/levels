#include <iostream>
using namespace std;

float read_hour()
{
	float hours;
	do {
		cout << "enter the number of the hours: ";
		cin >> hours;
	}while(hours < 0);

	return hours;
}

float calcule_days(float hours)
{
	return hours / 24;
}

float calcule_weeks(float days)
{
	return days / 7;
}

void print_weeks_and_days(float days,float weeks)
{
	cout << "the number of the days is: " << days << endl;
	cout << "tne number of the weeks is: " << weeks << endl;
}

int main()
{
	float hours = read_hour();
	 print_weeks_and_days(calcule_days(hours),calcule_weeks(calcule_days(hours)));
}
