#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float min;
	float sec;
	float hour;
	float  day;
	float seconds;

	cout << "enter how much days: ";
	cin >> day;
	cout << "enter how much hours: ";
	cin >> hour;
	cout << "enter how much minuts: ";
	cin >> min;
	cout << "enter how much seconds: ";
	cin >> sec;

	 seconds = sec + (min * 60) + (hour * 60 * 60) + (day * 60 * 60 * 24);

	cout << "the total of seconds is " << round(seconds) << " second." << endl;


}
