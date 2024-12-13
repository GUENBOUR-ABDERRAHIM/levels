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

float faction_part(float number)
{
    return number - int(number);
}

int ft_round(int number)
{
    int nb1 = int(number);
    float nb2 = faction_part(number);

    if(abs(nb2) >= .5)
    {
        if(number > 0)
            return ++nb1;
        else
            return --nb1;
    }
    else
        return nb1; 
}

int main()
{
    int number = read_number("enter a number: ") ;
    cout << "My function: " << ft_round(number) << endl;
    cout << "C++ round function: " << round(number) << endl;

}