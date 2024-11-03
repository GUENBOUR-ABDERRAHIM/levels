#include <iostream>
using namespace std;

void print_words()
{
	for(char i = 65;i <= 90;i++)
	{
		for(char j = 65; j <= 90;j++)
		{
			for(char h = 65; h <= 90;h++)
			{
				cout << i << j << h << endl;
			}
		
		}
	
	}

}

int main()
{
	print_words();
}
