#include <iostream>
using namespace std;

int main()
{
	short nb;

        cout << "enter a number between 1 and 12: ";
        cin >> nb;

        if(nb == 1)
        {
                cout << "january." << endl;
        }
        else if(nb == 2)
        {
                cout << "february." << endl;
        }
        else if(nb == 3)
        {
                cout << "march." << endl;
        }
        else if(nb == 4)
        {
                cout << "april." << endl;
        }
        else if(nb == 5)
        {
                cout << "may." << endl;
        }
        else if(nb == 6)
        {
                cout << "june." << endl;
        }
        else if(nb == 7)
        {
                cout << "july." << endl;
        }
	else if(nb == 8)
        {
                cout << "august." << endl;
        }
        else if(nb == 9)
        {
                cout << "september." << endl;
        }
        else if(nb == 10)
        {
                cout << "october." << endl;
        }
        else if(nb == 11)
        {
                cout << "november." << endl;
        }
        else if(nb == 12)
        {
                cout << "december." << endl;
        }
	else 
	{
		cout << "wrong month." << endl;
	}
}
