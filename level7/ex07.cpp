#include <iostream>
using namespace std;

enum en_status {pass, fail};

short read_mark()
{
	short mark;

	cout << "enter your mark: ";
	cin >> mark;

	return mark;
}

en_status check_status(short mark)
{
	if(mark >= 50)
		return en_status::pass;
	else
		return en_status::fail;
}

void print_status(short mark)
{
	if(check_status(mark) == en_status::pass)
		cout << "you pass."<< endl;
	else
		cout << "you don't pass." << endl;
}

int main()
{
	print_status(read_mark());
}
