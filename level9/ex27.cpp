#include <iostream>
using namespace std;

int read_number(string message)
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
	return  rand() % (to - from + 1) + from;
}

void fill_array(int arr[100], int length)
{
	cout << "Array 1 elements: ";
	for(int i = 0;i < length; i++)
	{
		arr[i] = random_number(1,100);
		cout << arr[i] << "  ";
	}

	cout << endl;
}

void copy_of_array(int arr[100],int arr2[100],int length)
{
	cout << "Array 2 elements after copy: ";
	for(int i = 0; i < length;i++)
	{
			arr2[i] = arr[i];
			cout << arr2[i] << "  ";
	}

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100];
	int length = read_number("enter the size of the array: ");

	fill_array(arr,length);
	copy_of_array(arr,arr2,length);

}
