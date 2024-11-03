#include <iostream>
using namespace std;

string read_a_string(string message)
{
	string str;
	
	cout << message;
	cin >> str;

	return str;
}

bool guess_letter_password(string password)
{
	string word = "";
	int counter = 1;

	for(char j = 65;j <= 90;j++)
	{ 
		for(char i = 65; i <= 90; i++)
		{
			for(char h = 65; h <= 90; h++)
			{
				word += i;
			       	word += j;
				word += h;
	
				cout << "trial[" << counter << "] : " << word << endl;	
				
				if(word == password)
				{
					cout << "\n password is " << word << endl;
					cout << "found after " << counter << " trial(s).\n";
					return true;
				}
	
				counter++;
				word = "";
			}
		
		}
	}
	return false;
}

int main()
{
	guess_letter_password(read_a_string("enter the password: "));
}
