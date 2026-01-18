#ifndef parkingarea_H
#define parkingarea_H
#include "ParkingSlot.h"

class ParkingArea{
    public:
    string areaName;
    static const int MAX_SLOTS=10;
    ParkingSlot slots[MAX_SLOTS];
    int occupiedSlots;

    ParkingArea(string name, int zoneID);
    ParkingArea();

    ParkingSlot* findAvailableSlot();
};
#endif

