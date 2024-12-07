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

int random_number(int from,int to)
{
	return rand() % (to - from + 1) + from;
}

void generate_key(int number,string arr[100000])
{
	string word = "";
	for(int i = 0;i < number;i++)
	{
		for(int j = 1;j <= 4;j++)
		{
			for(int h = 1;h <= 4;h++)
			{
				word += (char)random_number(65,90);
			}
			if (j != 4)
				word += '-';
		}
		arr[i] = word;
		cout << "array[ " << i + 1 << " ] : " << arr[i] << endl;
		word = "";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	string arr[100000];
	int number = read_number("enter how many keys do you need: ");
	
	generate_key(number,arr);
}
