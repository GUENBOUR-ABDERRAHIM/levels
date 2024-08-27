#include <iostream>
using namespace std;

int main ()
{
	short cashpaid;
	short totalbill;
	float remainder;

	cout<< "enter the cashpaid: ";
	cin >> cashpaid;
	cout << "enter the totalbill: ";
	cin >> totalbill;

	remainder = totalbill - cashpaid;
	cout << "your remainder is: " << remainder << endl;
	 
	



}
