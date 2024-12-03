#include <iostream>
#include <array>

using namespace std;

array <int, 8> numbers = {2, 5, 7, 5, 9, 8, 6, 1};

void sort_numbers(array <int, 8>& arr)
{
    int temp;

    for(int i = 0; i < numbers.size() - 1; i++)
    {
        for(int j = 0; j < numbers.size() - i - 1; j++)
        {
            if(numbers.at(j) > numbers.at(j + 1))
            {
                temp = numbers.at(j);
                numbers.at(j) = numbers.at(j + 1);
                numbers.at(j + 1) = temp;
            }
        }
    }
}

int main()
{
    sort_numbers(numbers);
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << ", ";
    }
    return 0;
}