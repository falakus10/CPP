#include <iostream>
using namespace std;

int main()
{
    int n;
    int number;
    int biggest;
    int smallest;

    cout <<"How many numbers: ";
    cin >> n;
    if(n > 0)
    {
        cout << "1. number: ";
        cin >> number;
        smallest = number;
        biggest = number;
    }

    for(int i = 1; i < n; i++)
    {
        cout << (i + 1) << ". number: ";
        cin >> number;

        if (number > biggest)
            biggest = number;
        if (number < smallest)
            smallest = number;
    }
    cout << "Biggest number: "<< biggest << endl;
    cout << "Smallest number: "<< smallest << endl;
    return 0;

}