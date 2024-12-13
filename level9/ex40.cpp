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

int ft_ceil(int number)
{
    if(number > 0)
        return int(number) + 1;
    else
        return int(number);
}

int main()
{
    int number = read_number("enter a number: ") ;
    cout << "My function: " << ft_ceil(number) << endl;
    cout << "C++ ceil function: " << ceil(number) << endl;

}