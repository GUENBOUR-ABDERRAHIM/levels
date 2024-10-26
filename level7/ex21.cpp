#include <iostream>
#include <cmath>
using namespace std;

struct st_info
{
	float triangle_leg;
	float triangle_base;
	const float PI = 3.14159;
};

st_info read_info()
{
	st_info user;

	cout << "enter the leg of the isosceles triangle: ";
	cin >> user.triangle_leg;
	cout << "enter the base of the isosceles triangle: ";
	cin >> user.triangle_base;

	return user;
}

float calcule_the_area(st_info user)
{
	float area = ((user.PI * pow(user.triangle_base,2))/4) * ((2 * user.triangle_leg - user.triangle_base) / (2 * user.triangle_leg + user.triangle_base));
	
	return area;
}

void print_the_area(float area)
{
	cout << "the circle area inscribed in an isosceles triangle is " << area << endl;

}

int main()
{
	print_the_area(calcule_the_area(read_info()));
}
