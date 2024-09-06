#include <iostream>
using namespace std;

void seconds_changer(int seconds)
{
	int days, hours, mins, secs, remainer;

	days = seconds / (60 * 60 * 24);
	remainer = seconds % (60 * 60 * 24);
	hours = remainer / (60 * 60);
	remainer = remainer % (60 * 60);
	mins = remainer / 60;
	remainer %= 60;
	secs = remainer;

	cout << days << ':' << hours << ':' << mins << ':' << secs << endl;
	
}

int main()
{
	seconds_changer(193535);
}
