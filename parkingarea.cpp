#include "parkingarea.h"

ParkingArea::ParkingArea(string name, int zoneID){
    this->areaName=name;
    this->occupiedSlots=0;
//initialize slots with unique ids like A1,A2 etc.
    for(int i=0;i<MAX_SLOTS;i++){
        slots[i]=ParkingSlot(name + "_Slot" + to_string(i+1), zoneID);
    }
}
ParkingArea::ParkingArea(){
    this->areaName="Unknown";
    this->occupiedSlots=0;
}
//logic to find first available spot
ParkingSlot* ParkingArea::findAvailableSlot() {
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (slots[i].isAvailable()) {
            return &slots[i]; // Return the address of the free slot
        }
    }
    return nullptr; // Return nothing if the area is full
}