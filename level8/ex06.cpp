#include <iostream>
using namespace std;

short read_a_number(short from, short to)
{
	short grade;

	do{
		cout << "enter your grade (between 0 and 100): ";
		cin >> grade;
	
	}while(grade < from || grade > to);
	
	return grade;
}

char print_grade(short grade)
{
	if(grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if(grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';	
	else
		return 'F';
}

int main()
{
	char grade = print_grade(read_a_number(0,100));
	cout << "your result is " << grade << endl;
}
