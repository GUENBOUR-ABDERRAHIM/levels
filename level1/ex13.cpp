#include <iostream>
using namespace std;

int main ()
{
	float total;
	float servicefee;
	float all;

	cout << "enter your totallbill: ";
	cin >> total;

	servicefee = total * 1.1;
	
	all = servicefee * 1.16;
	cout << "the totalbill after taxes and service fee: " << all << endl;
		

}
