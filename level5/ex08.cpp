#include <iostream>
using namespace std;

void print_numbers(int nb)
{
        for(int i = nb; i >= 1; i--)
        {
                cout << i << endl;
        }
}

int main()
{
        int nb;
        cout << "enter a number: ";
        cin >> nb;
        print_numbers(nb);

}
