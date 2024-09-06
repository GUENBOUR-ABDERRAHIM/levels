#include <iostream>
using namespace std;

void swap()
{
	int a, b, c;

	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;

	c = a;
	a = b;
	b = c;
	cout <<"a = " << a << endl;
	cout << "b = " << b << endl; 
}

int main()
{
	swap();
}
