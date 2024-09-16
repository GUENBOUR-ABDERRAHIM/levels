#include <iostream>
using namespace std;

int main()
{
	short nb;

	cout << "enter a number between 1 and 7: ";
	cin >> nb;

	if(nb == 1)
	{
		cout << "sunday." << endl;
	}
	else if(nb == 2)
        {
                cout << "monday." << endl;
        }
	else if(nb == 3)
        {
                cout << "tuesday." << endl;
        }
	else if(nb == 4)
        {
                cout << "wednesday." << endl;
        }
	else if(nb == 5)
        {
                cout << "thursday." << endl;
        }
	else if(nb == 6)
        {
                cout << "friday." << endl;
        }
	else if(nb == 7)
        {
                cout << "saturday." << endl;
        }
	else
	{
		cout << "wrong day." << endl;
	}
}
