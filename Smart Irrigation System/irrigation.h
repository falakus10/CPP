#ifndef IRRIGATION_H
#define IRRIGATION_H

int read_moist(int moist_level);
int read_heat(int heat_level);
int read_dust(int dust_level);
void irrigation(int heat, int moist, int dust);

#endif