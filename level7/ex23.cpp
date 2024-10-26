::nclude <iostream>
using namespace std;

short read_age()
{
	short age;

	cout << "enter your age and it shold be between 18 and 45: ";
	cin >> age;

	return age;
}

bool check_age(short age)
{
	return (age >= 18 && age <= 45);
}

short until_number_between()
{
	short age = 0;
	do{
		age = read_age();

	}while(!check_age(age));

	return age;

}

void print_status(short age)
{
		cout << "your age is valid " << age << endl;
}

int main()
{	
	print_status(until_number_between());
}
