#include <iostream>
using namespace std;

int main ()
{
	string name;
	short age;
	string city;
	string country;
	short salary;
	unsigned char gender;
	bool married;
	
	cout << "enter your name: ";
	getline(cin, name);
	cout << "enter your age: ";
	cin >> age;
	cout << "enter your city: ";
	cin >> city;
	cout << "enter your country: ";
	cin >> country;
	cout << "enter your salary: ";
	cin >> salary;
	cout << "enter your gender 'M' or 'F': ";
	cin >> gender;
	cout << "are you married yes = 1 or no = 0: ";
	cin >> married;
	cout << endl;

	cout << "*******************************" << endl;
	cout << "Name: " << name << endl;
	cout << "age: " << age << "years." << endl;
	cout << "city: " << city << endl;
	cout << "country: " << country << endl;
	cout << "Monthly Salary: " << salary << endl;
	cout << "Yearly salary: " << salary * 12 << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << married << endl;
	cout << "*******************************" << endl;

	return 0;
}
