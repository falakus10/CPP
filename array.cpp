#include <array>
#include <iostream>

using namespace std;


array<int, 3> numbers = {1, 2, 3};

int main()
{
    for(int i = 0; i < numbers.size(); i++)
            cout << numbers[i] << " "; 
    cout << endl;

    cout << numbers.begin();
    cout << endl;
    cout << numbers.size();
    return 0;
}