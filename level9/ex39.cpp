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

int ft_floor(int number)
{
    if(number > 0)
        return int(number);
    else
       return int(number) - 1;
}

int main()
{
    int number = read_number("enter a number: ") ;
    cout << "My function: " << ft_floor(number) << endl;
    cout << "C++ floor function: " << floor(number) << endl;

}