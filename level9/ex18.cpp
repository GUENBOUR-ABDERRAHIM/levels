#include <iostream>
#include <cstdlib>
using namespace std;

int random_number(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << random_number(1,10000) << endl;

}
