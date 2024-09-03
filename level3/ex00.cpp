#include <iostream>
using namespace std;

struct social_media
{
	string email;
	string facebook;
	string instagram;
	string twitter_user_name;
};

struct human_adress
{
	string street;
	string call_number;
	social_media social;
};

struct human
{
	string name;
	unsigned short age;
	string city;
	string country ;
	unsigned int mounthly_salary;
	unsigned int yearly_salary;
	bool married ;
	char gender;  
	human_adress adress;
};

int main ()
{
	human abdo;

	abdo.name = "abderrahim guenbour";
	abdo.age = 44;
	abdo.city = "bab taza";
	abdo.country = "morocco";
	abdo.mounthly_salary = 5000;
	abdo.yearly_salary = abdo.mounthly_salary * 12;
	abdo.gender = 'M';
	abdo.married = true;
	abdo.adress.street = "center 323";
	abdo.adress.call_number = "0754376348";
	abdo.adress.social.email = "abdogembour2001@gmail.com";
	abdo.adress.social.facebook = "abdoguenm_";
	abdo.adress.social.instagram = "abdoguenm_";
	abdo.adress.social.twitter_user_name = "@abdoguenm_";

	cout << "*******************************" << endl;
	cout << "name: " << abdo.name << endl;
	cout << "age: " << abdo.age << endl;
	cout << "country: " << abdo.country << endl;
	cout << "city: " << abdo.city << endl;
	cout << "mounthly salary: " << abdo.mounthly_salary << endl;
	cout << "yearly salary: " << abdo.yearly_salary << endl;
	cout << "gender: " << abdo.gender << endl;
	cout << "married: " << abdo.married << endl;
	cout << "street: " << abdo.adress.street << endl;
	cout << "call number: " << abdo.adress.call_number << endl;
	cout << "email: " << abdo.adress.social.email << endl;
	cout << "facebook: " << abdo.adress.social.facebook << endl;
	cout << "instagram: " << abdo.adress.social.instagram << endl;
	cout << "twitter user name: " << abdo.adress.social.twitter_user_name << endl;



	cout << "*******************************" << endl;
}
