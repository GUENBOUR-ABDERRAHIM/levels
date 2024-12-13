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

int ft_sqrt(int number)
{
    return (pow(number,.5));
}

int main()
{
    int number = read_number("enter a number: ") ;
    cout << "My function: " << ft_sqrt(number) << endl;
    cout << "C++ sqrt function: " << sqrt(number) << endl;
}