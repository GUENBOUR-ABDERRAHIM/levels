#include <iostream>
#include <cmath>
using namespace std;

struct st_info
{
	int radius;
	const float PI = 3.14159;
};

st_info read_info()
{
	st_info user;

	cout << "enter your circle radius: ";
	cin >> user.radius;

	return user;
}

float calcule_circle_area(st_info user)
{
	return (float)user.PI * pow(user.radius, 2);
}

void print_circle_area(float area)
{
	cout << "the area of your circle is: " << area << endl;
}
int main()
{
	print_circle_area(calcule_circle_area(read_info()));
}
