#include <iostream>
using namespace std;

int a = 1000;


void function()
{
	int a = 100;
	cout << a << endl;
	::a += 100;
}

int main ()
{
	int a = 200;
	function();
	cout << ::a << endl;
	cout  << a << endl;
	

}
