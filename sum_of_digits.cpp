#include <iostream>
using namespace std;

int main()
{
    int number;
    int digit;
	int sum;

    sum = 0;
    cout << "Enter a number: ";
	cin >> number;
	
    while(number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    cout << "Sum of digit is = "<< sum <<endl;
	return 0;
}