#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string st1 = "43.22";
	double d1;
	int N1 = 20, in1;
	double N2 = 33.5;
	float N3 = 55.23 , f1, n4;
	string n1, n2, n3;

	d1 = stod(st1);
	cout << d1 << endl;
	f1 = stof(st1);
	cout << f1 << endl;
	in1 = stoi(st1);
	cout << in1 << endl;
	n1 = to_string(N1);
	cout << n1 << endl;
	n2 = to_string(N2);
	cout << n2 << endl;
	n3 = to_string(N3);
	cout << n3 << endl;	
	n4 = (int)N3;
	cout << n4 << endl;

}
