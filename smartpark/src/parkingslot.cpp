#include "parkingslot.h"

ParkingSlot::ParkingSlot() : slotID(""), isOccupied(false) {
    
}

ParkingSlot::ParkingSlot(std::string id) : slotID(id), isOccupied(false) {

}

void ParkingSlot::occupySlot() {
     isOccupied = true;
     }

void ParkingSlot::freeSlot() { 
    isOccupied = false;
 }