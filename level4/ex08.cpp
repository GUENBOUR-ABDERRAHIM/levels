#include <iostream>
using namespace std;

int main()
{
	float mark;

	cout << "enter your mark: ";
	cin >> mark;

	if(mark >= 50)
	{
		cout << "PASS." << endl;
	}
	else
	{
		cout << "FAIL." << endl;
	}
}
