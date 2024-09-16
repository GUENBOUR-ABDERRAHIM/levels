#include <iostream>
using namespace std;

struct info
{
	string first_name;
	string last_name;
	short age;
	string phone;

};

void read_person1_info(info person[2])
{
	cout << "enter your first name: ";
	cin >> person[0].first_name;
	cout << "enter your last name: ";
	cin >> person[0].last_name;
	cout << "enter your age: ";
	cin >> person[0].age;
	cout << "enter your phone: ";
	cin >> person[0].phone;

}

void print_person1_info(info person[2])
{
	cout << "***************************************\n";
	cout << "first name is : " << person[0].first_name << endl;
	cout << "last name is : " << person[0].last_name << endl;
	cout << "age : " << person[0].age << endl;
	cout << "phone : " << person[0].phone << endl;
	cout << "***************************************\n";

}

void read_person2_info(info person[2])
{
	cout << "enter your first name: ";
	cin >> person[1].first_name;
	cout << "enter your last name: ";
	cin >> person[1].last_name;
	cout << "enter your age: ";
	cin >> person[1].age;
	cout << "enter your phone: ";
	cin >> person[1].phone;
}

void print_person2_info(info person[2])
{
	cout << "***************************************\n";
	cout << "first name : " << person[1].first_name << endl;
	cout << "last name : " << person[1].last_name << endl;
	cout << "age : " << person[1].age << endl;
	cout << "phone : " << person[1].phone << endl; 
	cout << "***************************************\n";
}

int main()
{
	info person[2];

	read_person1_info(person);
	read_person2_info(person);
	print_person1_info(person);
	print_person2_info(person);
}
