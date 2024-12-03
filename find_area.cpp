#include <iostream>
using namespace std;

int main()
{
    int radius;
    float area;
    float phi;

    cout << "Enter the radius: ";
    cin >> radius;
    phi = 3.14;
    area = phi * radius * radius;
    cout << "Area of the circle: " << area << endl;
    return 0;
}