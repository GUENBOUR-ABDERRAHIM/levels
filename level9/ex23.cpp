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

void fill_the_array(int arr[100],int number)
{
	cout << "Array Elements: ";
	for(int i = 0; i < number;i++)
	{
		arr[i] = random_number(1,100);
		cout << arr[i] << "   ";
	}

	cout << endl;
}

int the_max_element(int arr[100],int number)
{
	int max = 0;
	for(int i = 0; i <= number;i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}

	return max;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
        int number = read_number("enter the size of your array: ");

	fill_the_array(arr,number);

	cout << "Max Number is: " << the_max_element(arr,number) << endl;



}
