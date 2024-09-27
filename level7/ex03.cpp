#include <iostream>
using namespace std;

struct st_requirements
{
	short age;
	bool driver_license;
	bool has_recommendation;
};

st_requirements read_requirements()
{
	st_requirements user;

	cout << "enter your age: ";
	cin >> user.age;

	cout << "do you have a driver license? ";
	cin >> user.driver_license;

	cout << "do you have a recommendation? ";
	cin >> user.has_recommendation;
		
		return user;
}

bool accepted(st_requirements user)
{
	return(user.age >= 18 && user.age <= 45 && user.driver_license == true || user.has_recommendation == true);
}

void print_status(st_requirements user)
{
	if(accepted(user))
		cout << "you are hired.\n";
	else 
		cout << "you are rejected.\n";
}

int main()
{
	print_status(read_requirements());
}
