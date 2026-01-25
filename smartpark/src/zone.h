#ifndef ZONE_H
#define ZONE_H
#include <vector>
#include "parkingarea.h"

struct Zone {
    int zoneID;
    std::vector<ParkingArea> areas;

    Zone(); 
    Zone(int id);
    ParkingSlot* findSlotInZone(); 
};
#endif