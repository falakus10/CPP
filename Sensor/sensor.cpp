#include "sensor.h"
#include <iostream>
using namespace std;
int heat(int sensor_heat)
{
    if(sensor_heat > 50 || sensor_heat < 0)
        return 0;
    return 1;
}

int moisture(float moisture_value)
{
    if(moisture_value > 0.7 || moisture_value < 0.2)
        return 0;
    return 1;
}

void alarm(int heat, int moisture)
{
    if(moisture == 0 && heat == 0)
        cout << "Dangerous Heat and Moisture" << endl;
    else if(moisture == 1 && heat == 0)
        cout << "Dangerous Heat" << endl;
    else if(moisture == 0 && heat == 1)
        cout << "Dangerous Moisture" << endl;
    else 
        cout << "All good" << endl;
}