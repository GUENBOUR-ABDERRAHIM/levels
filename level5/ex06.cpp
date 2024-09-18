#include <iostream>
using namespace std;

enum endays {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};

void print_days()
{
	cout << "**************************\n";
	cout << "(1) sunday\n";
	cout << "(2) monday\n";
	cout << "(3) tuesday\n";
	cout << "(4) wednesday\n";
	cout << "(5) thursday\n";
	cout << "(6) friday\n";
	cout << "(7) saturday\n\n";
	cout << "enter a number: ";
}

endays read_number()
{
	endays day;
	int c;
	cin >> c;
	day = (endays)c;
	return(day);
}

string the_day(endays day)
{
	switch(day)
	{
		case 1:
			return("sunday");
		case 2:
                        return("monday");
		case 3:
                        return("tuesday");
		case 4:
                        return("wednesday");
		case 5:
                        return("thursday");
		case 6:
                        return("friday");
		case 7:
                        return("saturday");
		default:
			return("this is not a day.");
	}
}

int main ()
{
	print_days();

	cout << "it is: " << the_day(read_number()) << endl;

}
