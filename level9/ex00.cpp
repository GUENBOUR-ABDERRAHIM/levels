#include <iostream>
using namespace std;

void print_top_numbers()
{
	cout << "  ";
	for(int i = 1; i <= 10; i++)
	{
		cout << "    " << i;
	}

	cout << endl;
}

void print_line()
{
	for(int i = 1; i <= 54; i++)
	{
		cout << "-";
	}
	cout << endl;
}

string print_spaces_and_bar(int i)
{
	if(i >= 10)
		return "  | ";
	else
		return "   | ";
}

string print_spaces(int i)
{
	if(i >= 10)
		return "   ";
	else
		return "    ";

}

void print_side_numbers()
{	
	for(int j = 1; j <= 10;j++)
	{
			cout << j << print_spaces_and_bar(j); 
		for(int i = 1;i <= 10; i++)
		{
				cout << i * j << print_spaces(i * j);
		}
	
		cout << endl;
	}
}

int main()
{
	cout << "\n\n                 Multiplication from 1 to 10\n\n";
	print_top_numbers();
	print_line();
	print_side_numbers();
}
