#include <iostream>
using namespace std;

int main()
{

	float mark1, mark2, mark3, average;

        cout << "enter mark1: ";
        cin >> mark1;
        cout << "enter mark2: ";
        cin >> mark2;
        cout << "enter mark3: ";
        cin >> mark3;

	average = (mark1 + mark2 + mark3) / 3;

	cout << "the average is: " << average << endl;

	if(average >= 50)
	{
		cout << "PASS." << endl;
	}
	else
	{
		cout << "FAIL." << endl;
	}
}
