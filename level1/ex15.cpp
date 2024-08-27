#include <iostream>
using namespace std;

int main ()
{
	int seconds;
	int day;
	int hour;
	int min;
	int remaine; 
	int sec;

	cout << "enter the total of the seconds: ";
	cin >> seconds;

	day = seconds / (60 * 60 * 24);
	remaine = seconds % (60 * 60 * 24);
	hour = remaine / (60 * 60);
	remaine %= (60 * 60);
	min = remaine / 60;
	remaine %= 60; 
	sec = remaine;  

	cout << "the days: " << day << " the hours: " << hour << " the minuts: " << min << " the seconds: " << sec << endl;


}
