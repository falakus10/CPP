#include <iostream>

using namespace std;

int main()
{
    int size;
    int sum;

    cout << "Enter the lenght of array: ";
    cin >> size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter the value of " << i + 1 << ": ";
        cin >> arr[i];
    }
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    double average;
    average = static_cast<double> (sum) / size;
    cout << "Average of elemenths in array: "<< average <<endl;

    delete[] arr;
    return 0;
}
