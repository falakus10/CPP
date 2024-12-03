#include "robot.h"
#include <iostream>

using namespace std;

int *change_location(int *active_location, char axis, int distance)
{
    int *new_location;

    new_location = new int[2];
    new_location[0] = active_location[0];
    new_location[1] = active_location[1];

    if(axis == 'y')
        new_location[1] = active_location[1] + distance;
    else if(axis == 'x')
        new_location[0] = active_location[0] + distance;
    return(new_location);
}

void get_info(int *active_location)
{
    char direction;
    int distance;
    char answer;

    cout << "Whic direction to move ?(up: u - down: d - left: l - right: r)" << endl;
    cin >> direction;
    cout << "How far would you like to move the arm forward ?(mm)"<<endl;
    cin >> distance;

    if(direction == 'u')
        active_location = change_location(active_location, 'y', distance);
    else if(direction == 'd')
        active_location = change_location(active_location, 'y', -distance);
    else if(direction == 'r')
        active_location = change_location(active_location, 'x', distance);
    else if(direction == 'l')
        active_location = change_location(active_location, 'x', -distance);
    else
        cout << "Wrong input."<< endl;
    cout << "New location: (" << active_location[0] << ", " << active_location[1] << ")" << endl;
    cout << "Do u want to move again? (yes: y / no: n)"<< endl;
    cin >> answer;
    if(answer == 'y')
        get_info(active_location);
    else if(answer == 'n')
        cout << "Last location: (" << active_location[0] << ", " << active_location[1] << ")" << endl;
}