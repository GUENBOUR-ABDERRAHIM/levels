#include <iostream>
using namespace std;

int main()
{
	short age;

	cout << "enter your age: ";
	cin >> age;

	if(age >= 18 && age <= 45)
	{
		cout << "VALIDE AGE." << endl;
	}
	else
	{
		cout << "INVALIDE AGE." << endl;
	}
}
