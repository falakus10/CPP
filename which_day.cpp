#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day)
    {
        case (1):
            cout << "Day: Monday"<< endl;
            break;
        case (2):
            cout << "Day: Tuesday"<< endl;
            break;
        case (3):
            cout <<  "Day: Wednesday"<< endl;
            break;
        case (4):
            cout <<  "Day: Thursday"<< endl;
            break;
        case (5):
            cout <<  "Day: Friday"<< endl;
            break;
        case (6):
            cout <<  "Day: Saturday"<< endl;
            break;
        case (7):
            cout <<  "Day: Sunday"<< endl;
            break;
        default:
            cout << "Wrong input"<< endl;
            break;
    }
    return 0;
}