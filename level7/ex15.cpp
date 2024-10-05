#include <iostream>
#include <cmath>
using namespace std;

struct st_info
{
	int diagonal;
	int side;
};

st_info read_info()
{
	st_info user;

	cout << "enter the diagonal of your square: ";
	cin >> user.diagonal;

	cout << "enter the side of your square: ";
	cin >> user.side;

	return user;

}

float calcule_square_area(st_info user)
{
	return (float) user.side * sqrt(pow(user.diagonal,2) - pow(user.side, 2));
}

void print_the_area(st_info user)
{
	float area = calcule_square_area(user);
	cout << "the area of your square is " << area << endl; 
}

int main()
{
	print_the_area(read_info());
}
