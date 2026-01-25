#include "parkingarea.h"

ParkingArea::ParkingArea() {
    this->areaID = "N/A";
    this->areaName = "Unknown";
    this->count = 0;
}

ParkingSlot* ParkingArea::findAvailableSlot() {
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (!slots[i].isOccupied) {
            return &slots[i];
        }
    }
    return nullptr;
}