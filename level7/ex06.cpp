#include <iostream>
using namespace std;

short read_mark()
{
	short mark;

	cout << "inter your mark: ";
	cin >> mark;

	return mark;
}

bool pass(short mark)
{
	return (mark >= 50);
}

void print_status(short mark)
{
	if(pass(mark))
		cout << "you pass the exam." << endl;
	else
		cout << "you dont pass the exam." << endl;
}

int main()
{
	print_status(read_mark());
}
