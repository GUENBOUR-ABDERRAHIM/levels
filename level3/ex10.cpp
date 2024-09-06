#include <iostream>
using namespace std;

void print()
{
	string name;

	cout << "enter your name: ";
	getline(cin, name);
	cout << name << endl;
}

int main ()
{
	print();
}
