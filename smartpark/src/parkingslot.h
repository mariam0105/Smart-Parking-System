#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H
#include <string>

struct ParkingSlot {
    std::string slotID;
    bool isOccupied;
    ParkingSlot(); 
    ParkingSlot(std::string id);
    void occupySlot(); 
    void freeSlot();   
};
#endif