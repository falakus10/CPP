#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;

    Point() : x(0), y(0)
    {
        cout << "Default Constructor called\n";
    }

    Point(int xVal, int yVal) : x(xVal), y(yVal)
    {
        cout << "Parametrized Constructor called\n";
    }

    Point(const Point& other) : x(other.x), y(other.y)
    {
        cout << "Copy constructor called\n";
    }
};

int main()
{
    Point p1;
    cout << "p1: (" << p1.x << "," << p1.y << ")\n";

    Point p2(5, 10);
    cout << "p2: (" << p2.x << "," << p2.y << ")\n";
    
    Point p3 = p2;
    cout << "p3: (" << p3.x << "," << p3.y << ")\n";

    return 0;
}