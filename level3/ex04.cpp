#include <iostream>
using namespace std;

void print_card()
{
	string myname = "abderrahim guenbour.";
	short myage = 44;
	string mycity = "bab taza.";
	string mycountry = "morocco";
	short mysalary = 9000;
	unsigned char mygender = 'M';
	bool married = true;

	cout << "*******************************" << endl;
	cout << "Name: " << myname << endl;
	cout << "Age: " << myage << " Years old." << endl;
	cout << "City: " << mycity << endl;
	cout << "Monthly Salary: " << mysalary << endl;
	cout << "Yearly Salary: " << mysalary * 12 << endl;
	cout << "Gender: "<< mygender << endl;
	cout << "Married: " << married << endl;
	cout << "*******************************" << endl;
}

int main ()
{
	print_card();
}
