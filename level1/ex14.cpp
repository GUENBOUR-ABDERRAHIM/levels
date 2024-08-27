#include <iostream>
using namespace std;

int main ()
{
	unsigned short min;
	unsigned short sec;
	unsigned short hour;
	unsigned short day;
	int seconds;
	cout << "enter how much days: ";
	cin >> day;
	cout << "enter how much hours: ";
	cin >> hour;
	cout << "enter how much minuts: ";
	cin >> min;
	cout << "enter how much seconds: ";
	cin >> sec;

	 seconds = sec + (min * 60) + (hour * 60 * 60) + (day * 60 * 60 * 24);

	cout << "the total of seconds is " << seconds << " second." << endl;


}
