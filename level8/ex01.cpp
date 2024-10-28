#include <iostream>
using namespace std;

int read_nb()
{
	int nb;

	cout << "enter a number: ";
	cin >> nb;

	return nb;
}

void print_from_nb_to_1_with_for(int nb)
{
	cout << "with for loop \n";

	for(int i = nb ; i >= 1;i--)
		cout << i << endl;
}

void print_from_nb_to_1_with_while(int nb)
{
	cout << "with while loop \n";

	int i = nb;
	while(i >= 1)
	{
		cout << i << endl;
		i--;
	}
}

void print_from_nb_to_1_with_do_while(int nb)
{
	cout << "with do while loop \n";
	
	int i = nb;
	do{
		cout << i << endl;
	i--;
	}while(i >= 1);

}
int main()
{
	int nb = read_nb();

	print_from_nb_to_1_with_for(nb);
	print_from_nb_to_1_with_while(nb);
	print_from_nb_to_1_with_do_while(nb);
}
