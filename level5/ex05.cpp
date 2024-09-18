#include <iostream>
using namespace std;

enum enweekdays {sun = 1, mon= 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

void week_days_menu()
{
	cout << "***********************\n";
	cout << "       week days\n";
	cout << "***********************\n\n";
	cout << "(1) sunday.\n";
	cout << "(2) monday.\n";
	cout << "(3) tuesday.\n";
	cout << "(4) wednesday.\n";
	cout << "(5) thursday.\n";
	cout << "(6) friday.\n";
	cout << "(7) saturday.\n";
	cout << "***********************\n\n";
	cout << "enter a number: ";
}

enweekdays read_the_number()
{

	enweekdays day;
	int c;
	cin >> c;
	day = (enweekdays)c;
	return(day);
}

string print_the_day(enweekdays day)
{

	switch(day)
	{
		case enweekdays::sun:
			return "sunday.\n";
			break;
		case enweekdays::mon:
			return "monday.\n";
			break;
		case enweekdays::tue:
                        return "tuesday.\n";
                        break;
		case enweekdays::wed:
                        return "wedneday.\n";
                        break;
		case enweekdays::thu:
                        return "thursday.\n";
                        break;
		case enweekdays::fri:
                        return "friday.\n";
                        break;
		case enweekdays::sat:
                        return "saturday.\n";
                        break;
		default:
			return "this is not a day.\n";
	}
}

int main()
{
	week_days_menu();

	cout << "this day is " << print_the_day(read_the_number())<< endl;
	return 0;
}
