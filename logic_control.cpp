#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
        cout << "Number is positive" << endl;
    else if (number < 0)
        cout << "Number is negative" << endl;
    else
        cout << "Number is 0" << endl;
    return 0;
}