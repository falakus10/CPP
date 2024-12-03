#include <iostream>
using namespace std;

int main()
{
    int number;
    int i;
    bool prime;

    prime = 1;
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1)
        prime = 0;
    else
    {
        for(i = 2; i < (number / 2); i++)
        {
            if ((number % i) == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
        cout << number << " is a prime number"<< endl;
    else
        cout << number << " is not a prime number" << endl;
    return 0;
}