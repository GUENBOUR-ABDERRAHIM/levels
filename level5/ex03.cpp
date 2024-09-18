#include <iostream>
using namespace std;

int main()
{
	short day;

	cout << "enter a sumber from 1 to 7: ";
	cin >> day;

	switch (day)
	{
		case 1:
			cout << "sunday.\n";
			break;		
		case 2:
			cout << "monday.\n";
			break;
		case 3:
			cout << "tuesday.\n";
			break;
		case 4:
			cout << "wednesday.\n";
			break;
		case 5:
			cout << "thursday.\n";
			break;
		case 6:
			cout << "friday.\n";
			break;
		case 7:
			cout << "saturday.\n";
			break;
		default:
			cout << "wrong day.\n";
	}
}
