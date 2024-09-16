#include <iostream>
using namespace std;

void read_grades(float grades[3])
{
	cout << "enter grade1: ";
	cin >> grades[0];
	cout << "enter grade2: ";
	cin >> grades[1];
	cout << "enter grade3: ";
	cin >> grades[2];
}

float average(float grades[3])
{
	return ((grades[0] + grades[1] + grades[2]) / 3);
}

void print_grades(float grades[3])
{
	cout << "the average of grades is: " << average(grades) << endl;
}
int main()
{
	float grades[3];

	read_grades(grades);
	print_grades(grades);
}
