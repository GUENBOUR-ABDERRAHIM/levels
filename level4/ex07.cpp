#include <iostream>
using namespace std;

int main ()
{
	short age;
	bool license;

	cout << "enter your age: ";
	cin >> age;
	cout << "do you have a driver license: ";
	cin >> license;

	if(age >= 21 && license == 1)
	{
		cout << "YOU ARE HIRED." << endl;
	}
	else
	{
		cout << "YOU ARE REJECTED." << endl;
	}
}
