#include <iostream>
using namespace std;

enum en_admission_requirements { yes, no};

short read_age()
{
	short age;

	cout << "enter your age: ";
	cin >> age;

	return age;
}

bool read_driver_license()
{
	bool driver_license;

	cout << "you have driver license 'yes = 1' or 'no = 0' ";
	cin >> driver_license;

	return driver_license;

}

en_admission_requirements check_requirements(short age, bool driver_license)
{
	if(age >= 18 && age <= 45 && driver_license == true)
		return en_admission_requirements::yes;
	else
		return en_admission_requirements::no;
}
void print_status(en_admission_requirements admission_requirements)
{
	if(admission_requirements == en_admission_requirements::yes)
		cout << "you are hired." << endl;
	else
		cout << "you are rejected." << endl;
}

int main()
{
	print_status(check_requirements(read_age(),read_driver_license()));
}
