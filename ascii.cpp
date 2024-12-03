#include <iostream>

using namespace std;

int main()
{
    char character;
    int ascii;

    cout << "Enter a character: ";
    cin >> character;
    ascii = static_cast <int> (character);
    cout << "Character: " << character << endl;
    cout << "ASCII value: " << ascii << endl;
    return 0;
}