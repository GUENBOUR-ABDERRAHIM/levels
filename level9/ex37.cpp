#include <iostream>
#include <cmath>
using namespace std;

int read_number(string message)
{
    int number;
    cout << message;
    cin >> number;

    return number;

}

int ft_abs(int number)
{
    if(number >= 0)
        return number;
    else
        return number * (-1);
}

int main()
{
    int number = read_number("enter a number: ") ;
    cout << "My function: " << ft_abs(number) << endl;
    cout << "C++ ABS function: " <<abs(number) << endl;

}