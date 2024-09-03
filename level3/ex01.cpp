#include <iostream>
using namespace std;

struct human 
{
	string name;
	string city;
	string country;
	unsigned short age;
	unsigned int mounthly_salary;
	unsigned int yearly_salary;
};

enum color {red = 10, yellow = -33, blue = 47};
enum status {married = 1, single = 0};

int main ()
{
	human abdo;
	color my_color;
	status my_status;

	abdo.name = "abderrahim guenbour";
	abdo.city = "bab taza";
	abdo.country = "morocco";
	abdo.age = 18;
	abdo.mounthly_salary = 5000;
	abdo.yearly_salary = abdo.mounthly_salary * 12;
	my_color = color::yellow;
	my_status = status::single;

	cout << "name: " << abdo.name << endl;
	cout << "age: " << abdo.age << endl;
	cout << "city: " << abdo.city << endl;
	cout << "country: " << abdo.country << endl;
	cout << "mounthly salary: " << abdo.mounthly_salary << endl;
	cout << "yearly salary: " << abdo.yearly_salary << endl;
	cout << "my favorite color: " << my_color << endl;
	cout << "my status: " << my_status << endl;

}
