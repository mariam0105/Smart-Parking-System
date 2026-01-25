#include "zone.h"

Zone::Zone() : zoneID(0) {}

Zone::Zone(int id) : zoneID(id) {
    for(int i=0; i<5; i++) {
        areas[i].areaID = "Z" + std::to_string(id) + "_A" + std::to_string(i+1);
    }
}

ParkingSlot* Zone::findSlotInZone() {
    for(int i=0; i<5; i++) {
        ParkingSlot* s = areas[i].findAvailableSlot();
        if(s) return s;
    }
    return nullptr;
}