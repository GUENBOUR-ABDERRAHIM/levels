#include <iostream>
using namespace std;

int read_number_between(string message)
{
	int number;
	do {
		cout << message;
		cin >> number;
	}while(number < 0 || number > 100);

	return number;
}

int random_number(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void fill_array(int arr[100],int length)
{
	cout << "Array Elements: ";
	for(int i = 0; i < length;i++)
	{
		arr[i] = random_number(1,100);
		cout << arr[i] << "  ";
	}

	cout << endl;
}

int min_element(int arr[100],int length)
{
	int min = 100;
	for(int i = 0; i < length;i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}
	return min;
}

int main()
{
	srand((unsigned)time(NULL));

	int array_length = read_number_between("enter the size of your array: ");
	int arr[100];

	fill_array(arr,array_length);
	cout << "Min number is: " << min_element(arr,array_length) << endl;



}
