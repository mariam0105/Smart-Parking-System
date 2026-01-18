#include "Zone.h"

Zone::Zone(int id) {
    this->zoneID = id;
    // Initialize areas
    for (int i = 0; i < MAX_AREAS; i++) {
        areas[i] = ParkingArea("Area" + to_string(i+1), id);
    }
}

Zone::Zone() {
    this->zoneID = -1;
}

// Logic to find a slot anywhere in this zone
ParkingSlot* Zone::findSlotInZone() {
    for (int i = 0; i < MAX_AREAS; i++) {
        ParkingSlot* found = areas[i].findAvailableSlot();
        if (found != nullptr) {
            return found; // Found a spot in one of the areas!
        }
    }
    return nullptr; // Entire zone is full
}