#include <iostream>
using namespace std;

int read_nb(int &nb)
{
	cout << "enter a number: ";
	cin >> nb;

	return nb;
}

void print_until_nb_for(int nb)
{
	cout << "with for loop \n";

	for(int i = 1; i <= nb; i++)
		cout << i << endl;
}

void print_until_nb_while(int nb)
{
	cout << "with while loop \n";

	int i = 1;
	while(i <= nb)
	{
		cout << i << endl;
		i++;
	}


}

void print_until_nb_dowhile(int nb)
{
	cout << "with do while loop \n";

	int  i = 1;
	do {
		cout << i << endl;
	i++;
	}while(i <= nb);

}

int main()
{
	int nb;
	read_nb(nb);
	print_until_nb_for(nb);
	print_until_nb_while(nb);
	print_until_nb_dowhile(nb);
}
