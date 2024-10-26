#include <iostream>
#include <cmath>
using namespace std;

struct st_info
{
	int side_a;
	int side_b;
	int side_c;
	const float PI = 3.14159;
};

st_info read_info()
{
	st_info user;

	cout << "enter the side a: ";
	cin >> user.side_a;
	cout << "enter the side b: ";
	cin >> user.side_b;
	cout << "enter the side c: ";
	cin >> user.side_c;

	return user;
}

float calcule_circle_area(st_info user)
{
	float p = (user.side_a + user.side_b + user.side_c) / 2;

	float area = (float) user.PI * pow((user.side_a * user.side_b * user.side_c) / (4 * sqrt(p * (p - user.side_a) * (p - user.side_b) * (p - user.side_c))),2);	

	return area;
}

void print_circle_area(float area)
{
	cout << "the area of your circle is " << area << endl;
}
int main()
{
	print_circle_area(calcule_circle_area(read_info()));
}
