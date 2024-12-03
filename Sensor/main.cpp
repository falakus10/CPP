#include "sensor.h"
#include <iostream>
using namespace std;
int main()
{
    int heat_value;
    float moist_value;
    int heat_alarm;
    int moist_alarm;

    cout << "Enter the heat value: ";
    cin >> heat_value;
    cout << "Enter the moist value: ";
    cin >> moist_value;

    heat_alarm = heat(heat_value);
    moist_alarm = moisture(moist_value);

    alarm(heat_alarm, moist_alarm);
    return 0;
}