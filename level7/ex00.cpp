#include <iostream>
using namespace std;

string read_name()
{
	string name;

	cout << "enter your name: ";
	getline(cin, name);

	return name;
}

void print_name(string name)
{
	cout << "your name is: " << name << endl;
}

int main()
{
	print_name(read_name());
}
