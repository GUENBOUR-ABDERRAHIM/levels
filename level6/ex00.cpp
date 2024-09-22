#include <iostream>
using namespace std;

void read_the_length(int arr[1000], int& length)
{
		cout << "enter a number from 1 to 1000: ";
		cin >> length;

		for (int i = 0; i <= length - 1; i++)
		{
			cout << "enter number " << i + 1 << endl;
			cin >> arr[i];
		}
}

void print_the_numbers(int arr[1000], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "the number " << i + 1 << " = " << arr[i] << endl;								}
		cout << "*****************************\n";
	}

int calcule_the_sum(int arr[1000], int length)
{
		int result = 0;

	for (int i = 0; i < length; i++)
	{
		result += arr[i];
	}
	return result;
}

int main()
{
	int arr[1000], length;
	float average;

	read_the_length(arr, length);
	print_the_numbers(arr,length);

	average = calcule_the_sum(arr, length) / length;

	cout << "the sum of this numbers is: " << calcule_the_sum(arr, length) << endl;
	cout << "the average og this numbers is: " << average << endl;

}
