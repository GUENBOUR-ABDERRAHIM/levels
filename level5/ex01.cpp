#include <iostream>
using namespace std;

enum encountrys_name {morocco = 1, spain = 2, france = 3, tunisia = 4, algeria = 5, egypt = 6, other = 7};

int main()
{
	int c;

	cout << "what is your country:\n\n";
	cout << "(1) morocco\n";
	cout << "(2) spain\n";
	cout << "(3) france\n";
	cout << "(4) tunisia\n";
	cout << "(5) algeria\n";
	cout << "(6) egypt\n";
	cout << "(7) other\n\n";
	cout << "choose a number: ";
	cin >> c;

	encountrys_name country;

	country = (encountrys_name)c;

	if(country == encountrys_name::morocco)
	{
		cout << "you are from morocco.\n";
	}
	else if(country == encountrys_name::spain)
        {
                cout << "you are from spain.\n";
        }
	else if(country == encountrys_name::france)
        {
                cout << "you are from france.\n";
        }
	else if(country == encountrys_name::tunisia)
        {
                cout << "you are from tunisia.\n";
        }
	else if(country == encountrys_name::algeria)
        {
                cout << "you are from algeria.\n";
        }
	else if(country == encountrys_name::egypt)
        {
                cout << "you are from egypt.\n";
        }
	else if(country == encountrys_name::other)
        {
                cout << "your country it is not in this list.\n";
        }
}
