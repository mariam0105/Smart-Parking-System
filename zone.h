#ifndef zone_H
#define zone_H

#include "parkingarea.h"

class Zone{
    public:

    int zoneID;
    static const int MAX_AREAS=5;
    ParkingArea areas[MAX_AREAS];  
    Zone();

    
    ParkingSlot* findSlotInZone();
};
#endif