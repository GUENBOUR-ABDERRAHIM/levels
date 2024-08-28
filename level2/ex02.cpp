#include <iostream>
using namespace std;

int main ()
{
	cout << ((5 > 6 && 7 == 7) || (1  || 0)) << endl;//1
	cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;//1
	cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl;//1
	cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;//0
	cout << (((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3)) && true) << endl;//0
	cout << ((((5 > 6) && !(7 <= 8)) && (8 > 1) ||(4 <= 3)) || true) << endl; //1

}
