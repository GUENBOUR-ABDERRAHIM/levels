#include <iostream>
using namespace std;

int read_number_in_range(string message,int from ,int to)
{
	int number;
	do {
		cout << message << endl;
		cin >> number;
	}while(number < from || number > to);

	return number;
}

string number_to_mounth(int number)
{
	switch (number)
	{
		case 1: return "january";
		case 2: return "february";
		case 3: return "march";
		case 4: return "april";
		case 5: return "may";
		case 6: return "june";
		case 7: return "july";
		case 8: return "august";
		case 9: return "september";
		case 10: return "october";
		case 11: return "november";
		case 12: return "december";
		default:
			 return "wrong mounth";
	}
}

void print_mounth()
{
	string mounth = number_to_mounth(read_number_in_range("enter a number from 1 to 12: ",1,12));
	cout << mounth << endl;
}

int main()
{
	print_mounth();
}
