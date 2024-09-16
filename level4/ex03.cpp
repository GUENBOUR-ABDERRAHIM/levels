#include <iostream>
using namespace std;

struct strinfo
{
	string full_name;
	short age;
	string city;
	string country;
	int monthly_salary;
	int yearly_salary;
	char gender;
	bool married;
};

void read_info(strinfo &person)
{
	cout << "enter your full name: ";
	getline(cin , person.full_name);
	cout << "enter your age: ";
	cin >> person.age;
	cout << "enter your city: ";
	cin.ignore(1, '\n');
	getline(cin, person.city);
	cout << "enter your country: ";
	cin >> person.country;
	cout << "enter your monthly salary: ";
	cin >> person.monthly_salary;
	person.yearly_salary = person.monthly_salary * 12;
	cout << "enter your gender: " ;
	cin >> person.gender;
	cout << "enter your society status: ";
	cin >> person.married;
}

void print_info(strinfo person)
{
	cout << "****************************" << endl;
	cout << "name: " << person.full_name << endl;
	cout << "age: " << person.age << " years" << endl;
	cout << "city: " << person.city << endl;
	cout << "country: " << person.country << endl;
	cout << "monthly salary: " << person.monthly_salary << endl;
	cout << "yearly salary: " << person.yearly_salary << endl;
	cout << "gender: " << person.gender << endl;
	cout << "married: " << person.married << endl;
	cout << "****************************" << endl;
}
int main()
{
	strinfo abdo;
	read_info(abdo);
	print_info(abdo);
}
