#include <iostream>
using namespace std;

enum encolors {red = 1, blue = 2, green = 3, yellow = 4};

int main()
{
	int c;
	encolors color;

	cout << "that is your favorite color: \n\n";
	cout << "(1) red\n";
	cout << "(2) blue\n";
	cout << "(3) green\n";
	cout << "(4) yellow\n\n";
	cout << "enter a number: ";
	cin >> c;


	color = (encolors) c;

	if(color == encolors::red)
	{
		system("color 4F");
	}
	else if(color == encolors::blue)
        {
                system("color 1F");
        }
	else if(color == encolors::green)
        {
                system("color 2F");
        }
	else if(color == encolors::yellow)
        {
                system("color 6F");
        }
	else
	{
		system("color 8F");
	}

}
