#include <iostream>
using namespace std;

void read_info(int& a,int& b)
{

	cout << "enter your rectangle length: ";
	cin >> a;

	cout << "enter your rectangle width: ";
	cin >> b;
}

int calcule_area(int& a,int& b)
{
	return a * b;
}

void print_area(int a,int b)
{ 
	cout << "your rectangle area is " << calcule_area(a,b) << endl;
}

int main()
{
	int a, b;
	read_info(a,b);
	print_area(a,b);	
}
