#include <iostream>
using namespace std;

void array()
{
	float marks[3];

	cout << "enter the first mark: ";
	cin >> marks[0];
	cout << "enter the second mark: ";
	cin >> marks[1];
	cout << "enter the third mark: ";
	cin >> marks[2];
	cout << "**************************" << endl;
	cout << "the average of this marks is: " << (marks[0] + marks[1] + marks[2]) / 3 << endl;
}

int main()
{
	array();
}
