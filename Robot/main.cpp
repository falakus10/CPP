#include "robot.h"
#include <iostream>

using namespace std;

int main()
{
    int *location;
    char answer;

    location = new int[2];
    location[0] = 0;
    location[1] = 0;
    get_info(location);
    delete[] = location;
    return (0);
}