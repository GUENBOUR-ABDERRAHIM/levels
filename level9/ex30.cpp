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

void fill_array_in_order(int arr[100],int length)
{
	for(int i = 0; i < length;i++)
	{
		arr[i] = i + 1;
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

int random_number(int from,int to)
{
	return rand() % (to - from + 1) + from;
}

void swap(int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void shuffle_array(int arr1[100],int length)
{
	for(int i = 0;i < length;i++)
	{
		swap(arr1[random_number(0,length - 1)],arr1[random_number(0,length - 1)]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100],arr2[100];
	int length = read_number("enter the size of the array: ");

	fill_array_in_order(arr1,length);
	cout << "Array elements before shuffle: \n";
	print_array(arr1,length);
	cout << "\nArray elemennts after shuffle: \n";
	shuffle_array(arr1,length);
	print_array(arr1,length);



}
