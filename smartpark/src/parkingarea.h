#ifndef PARKINGAREA_H
#define PARKINGAREA_H
#include "parkingslot.h"

#define MAX_SLOTS 10  // This fixes the 'MAX_SLOTS' error

struct ParkingArea {
    std::string areaID;
    std::string areaName; // This fixes the 'areaName' error
    int count;
    ParkingSlot slots[MAX_SLOTS];

    ParkingArea();
    ParkingSlot* findAvailableSlot();
};
#endif