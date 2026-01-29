#ifndef PARKINGAREA_H
#define PARKINGAREA_H
#include "parkingslot.h"

#define MAX_SLOTS 10  
struct ParkingArea {
    std::string areaID;
    std::string areaName; 
    int count;
    ParkingSlot slots[MAX_SLOTS];

    ParkingArea();
    ParkingSlot* findAvailableSlot();
};
#endif