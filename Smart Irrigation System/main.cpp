#include "irrigation.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int heat_value;
    int moist_value;
    int dust_value;
    int heat_alarm;
    int moist_alarm;
    int dust_alarm;

    heat_value = 25 + (rand() % 10);
    moist_value = rand() % 100;
    dust_value =  100 + rand() % 100;
    heat_alarm = read_heat(heat_value);
    moist_alarm = read_moist(moist_value);
    dust_alarm = read_dust(dust_value);

    cout << "heat = " << heat_value <<endl;
    cout << "moist = " << moist_value <<endl;
    cout << "dust = " << dust_value <<endl;
    irrigation(heat_alarm, moist_alarm, dust_alarm);
    return (0);
}