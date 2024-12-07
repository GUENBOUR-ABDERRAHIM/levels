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
	return rand() % (to - from + 1) + from;
}

void fill_array(int arr[100],int length)
{
	for(int i = 0; i < length;i++)
	{
		arr[i] = random_number(1,100);
	}

}

void print_array(int arr[100],int length,int nb)
{
	cout << "Array " << nb << " elemments: \n";
	for(int i = 0;i < length;i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;
}

void sum_element(int arr[100],int arr2[100],int length)
{
	int sum = 0;

	cout << "Sum of array1 and array2 elements: \n";
	for(int i = 0; i < length;i++)
	{
		sum += (arr[i] + arr2[i]);
		cout << sum << "  ";
		sum = 0;
	}

	cout << endl;

}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100],arr2[100];
	int length = read_number("enter the size of the array: ");

	fill_array(arr,length);
	fill_array(arr2,length);

	print_array(arr,length,1);
	print_array(arr2,length,2);

	sum_element(arr,arr2,length);

}
