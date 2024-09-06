#include <iostream>
using namespace std;

void my_sum_procedure()
{
	int a;
	int b;
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;
	cout << a << " + " << b << " = " << a + b << endl;
}

int my_sum_fonction()
{
	int a;
	int b;
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;

	return (a + b);
}

int main ()
{
	my_sum_procedure();
	cout << my_sum_fonction() << endl;
	return 0;
}
