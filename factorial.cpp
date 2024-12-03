#include <iostream>
using namespace std;

int main()
{
    int number;
    int i;
    long long unsigned int factorial;

    factorial = 1;
    i = 1;
    cout << "Enter a positive number: ";
    cin >> number;

    if(number < 0)
        cout << "there isn't factorial of negative numbers."<< endl;
    else
    {
        while (i <= number)
        {
            factorial = factorial * i;
            i++;
        }
        cout << "Factorial: " << factorial <<endl;
    }
    return 0;
}