#include "irrigation.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int read_moist(int moist_level)
{
    if (moist_level > 30)
        return(0);
    return(1);
}
int read_heat(int heat_level)
{
    if((heat_level > 40) || (heat_level < 0))
        return (1);
    return (0);
}

int read_dust(int dust_level)
{
    if((dust_level <= 150) || (dust_level >= 500))
        return (1);
    return (0);
}

void irrigation(int heat, int moist, int dust)
{
    if(moist == 1)
        cout << "Irrigation started."<< endl;
    else
        cout << "No need for irigation."<< endl;
    if(heat == 1 && dust == 1)
        cout << "Dangerous heat and dust level" << endl;
    else if(heat == 1)
        cout << "Dangerous heat level" << endl;
    else if(dust == 1)
        cout << "Dangerous dust level" << endl;
    else
        cout << "Good dust and heat level." << endl;
}

