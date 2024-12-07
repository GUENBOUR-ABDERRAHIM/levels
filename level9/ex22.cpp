#include <iostream>
using namespace std;

int read_positive_number(string message)
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

void print_array(int number,int arr[100])
{
	cout << "Array Elements: ";
	for(int i = 0;i < number;i++)
	{
		arr[i] = random_number(1,100);
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int number = read_positive_number("enter your array size between 1 and 100: ");

	print_array(number,arr);
}
