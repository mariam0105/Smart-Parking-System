#ifndef PARKINGAREA_H
#define PARKINGAREA_H
#include <string>
using namespace std;
#include "ParkingSlot.h"

class ParkingArea {
public:
    string areaName;
    static const int MAX_SLOTS = 10; 
    ParkingSlot slots[MAX_SLOTS];    
    int occupiedCount;

    ParkingArea(string name, int zoneID);
    ParkingArea();

   
    ParkingSlot* findAvailableSlot();
};

#endif