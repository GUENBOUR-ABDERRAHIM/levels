#include <iostream>
using namespace std;

struct st_info
{
	string first_name;
	string last_name;
};

st_info read_info()
{
	st_info user;

	cout << "enter your first name: ";
	cin >> user.first_name;

	cout << "enter your last name: ";
	cin >> user.last_name;
	
	return user;
}

string full_name(st_info user)
{
	string full_name;

	full_name = user.first_name + " " + user.last_name;

	return full_name;
}

void print_info(string full_name)
{
	cout << "your name is " << full_name << endl;
}

int main()
{
	print_info(full_name(read_info()));
}
