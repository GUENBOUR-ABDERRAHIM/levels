#include <iostream>
using namespace std;

string read_string(string message)
{
	string str;
	
	cout << message;
	getline(cin , str);

	return str;
}

string encrypt_string(string str)
{
	for(int i = 0; i < str.length();i++)
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122 ))
			str[i] = char((int)str[i] + 13);
	}

	return str;
}

string decrypt_string(string str)
{
	for(int i = 0; i < str.length();i++)
	{
		if(str[i] != ' ')	
			str[i] = char((int)str[i] - 13);
	
	}
	return str;
}

int main()
{
	string str = read_string("enter a string: ");
	string str2 = encrypt_string(str);
	string str3 = decrypt_string(str2);
	cout << "text betore encryption: " << str << endl;
	cout << "text after encryption: " << str2 << endl;
	cout << "text after decryption: " << str3 << endl;

}
