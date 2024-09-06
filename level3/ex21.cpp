#include <iostream>
using namespace std;

int seconds_counter(int days,int hours,int mins,int secs)
{
	int seconds ;
	
	seconds = (days * 60 * 60 * 24) + (hours * 60 * 60) + (mins * 60) + secs;

	return (seconds);
}

int main()
{
	cout << seconds_counter(2,5,45,35) << endl;
}
