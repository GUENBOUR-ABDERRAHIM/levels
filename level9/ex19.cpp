#include <iostream>
#include <cstdlib>
using namespace std;

enum  en_type {small_letter, capital_letter,special_character,digit};

int read_number(string message)
{
	int number;
	do {
		cout << message;
		cin >> number;

	}while(number < 0 || number > 3);

	return number;
}

en_type change_int_to_enum(int number)
{
	switch (number)
	{
		case 0:
			return en_type::small_letter;
		case 1:
			return en_type::capital_letter;
		case 2:
			return en_type::special_character;
		default:
			return en_type::digit;
	}
}

int reandom_number(int from,int to)
{
	return rand() % (to - from + 1) + from;
}

char random_types(en_type type)
{
	switch (type)
	{
		case en_type::digit:
			return (char)reandom_number(48,57);
		case en_type::small_letter:
			return (char)reandom_number(97,122);
		case en_type::capital_letter:	
			return (char)reandom_number(65,90);
		default:
			return (char)reandom_number(33,47);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << random_types(change_int_to_enum(read_number("'0' for random small character\n'1' for random capital character\n'2' for random special characters\n'3' for random digits \n enter a number: " ))) << endl;
}
