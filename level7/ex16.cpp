#include <iostream>
using namespace std;

struct st_info
{
	int base;
	int height;

};

st_info read_info()
{
	st_info user;

	cout << "enter the base of your rigtangle: ";
	cin >>user.base;
	cout << "enter the height of your rigtangle: ";
	cin >> user.height;

	return user;	
}

float calcule_rigtangle_area(st_info user)
{
	return (float)(user.base / 2) * user.height;
}

void print_the_area(float area)
{
	cout << "the area of your rigtangle is " << area << endl;
}

int main()
{
	print_the_area(calcule_rigtangle_area(read_info()));
}
