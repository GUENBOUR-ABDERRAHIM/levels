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

int random_number(int from,int to)
{
	return rand() % (to - from + 1) + from;
}

void fill_random_array(int arr[100],int length)
{
	for(int i = 0;i < length;i++)
	{
		arr[i] = random_number(1,100);
	}

}

void print_array(int arr[100],int length)
{
	for(int i = 0;i < length;i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;
}

void reverse_array(int arr[100],int arr2[100],int length)
{
	for(int i = length - 1; i >= 0;i--)
	{
			arr2[i] = arr[length - i - 1];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100],arr2[100];
	int length = read_number("enter the size of the array: ");

	cout << "Array 1 elements: \n";
	fill_random_array(arr1,length);
	print_array(arr1,length);

	cout << "Array 2 elements after copying array 1 inreversed order: \n";
	reverse_array(arr1,arr2,length);
	print_array(arr2,length);

}
