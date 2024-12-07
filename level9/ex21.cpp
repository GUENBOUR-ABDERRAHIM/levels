#include <iostream>
using namespace std;

int read_number(string message)
{
	int number;
	do {
		cout << message;
		cin >> number;
	}while(number < 0);

	return number;
}

int array_elements(int element[100],int number)
{
	for(int i = 1; i <= number;i++)
	{
		cout << "Element[" << i << "] : ";
		cin >> element[i - 1]; 
	}

	return element[100];

}

void check_original_array(int element[100],int nb,int number)
{
	int counter = 0;

	cout << "Original array: ";
	for(int i = 0; i < number;i++)
	{
		cout << element[i] << "  ";
	}
	cout << endl;

	for(int j = 0;j <= number;j++)
	{
		if(element[j] == nb)
		{
			counter++;
		}
	}
	cout << nb << " is repeated " << counter << " time(s)\n";
}

int main()
{
	int number = read_number("enter how many array elements: ");
	int number2 = read_number("Enter the number you want to check: ");
	int element[number];

	cout << " Enter array elements:  \n";
	array_elements(element,number);
	check_original_array(element,number2,number);

}
