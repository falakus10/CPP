#include <iostream>

using namespace std;

int main()
{
    int grade;

    cout << "Enter your grade: ";
    cin >> grade;
    if((grade >= 0) && (grade < 60))
        cout << "Your letter grade: F" << endl;
    else if((grade > 59) && (grade < 70))
        cout << "Your letter grade: D" << endl;
    else if((grade > 69) && (grade < 80))
        cout << "Your letter grade: C" << endl;
    else if((grade > 79) && (grade < 90))
        cout << "Your letter grade: B" << endl;
    else if((grade > 89) && (grade < 101))
        cout << "Your letter grade: A" << endl;
    else
        cout << "Your grade can't be bigger than 100 or lower than 0" << endl;
    return 0;
}