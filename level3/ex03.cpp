#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string string1;
	string string2;
	string string3;

	cout << "please enter string1 ";
	getline(cin, string1);
	cout << "please enter string2 ";
	cin >> string2;
	cout << "please enter string3 ";
	cin >> string3;
	cout << "*******************************" << endl; 
	cout << "the length of the string1 is " << string1.length() << endl;
	cout << "characters at 0,2,4,7 are " << string1[0] << ' ' << string1[2] << ' ' << string1[4] << ' ' << string1[7] << endl;
	cout << "concatenating string2 and string3 = " << (string2 + string3) << endl;
	cout << "string2 * string3 = " << (stoi(string2) + stoi(string3)) << endl;

}
