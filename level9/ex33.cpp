#include <iostream>
using namespace std;

int read_positive_number(string message)
{
    int number;

    do {
        cout << message;
        cin >> number;
    }while(number < 0);

    return number;
}

int random_number(int from,int to)
{
    return (rand() % (to - from + 1) + from);
}

void fill_arr(int arr[1000],int limite)
{
    int i = 0;
    while(i < limite)
    {
        arr[i] = random_number(1,100);
    i++;
    }

}

void print_arr(int arr[1000],int limite)
{
    int i = 0;
    while(i < limite)
    {
        cout << arr[i] << " ";
    i++;
    }
 cout << endl;
}

void count_odd_numbers(int arr[1000],int limite)
{
    int count = 0;
    int i = 0;
    while(i < limite)
    {
        if(arr[i] % 2 != 0)
            count++;
    i++;
    }
    cout << count << endl; 

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[1000];
    int limite = read_positive_number("enter a number: ");
    
    fill_arr(arr,limite);
    print_arr(arr,limite);
   count_odd_numbers(arr,limite);
   

}