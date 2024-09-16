#include <iostream>
using namespace std;

int main()
{
	int totalsales, result;

	cout << "enter your total sales: ";
	cin >> totalsales;

	if(totalsales > 50000 && totalsales <= 100000)
	{
		result = totalsales * 0.05;
		cout << result << endl;
	}
	else if(totalsales > 100000 && totalsales <= 500000)
        {
                result = totalsales * 0.03;
                cout << result << endl;
        }
	else if(totalsales > 500000 && totalsales <= 1000000)
        {
                result = totalsales * 0.02;
                cout << result << endl;
        }
	else if(totalsales > 1000000)
        {
                result = totalsales * 0.01;
                cout << result << endl;
        }
	else
	{
		cout << 0 << endl;
	}


}
