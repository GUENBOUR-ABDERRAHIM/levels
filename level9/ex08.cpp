#include <iostream>
using namespace std;

int read_positive_number(string message)
{
	int number;
	do {
		cout << message;
		cin >> number;
	}while(number < 0);

	return number;
}

int calcule_frequency(int number,short digit)
{
	int remainder = 0;
	int frequency = 0;

	while(number > 0)
	{
		remainder = number % 10;

		if(remainder == digit)
			frequency++;

		number /= 10;
	}

	return frequency;
}

void calcule_frequency_of_all_digits(int number)
{
	int friquency;
	for (int i = 0;i < 10;i++)
	{
		friquency = calcule_frequency(number,i);

		if(friquency > 0)
		{
			cout << "digit " << i << " frequency is " << friquency << " time(s)\n";
		}
	}

}

int main()
{
	calcule_frequency_of_all_digits(read_positive_number("enter a number: "));
}
