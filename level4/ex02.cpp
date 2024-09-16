#include <iostream>
using namespace std;

struct human
{
	string first_name;
	string last_name;
	short age;
	string phone_number;
};

void read(human &abdo)
{
	cout << "enter your first name: " << endl;
	cin >> abdo.first_name;
	cout << "enter your last name: " << endl;
	cin >> abdo.last_name;
	cout << "enter your age: " << endl;
	cin >> abdo.age;
	cout << "enter your phone_number: " << endl;
	cin >> abdo.phone_number;
}

void print(human abdo)
{
	cout << "**************************" << endl << endl;
	cout << abdo.first_name << endl;
	cout << abdo.last_name << endl;
	cout << abdo.age << endl;
	cout << abdo.phone_number << endl << endl;
	cout << "**************************" << endl;
}

int main ()
{
	human ana;
	read(ana);
	print(ana);
}
